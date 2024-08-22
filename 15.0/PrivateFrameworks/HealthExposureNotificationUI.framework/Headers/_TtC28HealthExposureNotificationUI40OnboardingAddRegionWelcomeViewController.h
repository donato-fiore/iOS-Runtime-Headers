// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI40ONBOARDINGADDREGIONWELCOMEVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI40ONBOARDINGADDREGIONWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC28HealthExposureNotificationUI40OnboardingAddRegionWelcomeViewController : OBWelcomeController {
    ? flow;
    ? primaryButton;
    ? secondaryButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapHowExposureNotificationsWork;
-(void)didTapPrimaryButton;
-(void)didTapSecondaryButton;
-(void)viewDidLoad;


@end


#endif