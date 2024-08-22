// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18HEALTHEXPERIENCEUI35ONBOARDINGSTACKEDITEMVIEWCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI35ONBOARDINGSTACKEDITEMVIEWCONTROLLER_H

@class TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton;



@interface _TtC18HealthExperienceUI35OnboardingStackedItemViewController : TtC18HealthExperienceUI38OnboardingViewControllerWithNextButton {
    ? nextIndexToAnimate;
    ? isAnimating;
    ? backgroundViews;
    ? stackedItems;
    ? shouldNextButtonDisplayContinueOnLastItem;
    ? contentViewBottomConstraint;
}




-(void)nextButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif