// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCDIGESTONBOARDINGINTRODUCTIONVIEWCONTROLLER_H
#define NCDIGESTONBOARDINGINTRODUCTIONVIEWCONTROLLER_H

@class NSString, UIView, UILabel;


#import "NCOnboardingViewController.h"

@interface NCDigestOnboardingIntroductionViewController : NCOnboardingViewController {
    NSString *_deferButtonText;
    UIView *_explainer1Container;
    UILabel *_explainer1Title;
    UILabel *_explainer1Label;
    UIView *_explainer2Container;
    UILabel *_explainer2Title;
    UILabel *_explainer2Label;
    UILabel *_clockLabel;
}




+(id)introductionViewControllerWithDeferButtonText:(id)arg0 ;
-(id)customContentView;
-(id)initWithDeferButtonText:(id)arg0 ;
-(id)secondaryCustomContentView;
-(void)_deferButtonPressed:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif