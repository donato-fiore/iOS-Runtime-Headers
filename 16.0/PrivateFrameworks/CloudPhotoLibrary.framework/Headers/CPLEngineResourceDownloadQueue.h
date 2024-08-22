// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLENGINERESOURCEDOWNLOADQUEUE_H
#define CPLENGINERESOURCEDOWNLOADQUEUE_H

@class NSArray, NSDate, NSString;
@protocol CPLAbstractObject, OS_dispatch_queue;


#import "CPLEngineStorage.h"
#import "CPLPlatformObject.h"

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject>

 {
    NSObject<OS_dispatch_queue> *_downloadLock;
    NSArray *_allQueues;
    NSArray *_allHighPriorityQueues;
    NSArray *_allLowPriorityQueues;
    NSArray *_bestCancellableHighPriorityQueues;
    NSArray *_bestCancellableLowPriorityQueues;
    id *_highPriorityQueuePerResourceTypeAndTransferIntent;
    id *_lowPriorityQueuePerResourceTypeAndTransferIntent;
    NSUInteger _inflightTransferTasksCount;
    NSUInteger _transferTasksBurstCount;
    NSUInteger _lastTransferTasksBurstCount;
    NSDate *_lastTransferTaskBurstDate;
    BOOL _shouldRequestABackgroundDownloadSyncPhase;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;


+(BOOL)shouldRetryDownloadOnError:(id)arg0 ;
-(BOOL)_canScheduleBackgroundDownloads;
-(BOOL)_launchTransportTaskForQueue:(id)arg0 ;
-(BOOL)_shouldTryLowPriorityDownloadWithError:(*id)arg0 ;
-(BOOL)deleteRecordsForScopeIndex:(NSInteger)arg0 maxCount:(NSInteger)arg1 deletedCount:(*NSInteger)arg2 error:(*id)arg3 ;
-(BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg0 intent:(NSUInteger)arg1 downloading:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
-(BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg0 error:(*id)arg1 ;
-(BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg0 bumpRetryCount:(BOOL)arg1 didDiscard:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeBackgroundDownloadTaskForResource:(id)arg0 error:(*id)arg1 ;
-(BOOL)resetDequeuedBackgroundDownloadTasksWithError:(*id)arg0 ;
-(NSUInteger)_transportTaskCount;
-(NSUInteger)countOfQueuedDownloadTasks;
-(NSUInteger)scopeType;
-(id)_activeQueueForTransferTask:(id)arg0 ;
-(id)_bestQueueWithCancellableTransportTasks;
// -(id)_downloadTaskForLocalResource:(id)arg0 clientBundleID:(id)arg1 options:(id)arg2 proposedTaskIdentifier:(id)arg3 didStartHandler:(id)arg4 progressHandler:(unk)arg5 completionHandler:(id)arg6  ;
// -(id)_failedTaskWithCompletionHandler:(id)arg0 error:(unk)arg1 resource:(id)arg2 taskIdentifier:(id)arg3 options:(id)arg4  ;
-(id)_queuesStatus;
// -(id)_realDownloadTaskForLocalResource:(id)arg0 taskIdentifier:(id)arg1 cloudResource:(id)arg2 ofRecord:(id)arg3 target:(id)arg4 didStartHandler:(id)arg5 progressHandler:(unk)arg6 completionHandler:(id)arg7  ;
// -(id)_resourceStorageCopyTaskForResource:(id)arg0 taskIdentifier:(id)arg1 cloudResource:(id)arg2 ofRecord:(id)arg3 target:(id)arg4 didStartHandler:(id)arg5 progressHandler:(unk)arg6 completionHandler:(id)arg7  ;
-(id)cloudResourceForLocalResource:(*id)arg0 cloudRecord:(*id)arg1 target:(*id)arg2 shouldNotTrustCaches:(*BOOL)arg3 allowUnsafeClientCache:(BOOL)arg4 transportScopeMapping:(id)arg5 error:(*id)arg6 ;
-(id)createGroupForBackgroundDownloadsOfResourceType:(NSUInteger)arg0 transferIntent:(NSUInteger)arg1 transport:(id)arg2 ;
-(id)dequeueNextBackgroundDownloadTasksForResourceType:(NSUInteger)arg0 andIntent:(NSUInteger)arg1 maximumSize:(NSUInteger)arg2 maximumCount:(NSUInteger)arg3 error:(*id)arg4 ;
// -(id)downloadTaskForLocalResource:(id)arg0 clientBundleID:(id)arg1 options:(id)arg2 proposedTaskIdentifier:(id)arg3 didStartHandler:(id)arg4 progressHandler:(unk)arg5 completionHandler:(id)arg6  ;
-(id)enumeratorForDownloadedResources;
-(id)initWithEngineStore:(id)arg0 name:(id)arg1 ;
-(id)status;
-(void)_dequeueTransferTaskInActiveQueue:(id)arg0 ;
-(void)_dispatchTransportTasksIfNecessary;
-(void)_enqueueTransferTaskInActiveQueue:(id)arg0 ;
-(void)_requestBackgroundDownloads;
-(void)_scheduleBackgroundDownloadsIfNecessary;
-(void)_unscheduleBackgroundDownloads;
-(void)barrier;


@end


#endif