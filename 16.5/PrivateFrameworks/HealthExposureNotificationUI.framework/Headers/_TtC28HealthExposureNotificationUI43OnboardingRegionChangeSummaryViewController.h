// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI43ONBOARDINGREGIONCHANGESUMMARYVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI43ONBOARDINGREGIONCHANGESUMMARYVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC28HealthExposureNotificationUI43OnboardingRegionChangeSummaryViewController : OBWelcomeController {
    ? flow;
    ? healthAgencyModel;
    ? primaryButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapPrimaryButton;
-(void)viewDidLoad;


@end


#endif