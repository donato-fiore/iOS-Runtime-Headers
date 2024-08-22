// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_JOIN_CONFIG_H
#define STEPBYSTEPUIVIEWCONTROLLER_JOIN_CONFIG_H

@class DevicePicker, NSString;
@protocol StepByStepUIDevicePicker;



@interface StepByStepUIViewController_Join_Config : DevicePicker <StepByStepUIDevicePicker>

 {
    unsigned int productID;
    int deviceKind;
    BOOL supportsSpruce;
}


@property (retain, nonatomic) NSString *personalizedBaseName; // ivar: personalizedBaseName


-(BOOL)shouldChangeTextField:(id)arg0 atIndexPath:(id)arg1 forTextIndex:(NSUInteger)arg2 toString:(id)arg3 ;
-(BOOL)shouldEnableNextButton;
-(BOOL)showMoreOptions;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)loadView;
-(void)prepareParams;
-(void)primaryActionSelected:(BOOL)arg0 ;
-(void)selectedDeviceUpdated;
-(void)setupDevices;
-(void)setupEditableBaseStationName;
-(void)setupHeaderAndFooter;
-(void)setupTable;
-(void)syncTopoUIForTarget:(id)arg0 andSource:(id)arg1 andNetwork:(id)arg2 connectionType:(id)arg3 ;
-(void)textFieldDidChangeAtIndexPath:(id)arg0 ;
-(void)updateNavigationButtons;
-(void)validateAndUpdateNextButton;


@end


#endif