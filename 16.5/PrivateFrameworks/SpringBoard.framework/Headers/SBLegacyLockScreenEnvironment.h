// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLEGACYLOCKSCREENENVIRONMENT_H
#define SBLEGACYLOCKSCREENENVIRONMENT_H

@class NSString, UIViewController;
@protocol BSDescriptionProviding, SBLockScreenEnvironment, SBApplicationHosting, SBLockScreenApplicationLaunching, SBAutoUnlockRule, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBBiometricUnlockBehavior, SBLockScreenBlockedStateObserving, SBButtonEventsHandler, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBIdleTimerProviding, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBFScreenWakeAnimationTarget, SBLockScreenSpotlightPresenting, SBLockScreenStatusBarTransitioning, SBSWidgetMetricsProviding;

#import <Foundation/Foundation.h>

#import "SBLockScreenViewControllerBase.h"

@interface SBLegacyLockScreenEnvironment : NSObject <BSDescriptionProviding, SBLockScreenEnvironment>

 {
    SBLockScreenViewControllerBase *_lockScreenViewController;
}


@property (readonly, nonatomic) NSObject<SBApplicationHosting> *applicationHoster;
@property (readonly, nonatomic) NSObject<SBLockScreenApplicationLaunching> *applicationLauncher;
@property (readonly, nonatomic) NSObject<SBAutoUnlockRule> *autoUnlockRule;
@property (readonly, nonatomic) NSObject<SBLockScreenBacklightControlling> *backlightController;
@property (readonly, nonatomic) NSObject<SBLockScreenBehaviorSuppressing> *behaviorSuppressor;
@property (readonly, nonatomic) NSObject<SBBiometricUnlockBehavior> *biometricUnlockBehavior;
@property (readonly, nonatomic) NSObject<SBLockScreenBlockedStateObserving> *blockedStateObserver;
@property (readonly, nonatomic) NSObject<SBButtonEventsHandler> *buttonEventsHandler;
@property (readonly, nonatomic) NSObject<SBLockScreenButtonObserving> *buttonObserver;
@property (readonly, nonatomic) NSObject<SBLockScreenCallHandling> *callController;
@property (readonly, nonatomic) NSObject<SBLockScreenContentStateProviding> *contentStateProvider;
@property (readonly, nonatomic) NSObject<SBLockScreenCustomActionStoring> *customActionStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SBLockScreenIdleTimerControlling> *idleTimerController;
@property (readonly, nonatomic) NSObject<SBIdleTimerProviding> *idleTimerProvider;
@property (readonly, nonatomic) NSObject<SBLockScreenLockingAndUnlocking> *lockController;
@property (readonly, nonatomic) NSObject<SBLockScreenMediaControlsPresenting> *mediaControlsPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenPasscodeViewPresenting> *passcodeViewPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenPluginPresenting> *pluginPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenProximityBehaviorProviding> *proximityBehaviorProvider;
@property (readonly, nonatomic) UIViewController *rootViewController;
@property (readonly, nonatomic) NSObject<SBFScreenWakeAnimationTarget> *screenWakeAnimationTarget;
@property (readonly, nonatomic) NSObject<SBLockScreenSpotlightPresenting> *spotlightPresenter;
@property (readonly, nonatomic) NSObject<SBLockScreenStatusBarTransitioning> *statusBarTransitionController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SBSWidgetMetricsProviding> *widgetMetricsProvider;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithLockScreenViewController:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif