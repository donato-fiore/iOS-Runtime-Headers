// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUANNOUNCEONBOARDINGFLOW_H
#define HUANNOUNCEONBOARDINGFLOW_H

@class NSString, HMHome, UIViewController<HUConfigurationViewController>, NAFuture, NSArray;
@protocol HUFeatureOnboardingFlow;

#import <Foundation/Foundation.h>


@interface HUAnnounceOnboardingFlow : NSObject <HUFeatureOnboardingFlow>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: home
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // ivar: initialViewController
@property (retain, nonatomic) NAFuture *onboardingFuture; // ivar: _onboardingFuture
@property (retain, nonatomic) NSArray *requiredSteps; // ivar: _requiredSteps
@property (readonly, nonatomic) BOOL shouldAbortAllOnboarding; // ivar: shouldAbortAllOnboarding
@property (readonly, nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // ivar: shouldAbortThisOnboardingFlowGroup
@property (readonly) Class superclass;


+(id)allSteps;
+(id)needsOnboardingForHome:(id)arg0 options:(id)arg1 ;
-(BOOL)shouldShowStep:(NSUInteger)arg0 withOptions:(id)arg1 ;
-(id)initWithUsageOptions:(id)arg0 home:(id)arg1 ;
-(id)processUserInput:(id)arg0 ;
-(id)viewControllerForStep:(NSUInteger)arg0 ;


@end


#endif