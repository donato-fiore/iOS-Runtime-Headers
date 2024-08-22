// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYLEGACYSTORE_H
#define SYLEGACYSTORE_H

@class NSMutableIndexSet, NSMutableDictionary, NSError, NSString, NSUUID;
@protocol IDSServiceDelegate, NMSMessageCenterDelegate, OS_dispatch_source, OS_os_transaction, OS_dispatch_queue;


#import "SYStore.h"
#import "SYRetryTimer.h"
#import "NMSMessageCenter.h"
#import "SYPersistentStore.h"
#import "SYVectorClock.h"

@interface SYLegacyStore : SYStore <IDSServiceDelegate, NMSMessageCenterDelegate>

 {
    NSUInteger _batchCounter;
    NSMutableIndexSet *_batchChunkUnackedIndices;
    BOOL _tracksChanges;
    NSMutableDictionary *_sendSignals;
    SYRetryTimer *_syncRetryTimer;
    NSObject<OS_dispatch_source> *_overflowRetryTimer;
    NSError *_overflowRetryError;
    BOOL _deferredFullSync;
    NSObject<OS_os_transaction> *_transaction;
}


@property (nonatomic) BOOL alwaysWins; // ivar: _alwaysWins
@property (retain, nonatomic) NSString *databaseFileName; // ivar: _databaseFileName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL encryptPayloads; // ivar: _encryptPayloads
@property (nonatomic) BOOL fullSyncWasRequestedBySlave; // ivar: _fullSyncWasRequestedBySlave
@property (readonly) NSUInteger hash;
@property (nonatomic) *__CFString loggingFacility; // ivar: _loggingFacility
@property (retain, nonatomic) NMSMessageCenter *messageCenter; // ivar: _messageCenter
@property (copy, nonatomic) id *nextBatchStep; // ivar: _nextBatchStep
@property (retain, nonatomic) NSUUID *pairedDeviceID; // ivar: _pairedDeviceID
@property (retain, nonatomic) SYPersistentStore *persistentStore; // ivar: _persistentStore
@property (nonatomic) NSInteger priority; // ivar: _priority
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) BOOL registeredNotificationHandlers; // ivar: _registeredNotificationHandlers
@property (retain, nonatomic) NSString *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) SYVectorClock *vectorClock; // ivar: _vectorClock


+(id)fullSyncActivityDictionary;
-(BOOL)_allowDeltaSyncWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)_checkMessageHeader:(id)arg0 messageID:(id)arg1 ;
-(BOOL)_isPairedWithDevice:(id)arg0 ;
-(BOOL)_isUsingGenericCache;
-(BOOL)_shouldIgnoreSyncID:(id)arg0 ;
-(BOOL)_shouldSkipNonSyncMessages;
-(BOOL)addObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 error:(*id)arg3 ;
-(BOOL)deleteObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 error:(*id)arg3 ;
-(BOOL)hasCompletedFullSync;
-(BOOL)inDeltaSync;
-(BOOL)inFullSync;
-(BOOL)isPaired;
-(BOOL)objectChanged:(id)arg0 sinceVersion:(NSUInteger)arg1 ;
-(BOOL)peerState:(id)arg0 fromPeer:(id)arg1 matchesExpectationForChangeCount:(NSUInteger)arg2 offsetAmount:(*NSUInteger)arg3 ;
-(BOOL)performBatchedSyncToCurrentDBVersion;
-(BOOL)processBatchChunkAtIndex:(unsigned int)arg0 encodedObjects:(id)arg1 error:(*id)arg2 ;
-(BOOL)tracksChanges;
-(BOOL)updateObject:(id)arg0 context:(id)arg1 idsOptions:(id)arg2 error:(*id)arg3 ;
-(CGFloat)timeToLive;
-(NSInteger)maxBytesInFlight;
-(NSInteger)state;
-(id)_batchChunkUnackedIndices;
-(id)_getPairedDeviceID;
-(id)_getPairingStorePath;
-(id)_pathForMessageCenterCache;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 ;
-(id)initWithService:(id)arg0 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 isMasterStore:(BOOL)arg3 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 highPriority:(BOOL)arg2 isMasterStore:(BOOL)arg3 tracksChanges:(BOOL)arg4 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 priority:(NSInteger)arg2 isMasterStore:(BOOL)arg3 ;
-(id)initWithService:(id)arg0 isGStore:(BOOL)arg1 priority:(NSInteger)arg2 isMasterStore:(BOOL)arg3 tracksChanges:(BOOL)arg4 ;
-(id)newFullSyncContext;
-(id)newMessageHeader;
-(id)wrapMessage:(id)arg0 ofType:(unsigned short)arg1 respondingTo:(id)arg2 userInfo:(id)arg3 ;
-(void)_copyPeerClockFromMessageHeaderIfNecessary:(id)arg0 ;
-(void)_devicePaired:(id)arg0 ;
-(void)_deviceUnpaired:(id)arg0 ;
-(void)_handleIDSOverflowWithError:(id)arg0 ;
// -(void)_handleObjectChanges:(id)arg0 contextInfo:(id)arg1 idsOptions:(id)arg2 blockUntilSent:(BOOL)arg3 reportError:(id)arg4 notifyingTransaction:(unk)arg5  ;
-(void)_listenForPrefsChangeNotifications;
-(void)_postBatchEndMessageWithState:(id)arg0 error:(id)arg1 then:(id)arg2 ;
-(void)_postBatchStartMessageWithState:(id)arg0 then:(id)arg1 ;
-(void)_postVersionRejectedForMessageID:(id)arg0 ;
-(void)_prefsChanged;
-(void)_recordLastSeqNo:(id)arg0 ;
-(void)_restartBatchSyncWithState:(id)arg0 then:(id)arg1 ;
-(void)_retrySync;
-(void)_sendBatchChunk:(id)arg0 withState:(id)arg1 then:(id)arg2 ;
-(void)_setupMessageCenter_LOCKED;
-(void)_syncEndedWithSyncID:(id)arg0 ;
// -(void)_transaction:(id)arg0 context:(unk)arg1 idsOptions:(id)arg2 blockUntilSent:(id)arg3 reportError:(BOOL)arg4  ;
-(void)_updateMessageCenterPrefs:(id)arg0 ;
-(void)dealloc;
-(void)didEndDeltaSync;
-(void)handleBatchSyncChunk:(id)arg0 response:(id)arg1 ;
-(void)handleBatchSyncEnd:(id)arg0 response:(id)arg1 ;
-(void)handleBatchSyncStart:(id)arg0 ;
-(void)handleChangeMessage:(id)arg0 ;
-(void)handleFullSyncRequest:(id)arg0 response:(id)arg1 ;
-(void)handleObjectChanges:(id)arg0 contextInfo:(id)arg1 idsOptions:(id)arg2 blockUntilSent:(BOOL)arg3 reportError:(id)arg4 ;
-(void)handleSyncAllObjects:(id)arg0 response:(id)arg1 ;
-(void)logChanges:(id)arg0 ;
-(void)messageCenter:(id)arg0 didReceiveUnknownRequest:(id)arg1 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifier:(id)arg1 forResponse:(id)arg2 ;
-(void)messageCenter:(id)arg0 didResolveIDSIdentifierForRequest:(id)arg1 ;
-(void)messageCenter:(id)arg0 didSuccessfullyDeliverRequestWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)messageCenter:(id)arg0 didSuccessfullySendRequestWithIdentifier:(id)arg1 userInfo:(id)arg2 ;
-(void)performFullSync;
-(void)performFullSyncIfNecessary;
-(void)performFullSyncIfNecessaryAskingDelegate:(BOOL)arg0 ;
-(void)performFullSyncToCurrentDBVersion;
-(void)postUserNotification:(id)arg0 message:(id)arg1 ;
-(void)processBatchChunkAck:(unsigned int)arg0 ;
-(void)processBatchSyncEnd:(NSUInteger)arg0 ;
-(void)processBatchSyncStart;
-(void)remoteStoreAllObjects:(id)arg0 fromPeer:(id)arg1 clock:(id)arg2 ;
-(void)remoteStoreRequestFullSync;
-(void)sendChanges:(id)arg0 context:(id)arg1 options:(id)arg2 sentSignal:(id)arg3 ;
-(void)sendMessage:(id)arg0 ofType:(unsigned short)arg1 respondingTo:(id)arg2 userInfo:(id)arg3 idsOptions:(id)arg4 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDeliveryQOS:(unsigned int)arg0 ;
-(void)setMaxBytesInFlight:(NSInteger)arg0 ;
-(void)setNeedsFullSyncWithContext:(id)arg0 idsOptions:(id)arg1 ;
-(void)setTimeToLive:(CGFloat)arg0 ;
-(void)setTracksChanges:(BOOL)arg0 ;
-(void)setupDatabase;
-(void)setupMessageCenter;
-(void)setupPairingNotifications;
-(void)willBeginDeltaSync;


@end


#endif