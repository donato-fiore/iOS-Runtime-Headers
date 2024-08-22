// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSWITCHHOMESWELCOMEONBOARDINGFLOW_H
#define HUSWITCHHOMESWELCOMEONBOARDINGFLOW_H

@class NSString, HMHome, UIViewController<HUConfigurationViewController>, NAFuture;
@protocol HUFeatureOnboardingFlow;

#import <Foundation/Foundation.h>


@interface HUSwitchHomesWelcomeOnboardingFlow : NSObject <HUFeatureOnboardingFlow>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // ivar: _initialViewController
@property (retain, nonatomic) NAFuture *onboardingFuture; // ivar: _onboardingFuture
@property (nonatomic) BOOL shouldAbortAllOnboarding; // ivar: _shouldAbortAllOnboarding
@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // ivar: _shouldAbortThisOnboardingFlowGroup
@property (readonly) Class superclass;


+(id)needsOnboardingForHome:(id)arg0 options:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)processUserInput:(id)arg0 ;


@end


#endif