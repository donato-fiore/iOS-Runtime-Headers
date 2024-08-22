// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STEPBYSTEPUIVIEWCONTROLLER_REPLACEBASESTATION_CONFIG_H
#define STEPBYSTEPUIVIEWCONTROLLER_REPLACEBASESTATION_CONFIG_H

@class DevicePicker, UILabel, UIView, NSString;
@protocol StepByStepUIDevicePicker;



@interface StepByStepUIViewController_ReplaceBaseStation_Config : DevicePicker <StepByStepUIDevicePicker>

 {
    UILabel *justTextLabel2;
}


@property (retain, nonatomic) UIView *justTextContainerView2; // ivar: justTextContainerView2
@property (retain, nonatomic) NSString *personalizedBaseName; // ivar: personalizedBaseName


-(BOOL)shouldChangeTextField:(id)arg0 atIndexPath:(id)arg1 forTextIndex:(NSUInteger)arg2 toString:(id)arg3 ;
-(id)devicePickerLabel;
-(id)deviceTableLabel;
-(void)dealloc;
-(void)loadView;
-(void)prepareParams;
-(void)primaryActionSelected:(BOOL)arg0 ;
-(void)selectedDeviceUpdated;
-(void)setupDevices;
-(void)setupEditableBaseStationName;
-(void)setupHeaderAndFooter;
-(void)updateNavigationButtons;
-(void)validateAndUpdateNextButton;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif