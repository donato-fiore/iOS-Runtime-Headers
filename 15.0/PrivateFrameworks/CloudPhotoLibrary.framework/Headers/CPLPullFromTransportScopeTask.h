// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLPULLFROMTRANSPORTSCOPETASK_H
#define CPLPULLFROMTRANSPORTSCOPETASK_H

@class NSData;
@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask, CPLEngineTransportGroup, CPLEngineTransportGetCurrentSyncAnchorTask;


#import "CPLEngineScopedTask.h"
#import "CPLEngineCloudCache.h"
#import "CPLEngineTransientRepository.h"
#import "CPLEngineTransport.h"
#import "CPLScopeChange.h"
#import "CPLFeatureVersionHistory.h"

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_queue;
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
}




-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(NSUInteger)_totalAssetCountForScope;
-(id)_cloudCacheInStore:(id)arg0 ;
-(id)_transientPullRepositoryInStore:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)taskIdentifier;
-(void)_cancelAllTasks;
-(void)_checkServerFeatureVersionWithCompletionHandler:(id)arg0 ;
-(void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg0 inTransaction:(id)arg1 ;
-(void)_extractAndMinglePersonsIfPossibleFromBatch:(id)arg0 inTransaction:(id)arg1 ;
-(void)_fetchInitialSyncAnchor;
-(void)_handleNewBatchFromChanges:(id)arg0 newSyncAnchor:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromChanges:(id)arg0 updatedFlags:(id)arg1 newSyncAnchor:(id)arg2 ;
-(void)_handleNewBatchFromQuery:(id)arg0 newCursor:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromQuery:(id)arg0 queryClass:(Class)arg1 newCursor:(id)arg2 ;
-(void)_launch;
-(void)_launchFetchChangesFromSyncAnchor:(id)arg0 ;
-(void)_launchNextQueryTask;
-(void)_launchPullTasksAndDisableQueries:(BOOL)arg0 ;
-(void)_launchQueryForClass:(Class)arg0 cursor:(id)arg1 ;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg0 ;
-(void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)arg0 ;
-(void)cancel;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif