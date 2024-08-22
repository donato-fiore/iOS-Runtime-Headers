// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC28HEALTHEXPOSURENOTIFICATIONUI31ONBOARDINGSUMMARYVIEWCONTROLLER_H
#define _TTC28HEALTHEXPOSURENOTIFICATIONUI31ONBOARDINGSUMMARYVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC28HealthExposureNotificationUI31OnboardingSummaryViewController : OBWelcomeController {
    ? flow;
    ? healthAgencyModel;
    ? primaryButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)didTapCancel;
-(void)didTapPrimaryButton;
-(void)viewDidLoad;


@end


#endif