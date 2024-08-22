// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBALWAYSONTELEMETRYEMITTER_H
#define SBALWAYSONTELEMETRYEMITTER_H

@class SBAlwaysOnDefaults, BLSBacklight, NSTimer, BMDisplayAlwaysOn, NSDictionary, NSString;
@protocol BLSBacklightStateObserving, BLSHBacklightHostTelemetryDelegate, SBBacklightEnvironmentSessionProviderObserver, BLSHAssertionServiceObserving, BLSHFlipbookTelemetry, BSDefaultObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBBacklightEnvironmentSessionProvider.h"
#import "SBAlwaysOnTelemetryMetrics.h"
#import "SBAlwaysOnPolicyCoordinator.h"

@interface SBAlwaysOnTelemetryEmitter : NSObject <BLSBacklightStateObserving, BLSHBacklightHostTelemetryDelegate, SBBacklightEnvironmentSessionProviderObserver, BLSHAssertionServiceObserving, BLSHFlipbookTelemetry>

 {
    SBBacklightEnvironmentSessionProvider *_backlightEnvironmentSessionProvider;
    SBAlwaysOnDefaults *_alwaysOnDefaults;
    id<BSDefaultObserver> *_alwaysOnDefaultsObserverToken;
    BLSBacklight *_backlight;
    NSObject<OS_dispatch_queue> *_metricsQueue;
    SBAlwaysOnTelemetryMetrics *_mq_metrics;
    NSTimer *_mq_deferredLoggingTimer;
    NSObject<OS_dispatch_queue> *_powerlogSendQueue;
    NSObject<OS_dispatch_queue> *_biomeWriterQueue;
    BMDisplayAlwaysOn *_lastBiomeEvent;
    NSDictionary *_lastAlwaysOnEnabledPayload;
}


@property (weak, nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator; // ivar: _alwaysOnPolicyCoordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
-(id)init;
-(id)initWithBacklightEnvironmentSessionProvider:(id)arg0 ;
-(void)_significantTimeChange:(id)arg0 ;
-(void)backlight:(id)arg0 didChangeAlwaysOnEnabled:(BOOL)arg1 ;
-(void)backlightEnvironmentSessionsProvider:(id)arg0 didUpdatePresentation:(id)arg1 withBundleIdentifiers:(id)arg2 ;
-(void)backlightTelemetrySource:(id)arg0 didAcquireSystemActivityWithError:(id)arg1 isActive:(BOOL)arg2 details:(id)arg3 forEvent:(id)arg4 ;
-(void)backlightTelemetrySource:(id)arg0 didCompleteUpdateToFlipbookState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightTelemetrySource:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightTelemetrySource:(id)arg0 didUpdateDisplayForState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightTelemetrySource:(id)arg0 didUpdateVisualContentsToBeginTransitionToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightTelemetrySource:(id)arg0 hadExistingSystemActivityForEvent:(id)arg1 ;
-(void)backlightTelemetrySource:(id)arg0 willTransitionToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)backlightTelemetrySource:(id)arg0 willUpdateDisplayForState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)completeIntializationAfterBLSStartup;
-(void)dealloc;
-(void)logTelemetryForInvalidation:(id)arg0 ;
-(void)logTelemetryForRenderSession:(id)arg0 ;
-(void)logTelemetryForRequestDates:(id)arg0 ;
-(void)service:(id)arg0 didAcquireAssertion:(id)arg1 ;
-(void)service:(id)arg0 didCancelAssertion:(id)arg1 withError:(id)arg2 ;
-(void)service:(id)arg0 didPauseAssertion:(id)arg1 ;
-(void)service:(id)arg0 didResumeAssertion:(id)arg1 ;


@end


#endif