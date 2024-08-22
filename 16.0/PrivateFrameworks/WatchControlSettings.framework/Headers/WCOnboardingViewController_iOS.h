// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCONBOARDINGVIEWCONTROLLER_IOS_H
#define WCONBOARDINGVIEWCONTROLLER_IOS_H

@class OBNavigationController;
@protocol WCOnboardingObserver;



@interface WCOnboardingViewController_iOS : OBNavigationController

@property (weak, nonatomic) NSObject<WCOnboardingObserver> *onboardingObserver; // ivar: _onboardingObserver


-(void)_cancelOnboarding;
-(void)_tryItOut;
-(void)_turnOn;
-(void)viewDidLoad;


@end


#endif