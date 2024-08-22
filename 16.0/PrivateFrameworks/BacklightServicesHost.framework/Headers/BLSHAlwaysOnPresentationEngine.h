// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHALWAYSONPRESENTATIONENGINE_H
#define BLSHALWAYSONPRESENTATIONENGINE_H

@class SWSystemSleepMonitor, NSMutableArray, NSDateInterval, NSString;
@protocol BLSHEngineRequestDatesOperationDelegate, BLSHEngineRenderFlipbookSessionDelegate, BLSHBacklightInactiveEnvironmentSessionObserving, SWSystemSleepObserver, BLSHAlwaysFillFlipbookProvider, BLSHPseudoFlipbookProvider, BLSHBacklightSceneHostEnvironmentObserver, BLSFlipbookDiagnosticsProviding, BLSHOSInterfaceProviding, BLSHInactiveBudgetPolicing_Private, BLSHFlipbookTelemetry, BLSHFlipbook, BLSHRenderedFlipbookFrame, BSInvalidatable, BSTimerScheduleQuerying><BSInvalidatable;

#import <Foundation/Foundation.h>

#import "BLSHFlipbookSpecification.h"
#import "BLSHDateSpecifierModel.h"
#import "BLSHBacklightInactiveEnvironmentSession.h"
#import "BLSHEngineRequestDatesOperation.h"
#import "BLSHPresentationDateSpecifier.h"
#import "BLSHPresentationUpdates.h"
#import "BLSHEngineRenderFlipbookSession.h"

@interface BLSHAlwaysOnPresentationEngine : NSObject <BLSHEngineRequestDatesOperationDelegate, BLSHEngineRenderFlipbookSessionDelegate, BLSHBacklightInactiveEnvironmentSessionObserving, SWSystemSleepObserver, BLSHAlwaysFillFlipbookProvider, BLSHPseudoFlipbookProvider, BLSHBacklightSceneHostEnvironmentObserver, BLSFlipbookDiagnosticsProviding>

 {
    os_unfair_lock_s _lock;
    id<BLSHOSInterfaceProviding> *_osInterfaceProvider;
    id<BLSHInactiveBudgetPolicing_Private> *_inactiveBudgetPolicy;
    id<BLSHFlipbookTelemetry> *_flipbookTelemetryDelegate;
    SWSystemSleepMonitor *_sleepMonitor;
    BLSHFlipbookSpecification *_flipbookSpecification;
    id<BLSHFlipbook> *_lock_flipbook;
    id<BLSHRenderedFlipbookFrame> *_lock_frameOnGlassWhenFlipbookLastCancelled;
    NSMutableArray *_lock_renderedFlipbookFramesHistory;
    BLSHDateSpecifierModel *_lock_presentationDatesModel;
    BLSHBacklightInactiveEnvironmentSession *_lock_inactiveSession;
    BLSHEngineRequestDatesOperation *_lock_requestDatesOperation;
    BLSHPresentationDateSpecifier *_lock_lastLiveSpecifier;
    NSDateInterval *_lock_lastRequestInterval;
    BLSHPresentationUpdates *_lock_cachedFlipbookUpdates;
    BLSHPresentationDateSpecifier *_lock_renderingSpecifier;
    BLSHEngineRenderFlipbookSession *_lock_renderFlipbookSession;
    id<BSInvalidatable> *_lock_renderFlipbookSessionPowerAssertion;
    id<BSInvalidatable> *_lock_livePowerAssertion;
    id<BSTimerScheduleQuerying><BSInvalidatable> *_lock_timer;
    NSUInteger _stateHandler;
    id *_lock_allowSleepBlock;
    NSUInteger _lock_renderingSpecifier_backoffTime;
    NSInteger _lock_engineState;
    NSInteger _lock_sleepState;
    CGFloat _lock_sleepRequestedTime;
    BOOL _lock_suppressed;
    BOOL _lock_requestDatesOperationDidTimeout;
    BOOL _lock_alwaysFillFlipbook;
    BOOL _lock_usePseudoFlipbook;
    BOOL _lock_restrictedFramerate;
}


@property (nonatomic) BOOL alwaysFillFlipbook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger engineState;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLSHBacklightInactiveEnvironmentSession *inactiveSession;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic, getter=isUsingPseudoFlipbook) BOOL usePseudoFlipbook;


-(id)allFlipbookFrames;
-(id)frameOnGlassWhenFlipbookLastCancelled;
-(id)initWithPlatformProvider:(id)arg0 osInterfaceProvider:(id)arg1 inactiveBudgetPolicy:(id)arg2 ;
-(id)stopForReason:(id)arg0 ;
-(id)suspendForReason:(id)arg0 ;
-(void)dealloc;
-(void)didEndInactiveEnvironmentSession:(id)arg0 ;
-(void)hostEnvironment:(id)arg0 hostDidSetUnrestrictedFramerateUpdates:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 invalidateContentForReason:(id)arg1 ;
-(void)inactiveEnvironmentSession:(id)arg0 didUpdateToPresentation:(id)arg1 ;
-(void)purgeFlipbook;
-(void)registerHandlersForService:(id)arg0 ;
-(void)renderFramesSession:(id)arg0 didRenderFrame:(id)arg1 timedOutEnvironments:(id)arg2 ;
-(void)renderFramesSession:(id)arg0 failedToRenderSpecifier:(id)arg1 error:(id)arg2 timedOutEnvironments:(id)arg3 ;
-(void)requestDatesOperation:(id)arg0 didTimeoutPendingEnvironments:(id)arg1 ;
-(void)requestDatesOperation:(id)arg0 environment:(id)arg1 didProvideSpecifiers:(id)arg2 forPresentationInterval:(id)arg3 isComplete:(BOOL)arg4 ;
-(void)startFlipbook;
-(void)startLiveUpdates;
-(void)systemSleepMonitor:(id)arg0 prepareForSleepWithCompletion:(id)arg1 ;
-(void)systemSleepMonitor:(id)arg0 sleepRequestedWithResult:(id)arg1 ;
-(void)systemSleepMonitorSleepRequestAborted:(id)arg0 ;
-(void)systemSleepMonitorWillWakeFromSleep:(id)arg0 ;


@end


#endif