// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI51SUMMARYSHARINGINVITATIONENABLEUPDATESVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI51SUMMARYSHARINGINVITATIONENABLEUPDATESVIEWCONTROLLER_H

@class TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton;



@interface _TtC18HealthExperienceUI51SummarySharingInvitationEnableUpdatesViewController : TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton {
    ? sharingEntryStore;
    ? profileInformation;
    ? inviteStreamCancellable;
    ? notificationManager;
    ? selectedContactPhotoPublisher;
    ? disableUpdatesButton;
}




-(void)disableButtonTapped;
-(void)nextButtonTapped:(id)arg0 ;


@end


#endif