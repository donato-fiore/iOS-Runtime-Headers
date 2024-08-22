// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI57SUMMARYSHARINGONBOARDINGCHOOSESELECTIONFLOWVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI57SUMMARYSHARINGONBOARDINGCHOOSESELECTIONFLOWVIEWCONTROLLER_H

@class TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton;



@interface _TtC18HealthExperienceUI57SummarySharingOnboardingChooseSelectionFlowViewController : TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton {
    ? healthExperienceStore;
    ? healthStore;
    ? selectedContact;
    ? selectedContactPhotoPublisher;
    ? selectionFlowContext;
    ? selectedItems;
    ? $__lazy_storage_$_setUpManuallyButton;
}




-(void)cancelButtonTapped:(id)arg0 ;
-(void)manualFlowButtonTapped:(id)arg0 ;
-(void)nextButtonTapped:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif