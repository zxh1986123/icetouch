// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// This copy of Ice Touch is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#import <UIKit/UIKit.h>

@class TestViewController;

@interface TestSelectController : UIViewController<UIPickerViewDataSource, UIPickerViewDelegate>
{
@private
    IBOutlet UIPickerView* pickerView;
    IBOutlet UISegmentedControl* protocol;
    IBOutlet UISwitch* loopSwitch;
    NSArray* tests;
    TestViewController *testViewController;
}

-(IBAction)runTest:(id)sender;

@end
