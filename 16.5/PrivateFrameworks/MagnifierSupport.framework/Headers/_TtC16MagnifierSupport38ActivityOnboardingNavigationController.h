// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16MAGNIFIERSUPPORT38ACTIVITYONBOARDINGNAVIGATIONCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT38ACTIVITYONBOARDINGNAVIGATIONCONTROLLER_H

@class OBNavigationController;



@interface _TtC16MagnifierSupport38ActivityOnboardingNavigationController : OBNavigationController {
    ? activityCreatedDelegate;
    ? activityInfoController;
    ? activityNameController;
    ? $__lazy_storage_$_activityControlsPresetController;
    ? $__lazy_storage_$_activityCustomizeControlsController;
    ? activityDoneController;
    ? continueToActivityNameButton;
    ? continueToControlsPresetsButton;
    ? continueToControlsCustomizationButton;
    ? continueToCommitActivityButton;
    ? commitActivityButton;
    ? currentActivityName;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)_createActivityNamePane;
-(void)_createActivityReadyPane;
-(void)_createControlsCustomizationPane;
-(void)_createControlsPresetPane;
-(void)_dismissActivityCustomizationPane;
-(void)viewDidLoad;


@end


#endif