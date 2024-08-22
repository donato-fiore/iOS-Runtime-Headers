// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NISESSION_H
#define NISESSION_H

@class NSUUID, NSDictionary, NSString, NSError;
@protocol UWBSessionDelegateProxyProtocol, ARInternalSessionObserver, OS_dispatch_queue, OS_os_log, NISessionDelegate, NIInternalSessionDelegate;

#import <Foundation/Foundation.h>

#import "NIServerConnection.h"
#import "NIExportedObjectForwarder.h"
#import "NIConfiguration.h"
#import "NIDiscoveryToken.h"
#import "NICarKeyEventNotifier.h"
#import "NIDevicePresenceNotifier.h"
#import "NISessionVisionContext.h"

@interface NISession : NSObject <UWBSessionDelegateProxyProtocol, ARInternalSessionObserver>

 {
    NSObject<OS_dispatch_queue> *_queue;
    mutex _mutex;
    NSUUID *_internalID;
    NIServerConnection *_connection;
    NIExportedObjectForwarder *_exportedObjectForwarder;
    NIConfiguration *_currentConfiguration;
    vector<UWBSessionInterruptionBookkeeping, std::allocator<UWBSessionInterruptionBookkeeping>> _interruptions;
    atomic<bool> _readyForCallbacks;
    NSObject<OS_os_log> *_log;
    CGFloat _startTime;
    CGFloat _duration;
    BOOL _updatedNearbyObjects;
    NSInteger _motionState;
    NIDiscoveryToken *_discoveryToken;
    NICarKeyEventNotifier *_carKeyEventNotifier;
    NSUInteger _connectionOptions;
    atomic<bool> _isObserverSession;
    NIDevicePresenceNotifier *_devicePresenceNotifier;
    NISessionVisionContext *_visionContext;
}


@property (retain) NSDictionary *activationResponse; // ivar: _activationResponse
@property (readonly) NICarKeyEventNotifier *carKeyEventNotifier;
@property (readonly, copy, nonatomic) NIConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NISessionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NIDevicePresenceNotifier *devicePresenceNotifier;
@property (readonly, copy, nonatomic) NIDiscoveryToken *discoveryToken;
@property (readonly) NSUInteger hash;
@property (weak) NSObject<NIInternalSessionDelegate> *internalDelegate; // ivar: _internalDelegate
@property int internalState; // ivar: _internalState
@property (retain) NSError *invalidationError; // ivar: _invalidationError
@property (readonly) NSInteger motionState;
@property (readonly, getter=isRangingLimitExceeded) BOOL rangingLimitExceeded;
@property NSInteger rangingPriorityPolicy;
@property (readonly) Class superclass;


+(BOOL)_supportedPlatform:(id)arg0 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)isSupported;
+(id)_createOneShotConnectionAndResume:(BOOL)arg0 ;
+(id)cachedPlatformCapabilities;
+(id)deviceCapabilities;
+(id)internalDeviceCapabilities;
+(id)observerSession;
+(void)_queryAndCacheCapabilities;
+(void)setCachedPlatformCapabilities:(id)arg0 ;
-(BOOL)_isInternalClient;
-(BOOL)_isValidARSession:(id)arg0 andConfiguration:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)lightEstimateFromARLightEstimate:(id)arg0 ;
-(NSInteger)niVisionInputTrackingStateFromARTRackingState:(NSInteger)arg0 ;
-(id)_getSessionFailureError;
-(id)_initAndConnectToServerWithOptions:(NSUInteger)arg0 ;
-(id)_remoteObject;
-(id)_setDebugURSK:(id)arg0 transactionIdentifier:(unsigned int)arg1 ;
-(id)_setURSKTTL:(NSUInteger)arg0 ;
-(id)_synchronousRemoteObject;
-(id)_verifyError:(id)arg0 ;
-(id)deleteURSKs;
-(id)init;
-(struct ? )worldTransformForObject:(id)arg0 ;
-(void)_activate:(BOOL)arg0 ;
-(void)_activateAsync;
-(void)_activateSyncOnConnectionQueue;
-(void)_addObject:(id)arg0 ;
-(void)_addRegionPredicate:(id)arg0 ;
-(void)_configureAndRunInternalARSession;
-(void)_handleARSession:(id)arg0 willRunWithConfiguration:(id)arg1 ;
-(void)_handleARSessionDidChangeState:(NSUInteger)arg0 ;
-(void)_handleARSessionDidFailWithError:(id)arg0 ;
-(void)_handleARSessionDidUpdateFrame:(id)arg0 ;
-(void)_handleARSessionInterruptionEnded;
-(void)_handleARSessionWasInterrupted;
-(void)_handleActivationError:(id)arg0 ;
-(void)_handleActivationSuccess:(id)arg0 ;
-(void)_handlePauseSessionError:(id)arg0 ;
-(void)_handlePauseSessionSuccess;
-(void)_handleRunSessionError:(id)arg0 ;
-(void)_handleRunSessionSuccess;
-(void)_interruptSessionWithInternalReason:(NSInteger)arg0 onConnectionQueue:(BOOL)arg1 cachedInterruption:(BOOL)arg2 ;
-(void)_invalidateInternalARSessionIfNeeded;
-(void)_invalidateInternalOnConnectionQueue:(BOOL)arg0 ;
-(void)_invalidateSessionInternalWithError:(id)arg0 ;
-(void)_logDurationAndSubmit:(BOOL)arg0 ;
-(void)_logTime;
-(void)_notifyDidInvalidateWithError:(id)arg0 ;
-(void)_notifySessionHasFailed;
-(void)_pauseInternalARSessionIfNeeded;
-(void)_pauseInternalOnConnectionQueue:(BOOL)arg0 ;
// -(void)_performBlockOnDelegateQueue:(id)arg0 ifRespondsToSelector:(unk)arg1  ;
// -(void)_performBlockOnDelegateQueue:(id)arg0 ifRespondsToSelector:(unk)arg1 evenIfNotRunning:(SEL)arg2  ;
-(void)_provideTruthTag:(id)arg0 ;
-(void)_reinterruptSessionWithCachedInterruption;
-(void)_removeObject:(id)arg0 ;
-(void)_removeRegionPredicate:(id)arg0 ;
-(void)_serverConnectionInterrupted;
-(void)_serverConnectionInvalidated;
-(void)_submitErrorMetric:(id)arg0 ;
-(void)didDiscoverNearbyObject:(id)arg0 ;
-(void)didGenerateRangingAuthSessionToken:(id)arg0 ;
-(void)didGenerateShareableConfigurationData:(id)arg0 forObject:(id)arg1 ;
-(void)didReceiveRangingAuthRecommendation:(BOOL)arg0 forObject:(id)arg1 ;
-(void)didRemoveNearbyObjects:(id)arg0 withReason:(NSUInteger)arg1 ;
-(void)didUpdateAlgorithmState:(id)arg0 forObject:(id)arg1 ;
-(void)didUpdateHealthStatus:(NSInteger)arg0 ;
-(void)didUpdateHomeDeviceUWBRangingAvailability:(BOOL)arg0 ;
-(void)didUpdateMotionState:(NSInteger)arg0 ;
-(void)didUpdateNearbyObjects:(id)arg0 ;
-(void)invalidate;
-(void)object:(id)arg0 didUpdateRegion:(id)arg1 previousRegion:(id)arg2 ;
-(void)pause;
-(void)processBluetoothEventWithType:(NSInteger)arg0 btcClockTicks:(NSUInteger)arg1 ;
-(void)processBluetoothEventWithType:(NSInteger)arg0 btcClockTicks:(NSUInteger)arg1 eventCounter:(NSUInteger)arg2 ;
-(void)processDCKMessage:(id)arg0 responseCallback:(id)arg1 ;
-(void)processVisionInput:(id)arg0 ;
-(void)relayDCKMessage:(id)arg0 ;
-(void)runWithConfiguration:(id)arg0 ;
-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didUpdateExternalAnchors:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)session:(id)arg0 willRunWithConfiguration:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg0 ;
-(void)sessionShouldAttemptRelocalization:(id)arg0 completion:(id)arg1 ;
-(void)sessionWasInterrupted:(id)arg0 ;
-(void)setARSession:(id)arg0 ;
-(void)updateResponderDeviceIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)uwbSessionDidFailWithError:(id)arg0 ;
-(void)uwbSessionDidInvalidateWithError:(id)arg0 ;
-(void)uwbSessionInterruptedWithReason:(NSInteger)arg0 timestamp:(CGFloat)arg1 ;
-(void)uwbSessionInterruptionReasonEnded:(NSInteger)arg0 timestamp:(CGFloat)arg1 ;


@end


#endif