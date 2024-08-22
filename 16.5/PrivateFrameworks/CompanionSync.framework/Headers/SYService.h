// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSERVICE_H
#define SYSERVICE_H

@class NSDictionary, NSMutableSet, NSString, NSMutableArray, PBCodable;
@protocol SYSyncEngineResponder, SYStateLoggable, SYServiceDelegate, OS_dispatch_queue, OS_dispatch_source, OS_os_activity;

#import <Foundation/Foundation.h>

#import "SYSession.h"
#import "SYPersistentStore.h"
#import "SYVectorClock.h"
#import "_SYQueuedStartSession.h"
#import "SYDevice.h"
#import "_SYMultiSuspendableQueue.h"
#import "SYSyncEngine.h"

@interface SYService : NSObject <SYSyncEngineResponder, SYStateLoggable>

 {
    NSDictionary *_customIDSOptions;
    SYSession *_currentSession;
    id<SYServiceDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_incomingIOQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_source> *_processSignalSource;
    SYPersistentStore *_persistentStore;
    os_unfair_lock_s _persistentStoreLock;
    SYVectorClock *_vectorClock;
    NSMutableSet *_rejectingV1SyncSessions;
    NSString *_inFlightSyncRequestIdentifier;
    _SYQueuedStartSession *_queuedStartSession;
    SYDevice *_targetedDevice;
    NSMutableArray *_onSessionEnd;
    NSUInteger _stateHandle;
    os_unfair_lock_s _flagLock;
    ? _flags;
}


@property (readonly) SYSession *currentSession;
@property (copy, nonatomic) NSDictionary *customIDSOptions;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultMessageTimeout; // ivar: _defaultMessageTimeout
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int engineType; // ivar: _engineType
@property (readonly, nonatomic) NSDictionary *extraTransportOptions;
@property (readonly, nonatomic) NSString *generationID; // ivar: _generationID
@property (readonly, nonatomic) BOOL hasPairingStore;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMasterStore;
@property (readonly, nonatomic) NSString *name; // ivar: _serviceName
@property (retain, nonatomic) NSDictionary *options; // ivar: _defaultOptions
@property (readonly, nonatomic) NSString *peerID; // ivar: _peerID
@property (readonly, nonatomic) SYPersistentStore *persistentStore;
@property (nonatomic) NSInteger priority; // ivar: _defaultPriority
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger sendingBufferCap; // ivar: _sendingBufferCap
@property (readonly, nonatomic) NSObject<OS_os_activity> *serviceActivity; // ivar: _serviceActivity
@property (readonly, nonatomic) _SYMultiSuspendableQueue *sessionQueue; // ivar: _sessionQueue
@property (nonatomic) CGFloat sessionStalenessInterval; // ivar: _sessionStalenessInterval
@property (readonly, nonatomic) PBCodable *stateForLogging;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SYSyncEngine *syncEngine; // ivar: _syncEngine
@property (readonly, nonatomic) BOOL targetIsConnected;
@property (readonly, nonatomic) BOOL targetIsInProximity;


-(BOOL)_handleEndSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleResetResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleRestartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleStartSessionResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_handleSyncBatchResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_initializeMessaging:(*id)arg0 ;
-(BOOL)_initializeServiceDB:(*id)arg0 ;
-(BOOL)_protocolVersion:(int)arg0 supportsEngineType:(unsigned int)arg1 ;
-(BOOL)_request:(id)arg0 hasValidSessionIDForSession:(id)arg1 response:(id)arg2 completion:(id)arg3 ;
-(BOOL)_shouldSession:(id)arg0 fromPeer:(id)arg1 supercedeSession:(id)arg2 ofAge:(CGFloat)arg3 collisionDetected:(*BOOL)arg4 ;
-(BOOL)_v1_handleBatchChunkAck:(id)arg0 error:(*id)arg1 ;
-(BOOL)_v1_handleBatchEndResponse:(id)arg0 error:(*id)arg1 ;
-(BOOL)_v1_handleFullSyncRequestAck:(id)arg0 error:(*id)arg1 ;
-(BOOL)resume:(*id)arg0 ;
-(BOOL)sendData:(id)arg0 options:(id)arg1 identifier:(*id)arg2 error:(*id)arg3 ;
-(BOOL)willAcceptMessageWithHeader:(id)arg0 messageID:(id)arg1 ;
-(id)_chooseBetweenCollidingSessions:(id)arg0 ;
-(id)_claimOwnershipOfFileAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_makeSessionForDeltaSync:(BOOL)arg0 ;
-(id)_makeSyncEngineOfType:(unsigned int)arg0 ;
-(id)_newMessageHeader;
-(id)_pathForDataStore;
-(id)_sessionFromIncomingStartRequest:(id)arg0 ;
-(id)dataStreamWithMetadata:(id)arg0 options:(id)arg1 identifier:(*id)arg2 error:(*id)arg3 ;
-(id)init;
-(id)initWithService:(id)arg0 priority:(NSInteger)arg1 asMasterStore:(BOOL)arg2 options:(id)arg3 ;
-(id)initWithService:(id)arg0 priority:(NSInteger)arg1 qos:(unsigned int)arg2 asMasterStore:(BOOL)arg3 options:(id)arg4 ;
-(void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg0 ;
-(void)_dealWithPotentiallyStallingCurrentSession;
-(void)_deviceOSInfoChanged:(id)arg0 ;
-(void)_deviceRemoved:(id)arg0 ;
-(void)_deviceTargetabilityChanged:(id)arg0 ;
-(void)_downgradeEngineForVersion:(int)arg0 ;
-(void)_enqueueIncomingStartSessionRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)_handleEndSession:(id)arg0 completion:(id)arg1 ;
-(void)_handleError:(id)arg0 ;
-(void)_handleResetRequest:(id)arg0 completion:(id)arg1 ;
-(void)_handleRestartSession:(id)arg0 completion:(id)arg1 ;
-(void)_handleStartSession:(id)arg0 completion:(id)arg1 ;
-(void)_handleSyncBatch:(id)arg0 completion:(id)arg1 ;
// -(void)_ifDelegateImplements:(SEL)arg0 do:(id)arg1 then:(unk)arg2  ;
-(void)_peerRejectedVersion:(id)arg0 completion:(id)arg1 ;
-(void)_postVersionRejectionMessageForMessageWithID:(id)arg0 ;
-(void)_processPendingChanges;
-(void)_removePairingStoreDevice;
-(void)_sendResetRequest;
-(void)_setProtocolVersionForRemoteOSVersion:(id)arg0 build:(id)arg1 remoteIsWatch:(BOOL)arg2 switchingEngines:(BOOL)arg3 ;
-(void)_setupPairingNotifications;
-(void)_setupPairingStoreWithDevice:(id)arg0 ;
-(void)_signalPairingStoreAvailable;
-(void)_signalPairingStoreUnavailable;
-(void)_suspend;
-(void)_swapEngineTo:(unsigned int)arg0 ;
-(void)_swapSessionForVersionChange;
-(void)_switchToNewTargetedDevice:(id)arg0 ;
-(void)_updateMetaProtocolInfoForDevice:(id)arg0 ;
-(void)_upgradeEngineTo:(unsigned int)arg0 ;
-(void)_v1_handleBatchSyncChunk:(id)arg0 completion:(id)arg1 ;
-(void)_v1_handleBatchSyncEnd:(id)arg0 completion:(id)arg1 ;
-(void)_v1_handleBatchSyncStart:(id)arg0 completion:(id)arg1 ;
-(void)_v1_handleChangeMessage:(id)arg0 completion:(id)arg1 ;
-(void)_v1_handleFullSyncRequest:(id)arg0 completion:(id)arg1 ;
-(void)_v1_handleSyncAllObjects:(id)arg0 completion:(id)arg1 ;
-(void)_vectorClockUpdated;
-(void)_whenSessionEnds:(id)arg0 ;
-(void)_wrapUpCurrentSession:(id)arg0 ;
-(void)currentDeviceConnectionChanged:(BOOL)arg0 ;
-(void)currentDeviceProximityChanged:(BOOL)arg0 ;
-(void)dataStreamWithMetadata:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deliveredMessageWithID:(id)arg0 context:(id)arg1 ;
-(void)enqueuedMessageWithID:(id)arg0 context:(id)arg1 ;
-(void)handleFileTransfer:(id)arg0 metadata:(id)arg1 completion:(id)arg2 ;
-(void)handleOutOfBandData:(id)arg0 completion:(id)arg1 ;
-(void)handleSyncError:(id)arg0 forMessageWithIdentifier:(id)arg1 ;
-(void)handleSyncRequest:(id)arg0 ofType:(unsigned short)arg1 response:(id)arg2 ;
-(void)handleSyncResponse:(id)arg0 ofType:(unsigned short)arg1 completion:(id)arg2 ;
-(void)sendData:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)sentMessageWithID:(id)arg0 context:(id)arg1 ;
-(void)serializeForIncomingSession:(id)arg0 ;
-(void)sessionDidEnd:(id)arg0 withError:(id)arg1 ;
-(void)sessionFailedToCancelMessageUUIDs:(id)arg0 ;
-(void)setDelegate:(id)arg0 queue:(id)arg1 ;
-(void)setHasChangesAvailable;
-(void)setNeedsResetSync;
-(void)suspend;


@end


#endif