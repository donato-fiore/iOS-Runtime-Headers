// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI42ONBOARDINGREGIONNOTAVAILABLEVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI42ONBOARDINGREGIONNOTAVAILABLEVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC28HealthExposureNotificationUI42OnboardingRegionNotAvailableViewController : OBWelcomeController {
    ? flow;
    ? region;
    ? primaryButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapPrimaryButton;
-(void)viewDidLoad;


@end


#endif