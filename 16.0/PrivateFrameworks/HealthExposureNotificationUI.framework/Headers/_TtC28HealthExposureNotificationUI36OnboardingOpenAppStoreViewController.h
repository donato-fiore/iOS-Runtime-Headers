// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI36ONBOARDINGOPENAPPSTOREVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI36ONBOARDINGOPENAPPSTOREVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC28HealthExposureNotificationUI36OnboardingOpenAppStoreViewController : OBWelcomeController {
    ? flow;
    ? healthAgencyModel;
    ? appStoreURL;
    ? primaryButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapPrimaryButton;
-(void)openAppStoreButtonTapped;
-(void)viewDidLoad;


@end


#endif