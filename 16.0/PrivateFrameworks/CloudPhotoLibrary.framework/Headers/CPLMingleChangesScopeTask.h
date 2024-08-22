// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLMINGLECHANGESSCOPETASK_H
#define CPLMINGLECHANGESSCOPETASK_H

@protocol OS_dispatch_queue, CPLEngineTransportFixUpSparseRecordTask;


#import "CPLEngineScopedTask.h"
#import "CPLBatchExtractionStrategy.h"
#import "CPLEngineScope.h"
#import "CPLTransportScopeMapping.h"

@interface CPLMingleChangesScopeTask : CPLEngineScopedTask {
    NSObject<OS_dispatch_queue> *_lock;
    CPLBatchExtractionStrategy *_extractionStrategy;
    CPLEngineScope *_sharedScope;
    CPLTransportScopeMapping *_transportScopeMapping;
    id<CPLEngineTransportFixUpSparseRecordTask> *_fixUpTask;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
    NSUInteger _minglingCount;
}




-(BOOL)checkScopeIsValidInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 clientCacheIdentifier:(id)arg2 scope:(id)arg3 transportScope:(id)arg4 ;
-(id)taskIdentifier;
-(void)_acknownledgeFixUpTasks:(id)arg0 ;
-(void)_finishMingling;
-(void)_fixUpPrivateRecordsPointingToRemappedSharedRecords:(id)arg0 ;
-(void)_mingleOtherChanges;
-(void)_mingleRemappings;
-(void)_mingleSharedRemappings;
-(void)_noteBatchWasAddedInPullQueue:(id)arg0 fromBatch:(id)arg1 transaction:(id)arg2 ;
-(void)_notifySchedulerPullQueueIsFullInTransaction:(id)arg0 ;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)cancel;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif