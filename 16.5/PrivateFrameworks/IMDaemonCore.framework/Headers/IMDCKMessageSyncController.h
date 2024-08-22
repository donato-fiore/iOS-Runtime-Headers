// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKMESSAGESYNCCONTROLLER_H
#define IMDCKMESSAGESYNCCONTROLLER_H

@class CKServerChangeToken, NSMutableDictionary;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;


#import "IMDCKAbstractSyncController.h"
#import "IMDCKMessageSyncCKOperationFactory.h"
#import "IMDRecordZoneManager.h"

@interface IMDCKMessageSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) IMDCKMessageSyncCKOperationFactory *CKOperationFactory; // ivar: _CKOperationFactory
@property (retain, nonatomic) CKServerChangeToken *archivedRecordSyncToken; // ivar: _archivedRecordSyncToken
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (nonatomic) NSUInteger deviceConditionsToCheck; // ivar: _deviceConditionsToCheck
@property (nonatomic) BOOL encounteredIncompatibleMessage; // ivar: _encounteredIncompatibleMessage
@property (retain, nonatomic) CKServerChangeToken *latestSyncToken;
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (retain, nonatomic) NSObject<IMDCKSyncTokenStore> *syncTokenStore; // ivar: _syncTokenStore
@property (retain, nonatomic) NSMutableDictionary *visitedChats; // ivar: _visitedChats


+(id)sharedInstance;
-(BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)arg0 deviceConditionsToCheck:(NSUInteger)arg1 currentBatchCount:(NSInteger)arg2 maxBatchCount:(NSInteger)arg3 ;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 activity:(id)arg2 ;
-(BOOL)_doesAnyRecordZoneIDHavePendingArchivedRecords:(NSInteger)arg0 ;
-(BOOL)_isCoreDuetSyncForMaxBatchCount:(NSInteger)arg0 activity:(id)arg1 ;
-(BOOL)_isDiskSpaceAvailableForSyncType:(NSInteger)arg0 currentBatchCount:(NSInteger)arg1 ;
-(BOOL)_isValidCKRecordToSync:(id)arg0 ;
-(BOOL)_kickOffWriteIfNeededForSyncType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(BOOL)_messageZoneCreated;
-(BOOL)_shouldDeferCoreDuetMessagesSyncWithActivity:(id)arg0 ;
-(BOOL)_shouldFetchArchivedRecords:(id)arg0 ;
-(BOOL)_shouldMarkAllMessagesAsNeedingSync;
-(NSInteger)_numberOfBatchesOfMessagesToFetchInInitialSync;
-(NSInteger)syncControllerRecordType;
-(NSUInteger)_messageDeleteBatchSize;
-(NSUInteger)_numberOfMessagesToUpload;
-(NSUInteger)_numberOfRecordsToFetchForSyncType:(NSInteger)arg0 ;
-(id)_changeTokenKey;
-(id)_chatRegistry;
-(id)_ckUtilitiesInstance;
-(id)_constructMessageRecordIDUsingTombStoneDictionary:(id)arg0 ;
-(id)_copyRecordIDsToDeleteWithLimit:(NSUInteger)arg0 ;
-(id)_messageRecordSalt;
-(id)_messageZoneID;
-(id)_operationErrorForModifyingRecordCompletion:(id)arg0 ;
-(id)_recordKeyManagerSharedInstance;
-(id)_recordsToSave;
-(id)_recordsToSaveWithAttemptCount:(NSUInteger)arg0 ;
-(id)_sharedIMDMessageStore;
-(id)_syncOperationGroupName;
-(id)init;
-(id)initWithSyncTokenStore:(id)arg0 ;
-(void)_deleteMessagesWithRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)_fetchArchivedRecordsIfNeeded:(BOOL)arg0 currentBatchCount:(NSInteger)arg1 maxNumberOfBatches:(NSInteger)arg2 activity:(id)arg3 withCompletionBlock:(id)arg4 ;
-(void)_fetchMessageZoneChangesSyncType:(NSInteger)arg0 currentBatchCount:(NSInteger)arg1 maxNumberOfBatches:(NSInteger)arg2 activity:(id)arg3 completionBlock:(id)arg4 ;
-(void)_hasMarkedAllMessagesAsNeedingSync;
-(void)_kickOffWriteOnCKQueueWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)_markAllIncompatibleMessagesForDeletion;
-(void)_markAllUnsuccessFullSyncMessagesAsNeedingSync;
-(void)_migrateSyncTokens;
-(void)_needsToMarkAllMessagesAsNeedingSync;
-(void)_noteSyncEnded;
-(void)_processArchivedRecordsFetchCompletionZoneID:(id)arg0 serverChangeToken:(id)arg1 moreComing:(BOOL)arg2 currentBatchCount:(NSInteger)arg3 maxNumberOfBatches:(NSInteger)arg4 activity:(id)arg5 error:(id)arg6 completionBlock:(id)arg7 ;
-(void)_processFetchArchivedRecordCompletionWithError:(id)arg0 WithCompletionBlock:(id)arg1 ;
-(void)_processFetchRecordZoneChangesCompletionWithError:(id)arg0 completionBlock:(id)arg1 ;
-(void)_processModifyRecordsCompletion:(id)arg0 deletedRecordIDs:(id)arg1 operationError:(id)arg2 isLastBatchOfWrite:(BOOL)arg3 activity:(id)arg4 writeCompletionBlock:(id)arg5 ;
-(void)_processRecordChange:(id)arg0 ;
-(void)_processRecordDeletionCompletion:(id)arg0 error:(id)arg1 completionBlock:(id)arg2 ;
-(void)_processRecordWriteCompletionForRecord:(id)arg0 NSError:(id)arg1 ;
-(void)_processRecordZoneFetchCompletionZoneID:(id)arg0 serverChangeToken:(id)arg1 clientChangeTokenData:(id)arg2 moreComing:(BOOL)arg3 NSError:(id)arg4 syncType:(NSInteger)arg5 currentBatchCount:(NSInteger)arg6 maxNumberOfBatches:(NSInteger)arg7 shouldFetchArchivedRecords:(BOOL)arg8 activity:(id)arg9 completionBlock:(id)arg10 ;
-(void)_resetArvchivedRecordSyncToken;
-(void)_resetSyncToken;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 ;
-(void)_writeDirtyMessagesToCloudKitWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)clearLocalSyncState:(NSUInteger)arg0 ;
-(void)deleteMessageSyncToken;
-(void)deleteMessagesZone;
-(void)incompatibleMessageDeleteDetected:(id)arg0 ;
-(void)syncDeletedMessagesToCloudKitWithCompletion:(id)arg0 ;
-(void)syncMessagesWithSyncType:(NSInteger)arg0 deviceConditionsToCheck:(NSUInteger)arg1 activity:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif