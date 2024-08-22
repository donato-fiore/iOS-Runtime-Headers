// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_REPLACENETWORKCHOICE_H
#define STEPBYSTEPUIVIEWCONTROLLER_REPLACENETWORKCHOICE_H

@class DevicePicker;
@protocol StepByStepUIDevicePicker;



@interface StepByStepUIViewController_ReplaceNetworkChoice : DevicePicker <StepByStepUIDevicePicker>





-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)prepareParams;
-(void)setupDevices;
-(void)setupHeaderAndFooter;
-(void)updateNavigationButtons;


@end


#endif