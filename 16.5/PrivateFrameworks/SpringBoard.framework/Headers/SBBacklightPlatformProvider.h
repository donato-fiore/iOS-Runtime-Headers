// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBACKLIGHTPLATFORMPROVIDER_H
#define SBBACKLIGHTPLATFORMPROVIDER_H

@class SBFWakeAnimationSettings, SBAlwaysOnDefaults, BLSHFlipbookSpecification, NSHashTable, NSString, UIWindowScene;
@protocol SBBacklightSignificantUserInteractionMonitorObserver, BLSHFlipbookTelemetry, BLSHBacklightPlatformProvider, BLSHBacklightEnvironmentSessionProviding;

#import <Foundation/Foundation.h>

#import "SBBacklightEnvironmentSessionProvider.h"
#import "SBBacklightBlankingWindow.h"
#import "SBAlwaysOnBrightnessCurveController.h"
#import "SBAveragePixelLuminanceLimitController.h"
#import "SBAlwaysOnPolicyCoordinator.h"
#import "SBBacklightSignificantUserInteractionMonitor.h"

@interface SBBacklightPlatformProvider : NSObject <SBBacklightSignificantUserInteractionMonitorObserver, BLSHFlipbookTelemetry, BLSHBacklightPlatformProvider>

 {
    os_unfair_lock_s _lock;
    SBFWakeAnimationSettings *_wakeAnimationSettings;
    SBBacklightEnvironmentSessionProvider *_sessionProvider;
    SBBacklightBlankingWindow *_blankingWindow;
    BOOL _lock_showingBlankingWindow;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    SBAlwaysOnBrightnessCurveController *_brightnessCurveController;
    SBAveragePixelLuminanceLimitController *_aplLimitController;
    BLSHFlipbookSpecification *_flipbookSpecification;
    id<BLSHFlipbookTelemetry> *_telemetryEmitter;
    BOOL _lock_alwaysOnEnabled;
    NSHashTable *_lock_alwaysOnObservers;
}


@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator; // ivar: _alwaysOnPolicyCoordinator
@property (readonly, nonatomic) float backlightDimmedFactor;
@property (readonly, nonatomic) CGFloat backlightDimmingDuration;
@property (readonly, nonatomic) CGFloat backlightFadeInDuration;
@property (readonly, nonatomic) CGFloat backlightFadeOutDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
@property (readonly, nonatomic) NSObject<BLSHFlipbookTelemetry> *flipbookTelemetryDelegate;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<BLSHBacklightEnvironmentSessionProviding> *sessionProvider;
@property (readonly, nonatomic, getter=isShowingBlankingWindow) BOOL showingBlankingWindow;
@property (retain, nonatomic) SBBacklightSignificantUserInteractionMonitor *significantUserInteractionMonitor; // ivar: _significantUserInteractionMonitor
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressionSupported;
@property (readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) BOOL useAlwaysOnBrightnessCurve;
@property (weak, nonatomic) UIWindowScene *windowScene; // ivar: _windowScene


+(BOOL)deviceSupportsAlwaysOn;
-(id)init;
-(id)initWithBacklightEnvironmentSessionProvider:(id)arg0 ;
-(void)_notifyObserversOfSignificantUserInteraction;
-(void)_setBlankingWindowVisible:(BOOL)arg0 fadeDuration:(CGFloat)arg1 ;
-(void)_updateAlwaysOnEnabled;
-(void)addObserver:(id)arg0 ;
-(void)completeInitializationAfterBLSStartup;
-(void)criticalAssertDidFail:(id)arg0 resetFailure:(id)arg1 ;
-(void)logTelemetryForInvalidation:(id)arg0 ;
-(void)logTelemetryForRenderSession:(id)arg0 ;
-(void)logTelemetryForRequestDates:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)showBlankingWindow:(BOOL)arg0 withFadeDuration:(CGFloat)arg1 ;
-(void)significantUserInteractionMonitorDetectedSignificantUserInteraction:(id)arg0 ;
-(void)useAlwaysOnBrightnessCurve:(BOOL)arg0 withRampDuration:(CGFloat)arg1 ;


@end


#endif