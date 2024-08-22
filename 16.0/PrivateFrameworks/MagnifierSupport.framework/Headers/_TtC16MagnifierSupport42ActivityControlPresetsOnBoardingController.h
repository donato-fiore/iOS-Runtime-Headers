// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT42ACTIVITYCONTROLPRESETSONBOARDINGCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT42ACTIVITYCONTROLPRESETSONBOARDINGCONTROLLER_H

@class OBTableWelcomeController;



@interface _TtC16MagnifierSupport42ActivityControlPresetsOnBoardingController : OBTableWelcomeController {
    ? currentActivityName;
    ? isIntermediateActivity;
    ? $__lazy_storage_$_filtersCollectionCustomizationViewController;
    ? $__lazy_storage_$_peopleDetectionSettingsViewController;
    ? $__lazy_storage_$_doorDetectionSettingsViewController;
    ? $__lazy_storage_$_imageCaptionsSettingsViewController;
    ? $__lazy_storage_$_cameraTypeSettingsViewController;
    ? $__lazy_storage_$_brightnessFilterViewController;
    ? $__lazy_storage_$_contrastFilterViewController;
    ? $__lazy_storage_$_zoomViewController;
    ? $__lazy_storage_$_flashlightViewController;
    ? $__lazy_storage_$_colorFilterViewController;
    ? tableViewHeight;
    ? heightConstraint;
    ? $__lazy_storage_$_dataSource;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif