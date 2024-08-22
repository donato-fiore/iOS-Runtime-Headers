// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI51SUMMARYSHARINGINVITATIONENABLEUPDATESVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI51SUMMARYSHARINGINVITATIONENABLEUPDATESVIEWCONTROLLER_H

@class TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton;



@interface _TtC18HealthExperienceUI51SummarySharingInvitationEnableUpdatesViewController : TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton {
    ? healthStore;
    ? sharingEntryStore;
    ? profileInformation;
    ? notificationAuthorizationStatus;
    ? healthAppNotificationManager;
    ? notificationSettingsManager;
    ? selectedContactPhotoPublisher;
    ? notificationAuthorizationCancellable;
    ? $__lazy_storage_$_disableUpdatesButton;
}




-(void)disableButtonTapped:(id)arg0 ;
-(void)fetchNotificationAuthorizationStatus;
-(void)nextButtonTapped:(id)arg0 ;


@end


#endif