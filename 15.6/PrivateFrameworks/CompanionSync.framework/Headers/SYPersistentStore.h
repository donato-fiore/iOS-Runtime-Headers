// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYPERSISTENTSTORE_H
#define SYPERSISTENTSTORE_H

@class NSString, NSMutableDictionary, NSMutableSet, NSSet, NSDictionary, NSDate, NSError;
@protocol OS_os_transaction, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_SYSharedServiceDB.h"

@interface SYPersistentStore : NSObject {
    NSString *_path;
    *__CFString _loggingFacility;
    CGFloat _timeToLiveCache;
    NSObject<OS_os_transaction> *_transaction;
    BOOL _changeTrackingEnabled;
    NSString *_peerID;
    NSMutableDictionary *_peerSeqnoSets;
    NSMutableSet *_ignoringMessageIDs;
    NSObject<OS_dispatch_queue> *_syncQ;
    *sqlite3 _db;
    *sqlite3_stmt _getInFullSync;
    *sqlite3_stmt _getChangeCount;
    *sqlite3_stmt _getNextExpireTime;
    *sqlite3_stmt _purgeExpiredChanges;
    *sqlite3_stmt _insertChange;
    *sqlite3_stmt _getFullsyncSent;
    *sqlite3_stmt _setFullsyncSent;
    *sqlite3_stmt _logSyncComplete;
    *sqlite3_stmt _getChangeIDsSinceVersion;
    *sqlite3_stmt _getLocalVersion;
    *sqlite3_stmt _getOldestVersion;
    *sqlite3_stmt _setVectorClock;
    *sqlite3_stmt _setPeerSeqNo;
    *sqlite3_stmt _getPeerSeqNo;
    *sqlite3_stmt _setPeerSeqNoSet;
    *sqlite3_stmt _enterFullSync;
    *sqlite3_stmt _exitFullSync;
    *sqlite3_stmt _getIgnoringSyncID;
    *sqlite3_stmt _getCurrentSyncID;
    *sqlite3_stmt _getCurrentSyncStartTime;
    *sqlite3_stmt _getLastEndedSyncID;
    *sqlite3_stmt _getWaitingForSyncID;
    *sqlite3_stmt _setWaitingForSyncID;
    *sqlite3_stmt _setAllSentForSyncID;
    *sqlite3_stmt _getAllSentForCurrentSync;
    *sqlite3_stmt _getLastSyncError;
    *sqlite3_stmt _setSyncUserInfo;
    *sqlite3_stmt _getSyncUserInfo;
    *sqlite3_stmt _setSyncIDSOptions;
    *sqlite3_stmt _getSyncIDSOptions;
}


@property (retain, nonatomic) NSSet *cachedChangedSyncIDs; // ivar: _cachedChangedSyncIDs
@property (nonatomic) NSUInteger cachedChangedSyncIDsVersion; // ivar: _cachedChangedSyncIDsVersion
@property (nonatomic) BOOL cachedVersionStale; // ivar: _cachedVersionStale
@property (readonly, nonatomic) BOOL canStartNewSyncSession;
@property (readonly, nonatomic) NSUInteger changeCount;
@property (nonatomic) BOOL completedSync;
@property (readonly, nonatomic) NSString *currentFullSyncID;
@property (readonly, nonatomic) NSUInteger currentLocalVersion;
@property (readonly, nonatomic) BOOL currentSyncSendComplete;
@property (readonly, nonatomic) CGFloat durationOfLastFullSync;
@property (copy, nonatomic) NSDictionary *fullSyncIDSOptions;
@property (copy, nonatomic) NSDictionary *fullSyncUserInfo;
@property (readonly, nonatomic) BOOL inFullSync;
@property (copy, nonatomic) NSDate *lastMessageReceived;
@property (readonly, nonatomic) NSUInteger lastSeenRemoteVersion;
@property (readonly, nonatomic) NSString *lastSyncEndID;
@property (readonly, nonatomic) NSError *lastSyncError;
@property (readonly, nonatomic) BOOL lastSyncFailed;
@property (copy, nonatomic) NSDate *overflowResyncTime;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSString *peerID;
@property (nonatomic, getter=isPerformingDeltaSync) BOOL performingDeltaSync;
@property (retain, nonatomic) _SYSharedServiceDB *sharedDB; // ivar: _sharedDB
@property (nonatomic) CGFloat timeToLive;
@property (nonatomic) CGFloat unfinishedSyncTimeout; // ivar: _unfinishedSyncTimeout
@property (retain, nonatomic) NSString *vectorClockJSON;
@property (copy, nonatomic) NSString *waitingForSyncEndID;


+(BOOL)_tableEmpty:(id)arg0 db:(struct sqlite3 *)arg1 ;
+(id)_loadOrCreatePeerIDForDB:(struct sqlite3 *)arg0 ;
+(id)sharedPersistentStoreForService:(id)arg0 ;
-(BOOL)_LOCKED_storeSequenceNumberSet:(id)arg0 forPeerID:(id)arg1 db:(struct sqlite3 *)arg2 error:(*id)arg3 ;
-(BOOL)_inTransaction:(BOOL)arg0 do:(id)arg1 ;
-(BOOL)_openDBAtPath:(id)arg0 ;
-(BOOL)ignoringFullSyncWithID:(id)arg0 ;
-(BOOL)logChanges:(id)arg0 error:(*id)arg1 ;
-(BOOL)logSyncCompletionToRemoteVersion:(NSUInteger)arg0 ;
-(BOOL)objectChanged:(id)arg0 sinceVersion:(NSUInteger)arg1 ;
-(BOOL)reassignCurrentSyncID:(id)arg0 ;
-(BOOL)sequenceNumberIsDuplicate:(NSUInteger)arg0 forPeer:(id)arg1 ;
-(BOOL)setLastSequenceNumber:(NSUInteger)arg0 fromPeer:(id)arg1 error:(*id)arg2 ;
-(BOOL)shouldIgnoreMessageID:(id)arg0 ;
-(NSUInteger)_lastSequenceNumberForPeerID_LOCKED:(id)arg0 db:(struct sqlite3 *)arg1 ;
-(NSUInteger)_oldestVersion;
-(NSUInteger)lastSequenceNumberForPeerID:(id)arg0 ;
-(NSUInteger)nextSequenceNumber;
-(id)_decodeIndexSet:(id)arg0 ;
-(id)_encodeIndexSet:(id)arg0 ;
-(id)_sequenceNumberSetForPeerID:(id)arg0 inDB:(struct sqlite3 *)arg1 ;
-(id)dbPath;
-(id)init;
-(id)initWithPath:(id)arg0 loggingFacility:(struct __CFString *)arg1 changeTrackingEnabled:(BOOL)arg2 ;
-(id)initWithSharedDatabase:(id)arg0 ;
-(id)lastDBErrorInfo;
-(int)_getSchemaVersion;
-(struct sqlite3 *)_dbRef;
-(void)_cacheTTL;
-(void)_convertTimestamps;
-(void)_fixPeerInfo;
-(void)_loadIgnoreList_LOCKED:(struct sqlite3 *)arg0 ;
-(void)_prepareStatements;
-(void)_saveIgnoreList_LOCKED:(struct sqlite3 *)arg0 ;
-(void)_setupSharedDB;
-(void)_storeSequenceNumberSet:(id)arg0 forPeerID:(id)arg1 ;
-(void)_verifyInTransactionForFullSync;
-(void)_withDB:(id)arg0 ;
-(void)addMessageIDsToIgnore:(id)arg0 ;
-(void)changeTrackingToggled:(BOOL)arg0 ;
-(void)clearAllChanges;
-(void)dealloc;
-(void)enterFullSyncWithID:(id)arg0 ignoring:(BOOL)arg1 ;
-(void)exitFullSyncWithID:(id)arg0 error:(id)arg1 ;
-(void)removeMessageIDFromIgnoreList:(id)arg0 ;
-(void)resetSequenceNumber:(NSUInteger)arg0 ;
-(void)resetSequenceNumbersForPeer:(id)arg0 ;
-(void)sendCompletedForSyncWithID:(id)arg0 ;
-(void)setLastSequenceNumber:(NSUInteger)arg0 fromPeer:(id)arg1 ;


@end


#endif