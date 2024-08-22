// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLENGINESTORE_H
#define CPLENGINESTORE_H

@class NSHashTable, NSMutableArray, NSURL, NSMutableDictionary, NSSet, NSDate, NSArray, NSString;
@protocol CPLAbstractObject, CPLEngineComponent, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CPLResetTracker.h"
#import "CPLChangeBatch.h"
#import "CPLEngineScopeCleanupTasks.h"
#import "CPLEngineCloudCache.h"
#import "CPLEngineDerivativesCache.h"
#import "CPLEngineResourceDownloadQueue.h"
#import "CPLEngineLibrary.h"
#import "CPLEngineIDMapping.h"
#import "CPLEngineInitialQueryTracker.h"
#import "CPLEngineOutgoingResources.h"
#import "CPLPlatformObject.h"
#import "CPLSyncSessionPredictor.h"
#import "CPLEngineChangePipe.h"
#import "CPLEnginePushRepository.h"
#import "CPLEngineQuarantinedRecords.h"
#import "CPLEngineRemappedDeletes.h"
#import "CPLEngineResourceStorage.h"
#import "CPLEngineScopeStorage.h"
#import "CPLEngineStatusCenter.h"
#import "CPLRecordStorageView.h"
#import "CPLEngineTransientRepository.h"

@interface CPLEngineStore : NSObject <CPLAbstractObject, CPLEngineComponent>

 {
    NSHashTable *_storages;
    NSObject<OS_dispatch_queue> *_batchedTransactionsQueue;
    NSMutableArray *_batchedTransactions;
    BOOL _batchedTransactionDequeueIsScheduled;
    BOOL _dontDelayChangeSessionUpdate;
    BOOL _applyingChangeSessionUpdate;
    NSURL *_resetEventsURL;
    NSMutableArray *_resetEvents;
    CPLResetTracker *_pendingTracker;
    CPLChangeBatch *_unacknowledgedBatch;
    BOOL _discardUnacknowledgedBatchOnTransactionFail;
    BOOL _transactionClientCacheViewHasPushRepository;
    NSMutableDictionary *_transactionNewPredictions;
    NSSet *_lastInvalidRecordScopedIdentifiers;
    NSDate *_lastInvalidRecordsDate;
    NSObject<OS_dispatch_source> *_pendingUpdateTimer;
    NSObject<OS_dispatch_queue> *_pendingUpdateQueue;
    CGFloat _pendingUpdateInterval;
    BOOL _unschedulePendingUpdateApplyOnWriteSuccess;
    BOOL _schedulePendingUpdateApplyOnWriteSuccess;
    BOOL _scheduleSetupOnWriteSuccess;
    BOOL _scheduleDisabledFeatureUpdateOnWriteSuccess;
    BOOL _schedulePullFromClient;
    NSObject<OS_dispatch_queue> *_shouldSyncScopeListQueue;
    BOOL _shouldEnableScopeListSyncOnWriteSuccess;
    NSArray *_disabledFeatures;
    BOOL _hasUpdatedDisabledFeatures;
    BOOL _isUpdatingDisabledFeatures;
    BOOL _shouldTriggerCompleteResetSyncAfterDisabledFeaturesUpdate;
    BOOL _shouldTriggerResetSyncAfterDisabledFeaturesUpdate;
}


@property (readonly, nonatomic) CPLEngineScopeCleanupTasks *cleanupTasks; // ivar: _cleanupTasks
@property (readonly, nonatomic) CPLEngineCloudCache *cloudCache; // ivar: _cloudCache
@property (readonly, nonatomic) id *corruptionInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CPLEngineDerivativesCache *derivativesCache; // ivar: _derivativesCache
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *disabledFeatures;
@property (readonly, nonatomic) CPLEngineResourceDownloadQueue *downloadQueue; // ivar: _downloadQueue
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // ivar: _engineLibrary
@property (readonly, nonatomic) BOOL hasPendingResetSync;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLEngineIDMapping *idMapping; // ivar: _idMapping
@property (readonly, nonatomic) CPLEngineInitialQueryTracker *initialQueryTracker; // ivar: _initialQueryTracker
@property (readonly) NSDate *libraryCreationDate;
@property (readonly, nonatomic) CPLEngineOutgoingResources *outgoingResources; // ivar: _outgoingResources
@property (readonly, nonatomic) CPLPlatformObject *platformObject; // ivar: _platformObject
@property (readonly, nonatomic) CPLSyncSessionPredictor *predictor; // ivar: _predictor
@property (readonly, nonatomic) CPLEngineChangePipe *pullQueue; // ivar: _pullQueue
@property (readonly, nonatomic) CPLEnginePushRepository *pushRepository; // ivar: _pushRepository
@property (readonly, nonatomic) BOOL pushRepositoryIsFull;
@property (readonly, nonatomic) CPLEngineQuarantinedRecords *quarantinedRecords; // ivar: _quarantinedRecords
@property (readonly, nonatomic) CPLEngineRemappedDeletes *remappedDeletes; // ivar: _remappedDeletes
@property (readonly, nonatomic) CPLEngineResourceStorage *resourceStorage; // ivar: _resourceStorage
@property (readonly, nonatomic) CPLEngineScopeStorage *scopes; // ivar: _scopes
@property (readonly, nonatomic) BOOL shouldGenerateDerivatives;
@property (readonly) BOOL shouldSyncScopeList; // ivar: _shouldSyncScopeList
@property (readonly, nonatomic) BOOL shouldUpdateDisabledFeatures;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) CPLEngineStatusCenter *statusCenter; // ivar: _statusCenter
@property (readonly, nonatomic) NSArray *storages;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CPLRecordStorageView *transactionClientCacheView; // ivar: _transactionClientCacheView
@property (readonly, nonatomic) CPLEngineTransientRepository *transientPullRepository; // ivar: _transientPullRepository


+(id)platformImplementationProtocol;
+(id)stateDescriptionForState:(NSUInteger)arg0 ;
+(id)storageNames;
-(BOOL)_applyAndDiscardPendingUpdate:(id)arg0 error:(*id)arg1 ;
-(BOOL)_applyPendingUpdate:(id)arg0 error:(*id)arg1 ;
-(BOOL)_canRead;
-(BOOL)_canWrite;
-(BOOL)_handleException:(id)arg0 ;
-(BOOL)_resetCompleteSyncStateIncludingIDMappingWithCause:(id)arg0 scope:(id)arg1 error:(*id)arg2 ;
-(BOOL)_resetCompleteSyncStateWithCause:(id)arg0 scope:(id)arg1 error:(*id)arg2 ;
-(BOOL)_resetGlobalStateWithError:(*id)arg0 ;
-(BOOL)_resetLocalSyncStateWithCause:(id)arg0 scope:(id)arg1 date:(id)arg2 error:(*id)arg3 ;
-(BOOL)_resetSyncAnchorWithCause:(id)arg0 scope:(id)arg1 error:(*id)arg2 ;
-(BOOL)_shouldSyncScopeListWithOptions:(NSUInteger)arg0 ;
-(BOOL)_storeChangeSessionUpdate:(id)arg0 error:(*id)arg1 ;
-(BOOL)applyPreviousChangeSessionUpdateWithExpectedLibraryVersion:(id)arg0 error:(*id)arg1 ;
-(BOOL)beginChangeSession:(id)arg0 withLibraryVersion:(id)arg1 resetTracker:(id)arg2 error:(*id)arg3 ;
-(BOOL)checkExpectedLibraryVersion:(id)arg0 error:(*id)arg1 ;
-(BOOL)createStoragesDynamically:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteDynamicallyCreatedStorages:(id)arg0 error:(*id)arg1 ;
-(BOOL)forceApplyPendingChangeSessionUpdateWithError:(*id)arg0 ;
-(BOOL)hasPendingChangeSessionUpdate;
-(BOOL)hasUnacknowledgedChanges;
-(BOOL)isClientInSyncWithClientCache;
-(BOOL)isFeatureDisabled:(id)arg0 ;
-(BOOL)resetCompleteSyncStateIncludingIDMappingWithCause:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetCompleteSyncStateWithCause:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetLocalSyncStateWithCause:(id)arg0 date:(id)arg1 error:(*id)arg2 ;
-(BOOL)resetLocalSyncStateWithCause:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetSyncAnchorWithCause:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeChangeSessionUpdate:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeClientIsInSyncWithClientCacheWithError:(*id)arg0 ;
-(BOOL)storeDerivativesFilter:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeLastQuarantineCountReportDate:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeLibraryVersion:(id)arg0 withError:(*id)arg1 ;
-(BOOL)storeUserIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)updateDisabledFeatures:(id)arg0 didReset:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)updateLibraryOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSUInteger)libraryOptions;
-(id)_currentTransaction;
// -(id)_performWriteTransactionByPassBlocker:(id)arg0 WithBlock:(id)arg1 completionHandler:(unk)arg2  ;
-(id)_resetEventsDescriptions;
-(id)_resetEventsJSON;
-(id)_storedDisabledFeatures;
-(id)clientCacheIdentifier;
-(id)componentName;
-(id)createNewLibraryVersion;
-(id)derivativesFilter;
-(id)initWithEngineLibrary:(id)arg0 ;
-(id)lastQuarantineCountReportDate;
-(id)libraryVersion;
-(id)localResourceForCloudResource:(id)arg0 recordClass:(*Class)arg1 ;
-(id)newClientCacheViewUsesPushRepository:(*BOOL)arg0 ;
-(id)performReadTransactionWithBlock:(id)arg0 ;
// -(id)performWriteTransactionByPassBlocker:(id)arg0 withBlock:(id)arg1 completionHandler:(unk)arg2  ;
// -(id)performWriteTransactionWithBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(id)unacknowledgedChangeWithLocalScopedIdentifier:(id)arg0 ;
-(id)userIdentifier;
-(void)_addCleanupBlock:(id)arg0 ;
-(void)_commitWriteTransaction:(id)arg0 commitError:(id)arg1 ;
-(void)_dropTransactionClientCacheView;
-(void)_finishTransaction;
-(void)_loadResetEvents;
-(void)_performBarrierTransaction:(id)arg0 withBlock:(id)arg1 ;
-(void)_performTransaction:(id)arg0 withBlock:(id)arg1 ;
-(void)_reallyPerformBatchedTransactionsLocked;
-(void)_reallySchedulePendingUpdateApply;
-(void)_reallyUnschedulePendingUpdateApply;
-(void)_removeTransactionOnCurrentThread:(id)arg0 ;
-(void)_scheduleBatchedTransactionsLocked;
-(void)_schedulePendingUpdateApply;
-(void)_setTransactionOnCurrentThread:(id)arg0 ;
-(void)_storeResetEvent:(id)arg0 scopeIdentifier:(id)arg1 date:(id)arg2 cause:(id)arg3 ;
-(void)_storeResetEvent:(id)arg0 scopeIdentifier:(id)arg1 date:(id)arg2 pending:(BOOL)arg3 cause:(id)arg4 ;
-(void)_unschedulePendingUpdateApply;
-(void)_updateShouldSyncScopeList:(BOOL)arg0 ;
-(void)assertCanRead;
-(void)assertCanWrite;
-(void)assertNoUnacknowledgedChanges;
-(void)blockWriteTransactionsWithCompletionHandler:(id)arg0 ;
-(void)closeAndDeactivate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)dropUnacknowledgedBatch;
-(void)emergencyClose;
-(void)getStatusDictionaryWithCompletionHandler:(id)arg0 ;
-(void)getStatusWithCompletionHandler:(id)arg0 ;
-(void)keepUnacknowledgedBatch:(id)arg0 ;
-(void)markAsCorrupted;
-(void)noteInvalidRecordScopedIdentifiersInPushSession:(id)arg0 ;
-(void)noteOtherResetEvent:(id)arg0 cause:(id)arg1 ;
-(void)notePushRepositoryStoredSomeChanges;
-(void)noteResetSyncFinished;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)performBarrier;
-(void)performBatchedWriteTransactionBarrier;
-(void)performBatchedWriteTransactionBarrierWithCompletionBlock:(id)arg0 ;
// -(void)performBatchedWriteTransactionWithBlock:(id)arg0 completionHandler:(unk)arg1  ;
-(void)predictSyncSessionValue:(id)arg0 ofType:(id)arg1 ;
-(void)registerStorage:(id)arg0 ;
-(void)startVacuum;
-(void)stopVacuum;
-(void)testKey:(id)arg0 value:(id)arg1 completionHandler:(id)arg2 ;
-(void)transactionDidFinish;
-(void)wipeStoreAtNextOpeningWithReason:(id)arg0 completionBlock:(id)arg1 ;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;


@end


#endif