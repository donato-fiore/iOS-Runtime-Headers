// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI36ONBOARDINGHEROWITHLINKVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI36ONBOARDINGHEROWITHLINKVIEWCONTROLLER_H

@class OBWelcomeController;



@interface _TtC18HealthExperienceUI36OnboardingHeroWithLinkViewController : OBWelcomeController {
    ? heroImage;
    ? linkButtonText;
    ? linkButtonAction;
    ? linkButtonAccessibilityIdentifier;
    ? overrideContentHeight;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)viewDidLoad;


@end


#endif