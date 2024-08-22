// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULANGUAGESETUPONBOARDINGFLOW_H
#define HULANGUAGESETUPONBOARDINGFLOW_H

@class NSString, HMHome, UIViewController<HUConfigurationViewController>, NAFuture, NSDictionary;
@protocol HUFeatureOnboardingFlow;

#import <Foundation/Foundation.h>


@interface HULanguageSetupOnboardingFlow : NSObject <HUFeatureOnboardingFlow>



@property (retain, nonatomic) NSString *assistantDeviceIntendedRecognitionLanguage; // ivar: _assistantDeviceIntendedRecognitionLanguage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL forceOnboardingFinishedForErrorRecovery; // ivar: _forceOnboardingFinishedForErrorRecovery
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // ivar: _initialViewController
@property (nonatomic) NSUInteger languageOnboardingFlowType; // ivar: _languageOnboardingFlowType
@property (retain, nonatomic) NAFuture *onboardingFuture; // ivar: _onboardingFuture
@property (nonatomic) BOOL shouldAbortAllOnboarding; // ivar: _shouldAbortAllOnboarding
@property (nonatomic) BOOL shouldAbortThisOnboardingFlowGroup; // ivar: _shouldAbortThisOnboardingFlowGroup
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *usageOptions; // ivar: _usageOptions


+(id)needsOnboardingForHome:(id)arg0 options:(id)arg1 ;
-(id)_determineNextViewControllerWithPriorResults:(id)arg0 ;
-(id)initWithUsageOptions:(id)arg0 home:(id)arg1 ;
-(id)processUserInput:(id)arg0 ;


@end


#endif