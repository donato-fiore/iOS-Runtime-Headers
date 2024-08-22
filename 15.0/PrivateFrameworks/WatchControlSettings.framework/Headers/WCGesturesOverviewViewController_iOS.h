// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WCGESTURESOVERVIEWVIEWCONTROLLER_IOS_H
#define WCGESTURESOVERVIEWVIEWCONTROLLER_IOS_H

@class OBWelcomeController;
@protocol WCOnboardingObserver;



@interface WCGesturesOverviewViewController_iOS : OBWelcomeController

@property (weak, nonatomic) NSObject<WCOnboardingObserver> *onboardingObserver; // ivar: _onboardingObserver


+(id)createGesturesOverviewViewController;
-(void)_tryItOutOnAppleWatch;
-(void)dismissOnboarding;
-(void)viewDidLoad;


@end


#endif