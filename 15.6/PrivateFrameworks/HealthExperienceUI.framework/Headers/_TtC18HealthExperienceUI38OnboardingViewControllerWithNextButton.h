// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHEXPERIENCEUI38ONBOARDINGVIEWCONTROLLERWITHNEXTBUTTON_H
#define _TTC18HEALTHEXPERIENCEUI38ONBOARDINGVIEWCONTROLLERWITHNEXTBUTTON_H

@class OBWelcomeController;



@interface _TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton : OBWelcomeController {
    ? $__lazy_storage_$_nextButton;
    ? $__lazy_storage_$_doneButton;
    ? $__lazy_storage_$_cancelButton;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)nextButtonTapped:(id)arg0 ;


@end


#endif