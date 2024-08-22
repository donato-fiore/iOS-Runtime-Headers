// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCKCHATSYNCCONTROLLER_H
#define IMDCKCHATSYNCCONTROLLER_H

@class CKServerChangeToken, CKRecord;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;


#import "IMDCKAbstractSyncController.h"
#import "IMDCKChatSyncCKOperationFactory.h"
#import "IMDChatRegistry.h"
#import "IMDRecordZoneManager.h"

@interface IMDCKChatSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) IMDCKChatSyncCKOperationFactory *CKOperationFactory; // ivar: _CKOperationFactory
@property (retain, nonatomic) IMDChatRegistry *chatRegistry; // ivar: _chatRegistry
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (nonatomic) BOOL fetchedChatsDuringLastSync; // ivar: _fetchedChatsDuringLastSync
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken; // ivar: _latestSyncToken
@property (retain, nonatomic) CKRecord *lockRecord; // ivar: _lockRecord
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (retain, nonatomic) NSObject<IMDCKSyncTokenStore> *syncTokenStore; // ivar: _syncTokenStore


+(id)sharedInstance;
-(BOOL)_chatZoneCreated;
-(BOOL)_eligibleForTruthZone;
-(BOOL)_lockRecordHadConflict:(id)arg0 ;
-(BOOL)_shouldMarkAllChatsAsNeedingSync;
-(BOOL)_shouldResyncChatsForError:(id)arg0 ;
-(NSInteger)syncControllerRecordType;
-(NSUInteger)_numberOfChatsToFetch;
-(NSUInteger)_numberOfChatsToWrite;
-(id)_changeTokenKey;
-(id)_chatZoneID;
-(id)_copyChatsToUploadWithLimit:(NSUInteger)arg0 ;
-(id)_copyRecordIDsToDelete;
-(id)_fetchChatRecordOperationWithActivity:(id)arg0 ;
-(id)_generateLockRecord;
-(id)_newckRecordsFromChats:(id)arg0 ;
-(id)_randomSalt;
-(id)_recordKeyManagerSharedInstance;
-(id)init;
-(id)initWithSyncTokenStore:(id)arg0 ;
-(void)__syncChatsWithCloudKit:(NSInteger)arg0 attemptCount:(NSUInteger)arg1 activity:(id)arg2 withCompletion:(id)arg3 ;
-(void)_anyChatExistsOnServerWithResultsLimit:(int)arg0 changeToken:(id)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_deleteChatRecordsWithRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)_filterRecordIDsToChatsWithNoRecentModifications:(id)arg0 completion:(id)arg1 ;
-(void)_handleChatDeletionCompletionForRecordIDs:(id)arg0 error:(id)arg1 ;
-(void)_hasMarkedAllChatsAsNeedingSync;
-(void)_kickOffWriteIfNeededForSyncType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(void)_kickOffWriteOnCKQueueWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)_logGreenTeaLogsForChats:(id)arg0 ;
-(void)_markChatAsDefferedForSyncingUsingRecord:(id)arg0 ;
-(void)_migrateServerChangeToken;
-(void)_needsToMarkAllChatsAsNeedingSync;
// -(void)_processFetchRecordChangesCompleted:(id)arg0 activity:(id)arg1 completion:(id)arg2 syncType:(unk)arg3  ;
-(void)_processModifyPerRecordCallBack:(id)arg0 error:(id)arg1 recordIDtoGUIDmap:(id)arg2 ;
-(void)_processModifyRecordCompletion:(id)arg0 deletedRecordIDs:(id)arg1 error:(id)arg2 completionBlock:(id)arg3 ;
-(void)_processRecordChanged:(id)arg0 ;
-(void)_processRecordDeletion:(id)arg0 ;
-(void)_processRecordZoneChangeTokenUpdated:(id)arg0 zoneID:(id)arg1 clienChangeToken:(id)arg2 ;
-(void)_processRecordZoneFetchCompletion:(id)arg0 zoneID:(id)arg1 clientChangeTokenData:(id)arg2 moreComing:(BOOL)arg3 error:(id)arg4 ;
-(void)_resolveChatConflictUsingCKRecord:(id)arg0 localGUID:(id)arg1 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_syncChatsWithCloudKitWithCompletionType:(NSInteger)arg0 activity:(id)arg1 syncChatsCompletionBlock:(id)arg2 ;
-(void)_updateChatUsingCKRecord:(id)arg0 onRead:(BOOL)arg1 didSucceed:(BOOL)arg2 ;
-(void)_writeCKRecordsToChatZone:(id)arg0 activity:(id)arg1 withCompletion:(id)arg2 ;
-(void)_writeDirtyChatsToCloudKitWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)anyChatExistsOnServerWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)clearLocalSyncState:(NSUInteger)arg0 ;
-(void)deleteChatSyncToken;
-(void)deleteChatZone;
-(void)syncChatsWithType:(NSInteger)arg0 withActivity:(id)arg1 completion:(id)arg2 ;
-(void)syncPendingDeletionWithCompletion:(id)arg0 ;


@end


#endif