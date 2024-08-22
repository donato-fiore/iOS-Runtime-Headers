// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUHOMEASSISTANTDEVICESUNSUPPORTEDLANGUAGEFLOW_H
#define HUHOMEASSISTANTDEVICESUNSUPPORTEDLANGUAGEFLOW_H

@class NSString, HMHome, UIViewController<HUConfigurationViewController>, NAFuture;
@protocol HUFeatureOnboardingFlow;

#import <Foundation/Foundation.h>


@interface HUHomeAssistantDevicesUnsupportedLanguageFlow : NSObject <HUFeatureOnboardingFlow>



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
-(id)initWithHomeAssistantDevicesHavingLanguageMismatch:(id)arg0 home:(id)arg1 ;
-(id)processUserInput:(id)arg0 ;


@end


#endif