// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_EXTENDWIRELESS_CONFIG_H
#define STEPBYSTEPUIVIEWCONTROLLER_EXTENDWIRELESS_CONFIG_H

@class DevicePicker, NSString;
@protocol StepByStepUIDevicePicker;



@interface StepByStepUIViewController_ExtendWireless_Config : DevicePicker <StepByStepUIDevicePicker>

 {
    NSString *connectionType;
    NSString *unlocalizedStatusString;
    BOOL isReallyJoin;
}


@property (retain, nonatomic) NSString *personalizedBaseName; // ivar: personalizedBaseName


-(BOOL)shouldChangeTextField:(id)arg0 atIndexPath:(id)arg1 forTextIndex:(NSUInteger)arg2 toString:(id)arg3 ;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)primaryActionSelected:(BOOL)arg0 ;
-(void)selectedDeviceUpdated;
-(void)setupAndShowEditableBaseStationName;
-(void)setupDevices;
-(void)setupHeaderAndFooter;
-(void)updateNavigationButtons;
-(void)validateAndUpdateNextButton;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif