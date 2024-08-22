// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDCKATTACHMENTSYNCCONTROLLER_H
#define IMDCKATTACHMENTSYNCCONTROLLER_H

@class NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue, IMDCKSyncTokenStore;


#import "IMDCKAbstractSyncController.h"
#import "IMDCKAttachmentSyncCKOperationFactory.h"
#import "IMDRecordZoneManager.h"

@interface IMDCKAttachmentSyncController : IMDCKAbstractSyncController

@property (retain, nonatomic) IMDCKAttachmentSyncCKOperationFactory *CKOperationFactory; // ivar: _CKOperationFactory
@property (nonatomic) BOOL assetDownloadInProgress; // ivar: _assetDownloadInProgress
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (retain, nonatomic) NSMutableDictionary *completionBlocksForAssetFetchOperations; // ivar: _completionBlocksForAssetFetchOperations
@property (nonatomic) NSUInteger deviceConditionsToCheck; // ivar: _deviceConditionsToCheck
@property (retain, nonatomic) NSMutableArray *downloadAssetsForTransferGUIDs; // ivar: _downloadAssetsForTransferGUIDs
@property (nonatomic) BOOL isDoingDeleteRecoverySync; // ivar: _isDoingDeleteRecoverySync
@property (copy, nonatomic) id *perTransferProgress; // ivar: _perTransferProgress
@property (retain, nonatomic) NSMutableDictionary *recordIDToTransferMap; // ivar: _recordIDToTransferMap
@property (retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // ivar: _recordZoneManager
@property (retain, nonatomic) NSObject<IMDCKSyncTokenStore> *syncTokenStore; // ivar: _syncTokenStore


+(id)sharedInstance;
-(BOOL)__shouldOptimizeAttachmentDefault;
-(BOOL)_attachmentDownloadCanStart:(BOOL)arg0 withActivity:(id)arg1 ;
-(BOOL)_attachmentZoneCreated;
-(BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 activity:(id)arg2 ;
-(BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)arg0 activity:(id)arg1 ;
-(BOOL)_deviceConditionsAllowsMessageSyncWithActivity:(id)arg0 ;
-(BOOL)_fetchedAllChangesFromCloudKit;
-(BOOL)_hasCompletedRecoveryResync;
-(BOOL)_kickOffWriteIfNeededForSyncType:(NSInteger)arg0 activity:(id)arg1 completion:(id)arg2 ;
-(BOOL)_shouldMarkAllAttachmentsAsNeedingSync;
-(BOOL)_shouldMarkAttachmentsAsNeedingReupload;
-(NSInteger)_numberOfBatchesOfAttachmentsToFetchInInitialSync;
-(NSInteger)_numberOfMetadataBatchesOfAttachmentsToFetchInInitialSync;
-(NSInteger)syncControllerRecordType;
-(NSUInteger)_attachmentDeleteBatchSize;
-(NSUInteger)_numberOfAttachmentsToDownload;
-(NSUInteger)_numberOfAttachmentsToWriteUp;
-(NSUInteger)_readNextDeleteAfterRow;
-(NSUInteger)purgedAttachmentsCountForChatsWithChatIdentifiers:(id)arg0 services:(id)arg1 ;
-(id)__databaseRequestForAttachmentsWithAssets;
-(id)_attachmentZoneID;
-(id)_attachmentZoneSalt;
-(id)_changeTokenKeyForSyncType:(NSInteger)arg0 ;
-(id)_ckUtilitiesInstance;
-(id)_constructAttachmentRecordIDUsingTombStoneDictionary:(id)arg0 ;
-(id)_copyRecordIDsToDeleteWithLimit:(NSUInteger)arg0 ;
-(id)_operationErrorForModifyingRecordCompletion:(id)arg0 ;
-(id)_recordKeyManagerSharedInstance;
-(id)_recordsToProcessWithError:(id)arg0 error:(id)arg1 ;
-(id)_updateAttachmentGUIDIfNeededAndReturnTransfersToForceMarkAsSync:(id)arg0 transfersToSyncRowIDs:(id)arg1 ;
-(id)fileTransferCenter;
-(id)init;
-(id)initWithSyncTokenStore:(id)arg0 ;
-(id)latestSyncTokenForSyncType:(NSInteger)arg0 ;
-(id)purgedAttachmentsForChat:(id)arg0 services:(id)arg1 limit:(NSInteger)arg2 ;
-(int)_resyncForDeleteRecoveryState;
-(void)_deleteAttachmentsWithRecordIDs:(id)arg0 completion:(id)arg1 ;
-(void)_downloadAttachmentAssetsWithActivity:(id)arg0 restoringAttachments:(BOOL)arg1 retryCount:(NSUInteger)arg2 numAttachmentsDownloaded:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)_downloadAttachmentAssetsWithActivity:(id)arg0 restoringAttachments:(BOOL)arg1 retryCount:(NSUInteger)arg2 numAttachmentsDownloaded:(NSUInteger)arg3 transfers:(id)arg4 completion:(id)arg5 ;
-(void)_fetchAndValidateFileTransfersFromCloudKit:(id)arg0 capturedWithABC:(BOOL)arg1 activity:(id)arg2 completion:(id)arg3 ;
-(void)_fetchAttachmentZoneChangesShouldWriteBackChanges:(BOOL)arg0 desiredKeys:(NSInteger)arg1 syncType:(NSInteger)arg2 currentBatchCount:(NSInteger)arg3 maxBatchCount:(NSInteger)arg4 syncToken:(id)arg5 activity:(id)arg6 completionBlock:(id)arg7 ;
-(void)_fetchAttachmentZoneRecords:(id)arg0 desiredKeys:(NSInteger)arg1 ognSuffix:(id)arg2 removeTombstones:(BOOL)arg3 activity:(id)arg4 completion:(id)arg5 ;
-(void)_hasMarkedAllAttachmentsAsNeedingSync;
-(void)_initResyncForDeleteRecovery;
-(void)_kickOffAssetFetchForTransfersIfNeededWithActivity:(id)arg0 ;
-(void)_kickOffWriteOnCKQueueWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)_markAllFailedAttachmentsAsNeedingSync;
-(void)_markAttachmentWithROWIDAsFailedToUploadToCloudKit:(id)arg0 ;
-(void)_markAttachmentWithROWIDAsSyncedWithCloudKit:(NSInteger)arg0 ;
-(void)_markResyncForDeleteRecoveryAs:(int)arg0 ;
-(void)_markTransferAsNotBeingAbleToSync:(id)arg0 ;
-(void)_markTransferAsNotBeingAbleToSyncUsingCKRecord:(id)arg0 ;
-(void)_migrateSyncToken;
-(void)_needsToMarkAllAttachmentsAsNeedingSync;
-(void)_processAndValidateAttachmentRecordsEligibleForPurge:(id)arg0 recordIDsToTransfers:(id)arg1 capturedWithABC:(BOOL)arg2 completion:(id)arg3 ;
-(void)_processAssetFetchOperationCompletionBlock:(id)arg0 removeTombstones:(BOOL)arg1 operationID:(id)arg2 error:(id)arg3 ;
-(void)_processAssetFetchPerRecordCompletionBlock:(id)arg0 recordID:(id)arg1 error:(id)arg2 ;
-(void)_processAssetFetchPerRecordProgressBlock:(id)arg0 progress:(CGFloat)arg1 ;
-(void)_processFetchRecordChangesCompleted:(id)arg0 completionBlock:(id)arg1 ;
-(void)_processModifyPerRecordCallBack:(id)arg0 error:(id)arg1 ;
-(void)_processModifyRecordCompletion:(id)arg0 deletedRecordIDs:(id)arg1 error:(id)arg2 completionBlock:(id)arg3 ;
-(void)_processRecordChanged:(id)arg0 ;
-(void)_processRecordDeletion:(id)arg0 ;
-(void)_processRecordZoneChangeTokenUpdated:(id)arg0 zoneID:(id)arg1 clienChangeToken:(id)arg2 syncType:(NSInteger)arg3 ;
-(void)_processRecordZoneFetchCompletion:(id)arg0 zoneID:(id)arg1 clientChangeTokenData:(id)arg2 moreComing:(BOOL)arg3 shouldWriteBackChanges:(BOOL)arg4 desiredKeys:(NSInteger)arg5 syncType:(NSInteger)arg6 error:(id)arg7 currentBatchCount:(NSInteger)arg8 maxBatchCount:(NSInteger)arg9 activity:(id)arg10 completionBlock:(id)arg11 ;
-(void)_removeTransferFromiCloudBackupWithGuid:(id)arg0 ;
-(void)_resetAttachmentSyncStateForRecord:(id)arg0 toState:(NSInteger)arg1 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_setNextDeleteAfterRow:(NSUInteger)arg0 ;
-(void)_updateDeviceConditionsToCheckIfNeededForCurrentBatchCount:(NSInteger)arg0 maxBatchCount:(NSInteger)arg1 ;
-(void)_updateTransferUsingCKRecord:(id)arg0 wasFetched:(BOOL)arg1 ;
-(void)_validateTransferFromCloudKit:(id)arg0 localTransfer:(id)arg1 validateCompletion:(id)arg2 ;
-(void)_writeAttachmentsToCloudKitWithActivity:(id)arg0 completionBlock:(id)arg1 ;
-(void)_writeCKRecordsToAttachmentZone:(id)arg0 activity:(id)arg1 withCompletion:(id)arg2 ;
-(void)acceptFileTransfer:(id)arg0 completion:(id)arg1 ;
-(void)acceptFileTransfers:(id)arg0 completion:(id)arg1 ;
-(void)clearLocalSyncState:(NSUInteger)arg0 ;
-(void)deleteAttachmentSyncToken;
-(void)deleteAttachmentZone;
-(void)downloadAttachmentAssetsForChatIDs:(id)arg0 services:(id)arg1 style:(unsigned char)arg2 completion:(id)arg3 ;
-(void)downloadAttachmentAssetsWithActivity:(id)arg0 restoringAttachments:(BOOL)arg1 ;
-(void)downloadAttachmentAssetsWithActivity:(id)arg0 restoringAttachments:(BOOL)arg1 completion:(id)arg2 ;
// -(void)fetchAttachmentDataForTransfers:(id)arg0 highQuality:(BOOL)arg1 perTransferProgress:(id)arg2 activity:(unk)arg3 completion:(id)arg4  ;
-(void)setLatestSyncToken:(id)arg0 forSyncType:(NSInteger)arg1 ;
-(void)syncAttachmentDeletesToCloudKitWithActivity:(id)arg0 completion:(id)arg1 ;
-(void)syncAttachmentsWithSyncType:(NSInteger)arg0 deviceConditionsToCheck:(NSUInteger)arg1 activity:(id)arg2 completionBlock:(id)arg3 ;


@end


#endif