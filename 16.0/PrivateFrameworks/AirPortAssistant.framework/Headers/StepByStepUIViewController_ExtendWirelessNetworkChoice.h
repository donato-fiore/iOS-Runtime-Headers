// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_EXTENDWIRELESSNETWORKCHOICE_H
#define STEPBYSTEPUIVIEWCONTROLLER_EXTENDWIRELESSNETWORKCHOICE_H

@class DevicePicker;
@protocol StepByStepUIDevicePicker;



@interface StepByStepUIViewController_ExtendWirelessNetworkChoice : DevicePicker <StepByStepUIDevicePicker>

 {
    int _selectorChoice;
}




-(BOOL)canBeExtendedWithDWDS;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)addBrowsedRecords:(id)arg0 toDestList:(id)arg1 ;
-(void)selectedDeviceUpdated;
-(void)setupDevices;
-(void)setupHeaderAndFooter;
-(void)stepByStepUpdateProgress:(id)arg0 forState:(int)arg1 ;
-(void)touchInCellAtIndexPath:(id)arg0 ;
-(void)updateNavigationButtons;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif