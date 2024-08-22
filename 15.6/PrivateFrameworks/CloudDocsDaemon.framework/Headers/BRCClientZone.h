// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCCLIENTZONE_H
#define BRCCLIENTZONE_H

@class NSString, NSMutableArray, NSError, NSMutableDictionary, NSMutableIndexSet, NSDate, CKOperationGroup, UMUserSyncTask, NSSet, BRMangledID, NSDictionary, NSArray;
@protocol BRCReachabilityDelegate, BRCZone, OS_dispatch_queue, OS_dispatch_source, NSObject, BRCClientZoneDelegate;

#import <Foundation/Foundation.h>

#import "BRCThrottleBase.h"
#import "BRCCreateZoneAndSubscribeOperation.h"
#import "BRCSyncUpOperation.h"
#import "BRCSyncDownOperation.h"
#import "BRCSyncOperationThrottle.h"
#import "BRCSyncBudgetThrottle.h"
#import "BRCSyncOperationBackoffRatio.h"
#import "BRCFetchRecentAndFavoriteDocumentsOperation.h"
#import "BRCThrottle.h"
#import "BRCPQLConnection.h"
#import "BRCZoneRowID.h"
#import "BRCItemID.h"
#import "BRCServerZone.h"
#import "BRCAccountSession.h"
#import "BRCDeadlineSource.h"
#import "brc_task_tracker.h"

@interface BRCClientZone : NSObject <BRCReachabilityDelegate, BRCZone>

 {
    NSString *_ownerName;
    BOOL _isInitialCreation;
    BRCThrottleBase *_readerThrottle;
    BRCCreateZoneAndSubscribeOperation *_createZoneOperation;
    NSObject<OS_dispatch_queue> *_createZoneQueue;
    NSMutableArray *_zoneCreationCompletionBlocks;
    NSInteger _syncUpRetryAfter;
    uint8_t _syncState;
    BRCSyncUpOperation *_syncUpOperation;
    NSError *_lastSyncUpError;
    BOOL _lastSyncUpErrorWasOnChainedItem;
    BRCSyncDownOperation *_syncDownOperation;
    id *_syncDeadlineSourceResumer;
    NSError *_lastSyncDownError;
    BRCSyncOperationThrottle *_syncUpThrottle;
    BRCSyncBudgetThrottle *_syncUpBudget;
    BRCSyncOperationBackoffRatio *_syncUpBackoffRatio;
    BRCSyncOperationThrottle *_syncDownThrottle;
    NSMutableArray *_blockedOperationsOnInitialSync;
    NSMutableDictionary *_runningListOperations;
    NSMutableDictionary *_recursiveListOperations;
    NSMutableDictionary *_fetchParentOperations;
    NSMutableDictionary *_fetchShareAliasOperations;
    BRCFetchRecentAndFavoriteDocumentsOperation *_fetchRecentsOperation;
    BRCThrottle *_serverStitchingOperationThrottle;
    NSMutableIndexSet *_appliedTombstoneRanks;
    NSDate *_lastSyncDownDate;
    NSObject<OS_dispatch_source> *_resetTimer;
    NSMutableDictionary *_syncDownBlockToPerformForBookmarkData;
    BOOL _shouldShowiCloudDriveAppInstallationNotification;
    NSMutableDictionary *_itemsBlockedByAssociationForCZMProcessing;
    NSMutableArray *_blocksWaitingOnCrossZoneMoveProcessing;
    NSMutableDictionary *_onDiskBlockToPerformForItemID;
    NSMutableDictionary *_downloadedBlockToPerformForItemID;
    NSMutableDictionary *_syncDownBlockToPerformForItemID;
    NSMutableArray *_nextSyncDownBarriers;
    NSMutableArray *_currentSyncDownBarriers;
    id<NSObject> *_hasWorkDidUpdateObserver;
    NSMutableArray *_nextIdleHandlers;
    NSMutableArray *_directoriesCreatedLastSyncUp;
    CKOperationGroup *_syncDownGroup;
    NSMutableArray *_syncDownDependencies;
    NSMutableArray *_allItemsDidUploadTrackers;
    float _syncUpBatchSizeMultiplier;
    UMUserSyncTask *_bubbleSyncTask;
}


@property (readonly, nonatomic) BOOL activated; // ivar: _activated
@property (readonly, nonatomic) NSUInteger currentRequestID; // ivar: _requestID
@property (readonly, nonatomic) BRCPQLConnection *db; // ivar: _db
@property (retain, nonatomic) BRCZoneRowID *dbRowID; // ivar: _dbRowID
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<BRCClientZoneDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasHighPriorityWatchers;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCloudDocsZone;
@property (readonly, nonatomic) BOOL isForeground;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) NSSet *itemIDsBlockedFromSyncForCZMProcessing; // ivar: _itemIDsBlockedFromSyncForCZMProcessing
@property (retain, nonatomic) NSDate *lastAttemptedSyncDownDate; // ivar: _lastAttemptedSyncDownDate
@property (readonly, nonatomic) NSInteger lastInsertedRank; // ivar: _lastInsertedRank
@property (readonly, nonatomic) BRMangledID *mangledID; // ivar: _mangledID
@property (nonatomic) BOOL needsSave; // ivar: _needsSave
@property (readonly, nonatomic) NSString *osNameRequiredToSync; // ivar: _osNameRequiredToSync
@property (readonly, nonatomic) NSDictionary *parentsOfCZMFaults; // ivar: _parentsOfCZMFaults
@property (readonly, nonatomic) NSMutableDictionary *plist;
@property (readonly, nonatomic) BRCItemID *rootItemID;
@property (retain, nonatomic) BRCServerZone *serverZone; // ivar: _serverZone
@property (retain, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) unsigned int state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) BRCDeadlineSource *syncDeadlineSource; // ivar: _syncDeadlineSource
@property (readonly) unsigned int syncState;
@property (readonly, nonatomic) NSArray *syncThrottles; // ivar: _syncThrottles
@property (readonly, nonatomic) unsigned int syncUpBatchSize;
@property (readonly, nonatomic) brc_task_tracker *taskTracker; // ivar: _taskTracker
@property (readonly, nonatomic) NSString *zoneName; // ivar: _zoneName


-(BOOL)_crossZoneMoveDocumentsToZone:(id)arg0 ;
-(BOOL)_dumpItemsToContext:(id)arg0 includeAllItems:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_hasAllItemsDidUploadHandlers;
-(BOOL)_isSideSyncOperationBlockedWithName:(id)arg0 ;
-(BOOL)_resetItemsTable;
-(BOOL)dumpActivityToContext:(id)arg0 includeExpensiveActivity:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)dumpStatusToContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)dumpTablesToContext:(id)arg0 includeAllItems:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)existsByItemID:(id)arg0 ;
-(BOOL)existsByItemID:(id)arg0 db:(id)arg1 ;
-(BOOL)existsByParentID:(id)arg0 andCaseInsensitiveLogicalName:(id)arg1 ;
-(BOOL)existsByParentID:(id)arg0 andCaseInsensitiveLogicalName:(id)arg1 db:(id)arg2 ;
-(BOOL)handleZoneLevelErrorIfNeeded:(id)arg0 ;
-(BOOL)hasCompletedInitialSyncDownOnce;
-(BOOL)hasItems;
-(BOOL)hasItemsWithInFlightDiffs;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClientZone:(id)arg0 ;
-(BOOL)isSyncBlocked;
-(BOOL)isSyncBlockedBecauseAppNotInstalled;
-(BOOL)isSyncBlockedBecauseOSNeedsUpgrade;
-(BOOL)removeItemIsDownloadedBlock:(id)arg0 ;
-(BOOL)removeItemOnDiskBlock:(id)arg0 ;
-(BOOL)removeSyncDownForItemIDBlock:(id)arg0 ;
-(BOOL)shouldSyncMangledID:(id)arg0 ;
-(BOOL)supportsKeepingClientItemsDuringReset;
-(BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(NSInteger)serverRankByItemID:(id)arg0 ;
-(NSInteger)serverRankByItemID:(id)arg0 db:(id)arg1 ;
-(NSInteger)throttleHashWithItemID:(id)arg0 ;
-(NSUInteger)nextSyncUpRequestID;
-(char)itemTypeByItemID:(id)arg0 db:(id)arg1 ;
-(char)serverItemTypeByItemID:(id)arg0 db:(id)arg1 ;
-(float)syncUpBackoffDelay;
-(float)syncUpBackoffRatio;
-(id)_cancelAllOperationsForReset;
-(id)_faultsEnumeratorFromRow:(NSUInteger)arg0 batchSize:(NSUInteger)arg1 ;
-(id)_refreshItemFromDB:(id)arg0 ;
-(id)allItems;
-(id)asPrivateClientZone;
-(id)asSharedClientZone;
-(id)cancelFetchAliasOperationAndReschedule:(id)arg0 ;
-(id)cancelFetchParentChainOperationAndReschedule:(id)arg0 ;
-(id)cancelListOperationAndReschedule:(id)arg0 ;
-(id)clientChildCountWithParentID:(id)arg0 db:(id)arg1 ;
-(id)descriptionWithContext:(id)arg0 ;
-(id)directoryItemIDsCreatedLastSyncUp;
-(id)directoryOrRootItemIDByFileID:(NSUInteger)arg0 ;
-(id)directoryOrRootItemIDByFileID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)documentItemByItemID:(id)arg0 ;
-(id)documentItemByItemID:(id)arg0 db:(id)arg1 ;
-(id)documentsNotIdleEnumeratorWithDB:(id)arg0 ;
-(id)faultByParentID:(id)arg0 andLogicalName:(id)arg1 ;
-(id)faultByParentID:(id)arg0 andLogicalName:(id)arg1 db:(id)arg2 ;
-(id)faultByParentID:(id)arg0 andPhysicalName:(id)arg1 ;
-(id)faultByParentID:(id)arg0 andPhysicalName:(id)arg1 db:(id)arg2 ;
-(id)fetchDirectoryContentsIfNecessary:(id)arg0 isUserWaiting:(BOOL)arg1 rescheduleApplyScheduler:(BOOL)arg2 ;
-(id)fetchParentChainIfNecessaryWithParentItemID:(id)arg0 isUserWaiting:(BOOL)arg1 ;
-(id)fetchRecursiveDirectoryContentsIfNecessary:(id)arg0 isUserWaiting:(BOOL)arg1 rescheduleApply:(BOOL)arg2 ;
-(id)fetchShareAliasIfNecessaryForTarget:(id)arg0 isUserWaiting:(BOOL)arg1 ;
-(id)init;
-(id)initWithMangledID:(id)arg0 dbRowID:(id)arg1 db:(id)arg2 plist:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5 ;
-(id)insertParentChainForItem:(id)arg0 ;
-(id)itemByDocumentID:(unsigned int)arg0 ;
-(id)itemByDocumentID:(unsigned int)arg0 db:(id)arg1 ;
-(id)itemByFileID:(NSUInteger)arg0 ;
-(id)itemByFileID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemByItemID:(id)arg0 ;
-(id)itemByItemID:(id)arg0 db:(id)arg1 ;
-(id)itemByParentID:(id)arg0 andLogicalName:(id)arg1 ;
-(id)itemByParentID:(id)arg0 andLogicalName:(id)arg1 db:(id)arg2 ;
-(id)itemByParentID:(id)arg0 andPhysicalName:(id)arg1 ;
-(id)itemByParentID:(id)arg0 andPhysicalName:(id)arg1 db:(id)arg2 ;
-(id)itemByRowID:(NSUInteger)arg0 ;
-(id)itemByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)itemCountPendingUploadOrSyncUpAndReturnError:(*id)arg0 ;
-(id)itemsEnumeratorWithDB:(id)arg0 ;
-(id)itemsParentedToThisZoneButLivingInAnOtherZone;
-(id)itemsWithInFlightDiffsEnumerator;
-(id)ownerName;
-(id)popDownloadedBlockForItemID:(SEL)arg0 ;
-(id)popOnDiskBlockForItemID:(SEL)arg0 ;
-(id)reservedItemByParentID:(id)arg0 andLogicalName:(id)arg1 ;
-(id)reservedItemByParentID:(id)arg0 andLogicalName:(id)arg1 db:(id)arg2 ;
-(id)serverChildCountWithParentID:(id)arg0 db:(id)arg1 ;
-(id)serverHiddenChildCountWithParentID:(id)arg0 db:(id)arg1 ;
-(id)serverItemByItemID:(id)arg0 ;
-(id)serverItemByItemID:(id)arg0 db:(id)arg1 ;
-(id)serverItemByParentID:(id)arg0 andLogicalName:(id)arg1 ;
-(id)serverItemByParentID:(id)arg0 andLogicalName:(id)arg1 db:(id)arg2 ;
-(id)serverItemByRank:(NSInteger)arg0 ;
-(id)serverItemByRowID:(NSUInteger)arg0 ;
-(id)serverItemByRowID:(NSUInteger)arg0 db:(id)arg1 ;
-(id)serverQuotaUsageWithParentID:(id)arg0 db:(id)arg1 ;
-(id)sizeOfItemsNeedingSyncUpOrUploadAndReturnError:(*id)arg0 ;
-(id)syncDownAnalyticsError;
-(id)syncDownImmediately;
-(id)syncUpAnalyticsError;
-(id)xattrForSignature:(id)arg0 ;
-(id)xattrForSignature:(id)arg0 db:(id)arg1 ;
-(unsigned int)_activateState:(unsigned int)arg0 origState:(unsigned int)arg1 ;
-(void)_allItemsDidUploadWithError:(id)arg0 ;
-(void)_appendToString:(id)arg0 descriptionOfFieldNamed:(id)arg1 inResultSet:(id)arg2 pos:(*int)arg3 containsSize:(BOOL)arg4 context:(id)arg5 ;
-(void)_blockLowPriorityStitchingOperationsForOperation:(id)arg0 ;
-(void)_blockSyncDownOnStitchingOperations;
-(void)_createCloudKitZoneWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)_decreaseSyncUpBatchSizeAfterError;
-(void)_dumpRecursivePropertiesOfItemByRowID:(NSUInteger)arg0 context:(id)arg1 depth:(int)arg2 ;
// -(void)_enumerateFaultsWithBlock:(id)arg0 rowID:(unk)arg1 batchSize:(NSUInteger)arg2  ;
-(void)_finishedProcessingItemThatMovedToThisZone:(id)arg0 ;
-(void)_finishedReset:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_fixupMissingCrossMovedItems;
-(void)_increaseSyncUpBatchSizeAfterSuccess;
-(void)_markLatestSyncRequestFailed;
-(void)_markRequestIDAcked;
-(void)_mkdirAppLibraryIfNeeded:(id)arg0 ;
-(void)_performAfterResetServerAndClientPrivateTruthsAndUnlinkData:(id)arg0 ;
-(void)_performAfterResetServerAndClientSharedTruthsAndUnlinkData:(id)arg0 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkData:(id)arg0 ;
-(void)_performAfterResetServerAndClientTruthsAndUnlinkDataAndPurgeTheZone:(id)arg0 ;
// -(void)_performResetAndWantsUnlink:(BOOL)arg0 clientTruthBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)_prepareForForegroundSyncDown;
-(void)_recreateSyncBudgetsAndThrottlesIfNeeded;
-(void)_registerFetchAliasOperation:(id)arg0 ;
-(void)_registerFetchParentChainOperation:(id)arg0 ;
-(void)_registerListOperation:(id)arg0 ;
-(void)_registerServerStitchingOperation:(id)arg0 ;
-(void)_removeAllShareAcceptanceBlocks;
-(void)_removeDownloadedBlockToPerformForItemID:(id)arg0 ;
-(void)_removeItemAndProcessForCrossZoneMove:(id)arg0 ;
-(void)_removeItemFromCZMProcessingIfNotAssociated:(id)arg0 ;
-(void)_removeOnDiskBlockToPerformForItemID:(id)arg0 ;
-(void)_removeTargetedAliasesWithCompletionBlock:(id)arg0 ;
-(void)_reset:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)_startDownloadingItemForCrossZoneMoveIfNecessary:(id)arg0 ;
-(void)_startSync;
-(void)_syncUpOfRecords:(id)arg0 createdAppLibraryNames:(id)arg1 didFinishWithError:(id)arg2 errorWasOnPCSChainedItem:(BOOL)arg3 ;
-(void)addSyncDownDependency:(id)arg0 ;
-(void)associateWithServerZone:(id)arg0 ;
-(void)associateWithServerZone:(id)arg0 offline:(BOOL)arg1 ;
-(void)beginSyncBubbleActivityIfNecessary;
-(void)cancelReset;
-(void)clearStateBits:(unsigned int)arg0 ;
-(void)clearSyncStateBits:(unsigned int)arg0 ;
-(void)clearSyncUpError;
-(void)close;
-(void)createCloudKitZoneWithGroup:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)didApplyTombstoneForRank:(NSInteger)arg0 ;
-(void)didClearOutOfQuota;
-(void)didGCTombstoneRanks:(id)arg0 ;
-(void)didSyncDownRequestID:(NSUInteger)arg0 maxApplyRank:(NSInteger)arg1 caughtUpWithServer:(BOOL)arg2 syncDownDate:(id)arg3 ;
-(void)disconnectNSMDQListenerAsync;
// -(void)enumerateFaultsAsyncWithBlock:(id)arg0 batchSize:(unk)arg1  ;
-(void)fetchRecentAndFavoriteDocuments;
-(void)flushAppliedTombstones;
-(void)handleRootRecordDeletion;
-(void)itemCrossZoneMoved:(id)arg0 withLookup:(id)arg1 ;
-(void)itemMovedIntoShareInThisZone:(id)arg0 associatedItemID:(id)arg1 ;
-(void)learnCKInfosFromSavedRecords:(id)arg0 isOutOfBandModifyRecords:(BOOL)arg1 ;
-(void)listedUpToRank:(NSInteger)arg0 ;
-(void)networkReachabilityChanged:(BOOL)arg0 ;
-(void)notifyClient:(id)arg0 afterNextSyncDown:(id)arg1 ;
// -(void)performBlock:(id)arg0 whenItemWithIDIsDownloaded:(unk)arg1  ;
// -(void)performBlock:(id)arg0 whenItemWithIDIsOnDisk:(unk)arg1  ;
// -(void)performBlock:(id)arg0 whenSyncDownCompletesLookingForItemID:(unk)arg1  ;
-(void)prepareDirectoryForSyncUp:(id)arg0 ;
-(void)recomputeAllItemsDidUploadState;
-(void)registerAllItemsDidUploadTracker:(id)arg0 ;
-(void)removeSyncDownDependency:(id)arg0 ;
-(void)resetSyncBudgetAndThrottle;
-(void)resetSyncUpBackoffRatio;
-(void)resume;
-(void)scheduleReset:(NSUInteger)arg0 ;
-(void)scheduleReset:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)scheduleResetServerAndClientTruthsForReason:(id)arg0 ;
-(void)scheduleResetServerAndClientTruthsForReason:(id)arg0 completionHandler:(id)arg1 ;
-(void)scheduleSyncDown;
-(void)scheduleSyncDownFirst;
-(void)scheduleSyncDownForOOBModifyRecordsAck;
-(void)scheduleSyncDownWithGroup:(id)arg0 ;
-(void)scheduleSyncUp;
-(void)syncDownOperation:(id)arg0 didFinishWithError:(id)arg1 status:(NSInteger)arg2 ;
-(void)unregisterAllItemsDidUploadTracker:(id)arg0 ;
-(void)updateWithPlist:(id)arg0 ;
-(void)waitForCrossZoneMoveProcessingWithCompletion:(id)arg0 ;


@end


#endif