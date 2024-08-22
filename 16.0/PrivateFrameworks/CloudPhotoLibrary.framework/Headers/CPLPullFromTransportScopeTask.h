// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLPULLFROMTRANSPORTSCOPETASK_H
#define CPLPULLFROMTRANSPORTSCOPETASK_H

@class NSError, NSMutableArray, NSMutableDictionary, NSArray, NSData, NSMutableSet;
@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask, CPLEngineTransportGroup, CPLEngineTransportGetCurrentSyncAnchorTask, CPLEngineTransportFetchRecordsTask;


#import "CPLEngineScopedTask.h"
#import "CPLTransportScopeMapping.h"
#import "CPLEngineScope.h"
#import "CPLEngineCloudCache.h"
#import "CPLEngineTransientRepository.h"
#import "CPLEngineTransport.h"
#import "CPLScopeChange.h"
#import "CPLFeatureVersionHistory.h"

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_endTaskError;
    CPLTransportScopeMapping *_transportScopeMapping;
    CPLEngineScope *_sharedScope;
    CPLEngineScope *_primaryScope;
    NSMutableArray *_partnerScopes;
    NSMutableDictionary *_syncAnchorsOfPartnerScopesThatMightNeedToPullChanges;
    NSMutableArray *_allPartnerScopeIdentifiersNeedingToPullChanges;
    NSArray *_finalListOfPartnerScopesNeedingToPullChanges;
    CPLEngineCloudCache *_cloudCache;
    CPLEngineTransientRepository *_transientPullRepository;
    CPLEngineTransport *_transport;
    id<CPLEngineTransportDownloadBatchTask> *_downloadTask;
    id<CPLEngineTransportQueryTask> *_queryTask;
    CPLScopeChange *_currentScopeChange;
    Class _currentQueryClass;
    BOOL _ignoreNewBatches;
    BOOL _useCourtesyMingling;
    NSUInteger _rewindFeatureVersion;
    NSData *_rewindSyncAnchor;
    CPLFeatureVersionHistory *_versionHistory;
    id<CPLEngineTransportGroup> *_transportGroup;
    NSMutableSet *_otherRewindSyncAnchors;
    NSUInteger _totalAssetCountForScope;
    BOOL _hasCachedTotalAssetCountForScope;
    NSInteger _taskItem;
    BOOL _hasFetchedInitialSyncAnchor;
    BOOL _shouldStoreInitialSyncAnchor;
    NSData *_initialSyncAnchor;
    CPLScopeChange *_initialScopeChange;
    id<CPLEngineTransportGetCurrentSyncAnchorTask> *_fetchInitialSyncAnchorTask;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
    NSData *_updateTransportScope;
    CPLEngineScope *_stagingScope;
    NSData *_stagingTransportScope;
    BOOL _hasExtraRecordsToCheck;
    id<CPLEngineTransportFetchRecordsTask> *_checkRecordsTask;
    NSUInteger _countOfPulledAssets;
}




-(BOOL)_dequeueFromPendingRecordChecksIfNecessary:(id)arg0 error:(*id)arg1 ;
-(BOOL)_fetchRewindSyncAnchorsInScopes:(id)arg0 startSyncAnchor:(id)arg1 error:(*id)arg2 ;
-(BOOL)_storeRewindSyncAnchors:(id)arg0 inScopes:(id)arg1 error:(*id)arg2 ;
-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(NSUInteger)_totalAssetCountForScope;
-(id)_cloudCacheInStore:(id)arg0 ;
-(id)_transientPullRepositoryInStore:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)scopesForTask;
-(id)taskIdentifier;
-(id)transportScope;
-(void)_addPartnerScope:(id)arg0 scopes:(id)arg1 ;
-(void)_cancelAllTasks;
-(void)_checkExtraRecords;
-(void)_checkExtraRecordsWithScopedIdentifiers:(id)arg0 ;
-(void)_checkServerFeatureVersionWithCompletionHandler:(id)arg0 ;
-(void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg0 inTransaction:(id)arg1 ;
-(void)_extractAndMinglePersonsIfPossibleFromBatch:(id)arg0 inTransaction:(id)arg1 ;
-(void)_fetchInitialSyncAnchor;
-(void)_handleNewBatchFromChanges:(id)arg0 newSyncAnchor:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromChanges:(id)arg0 updatedFlags:(id)arg1 newSyncAnchor:(id)arg2 partnerScopesNeedingToPullChanges:(id)arg3 ;
-(void)_handleNewBatchFromQuery:(id)arg0 newCursor:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromQuery:(id)arg0 queryClass:(Class)arg1 newCursor:(id)arg2 ;
-(void)_launch;
-(void)_launchFetchChangesFromSyncAnchor:(id)arg0 ;
-(void)_launchNextQueryTask;
-(void)_launchPullTasksAndDisableQueries:(BOOL)arg0 ;
-(void)_launchQueryForClass:(Class)arg0 cursor:(id)arg1 ;
-(void)_notePartnerScopesNeedingToPullChanges:(id)arg0 scopes:(id)arg1 inTransaction:(id)arg2 ;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_relaunchFetchChangesFromOtherRewindSyncAnchors;
-(void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg0 ;
-(void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)arg0 ;
-(void)cancel;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif