// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLMINGLEPULLEDCHANGESTASK_H
#define CPLMINGLEPULLEDCHANGESTASK_H

@class NSString;
@protocol OS_dispatch_queue;


#import "CPLEngineSyncTask.h"
#import "CPLScopeFilter.h"

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask {
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    BOOL _hasPreparedForMingling;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    BOOL _didNotifySchedulerPullQueueIsFullOnce;
    BOOL _needsToNotifySchedulerPullQueueIsFull;
}


@property (retain, nonatomic) CPLScopeFilter *scopeFilter; // ivar: _scopeFilter


// +(BOOL)mingleBatch:(id)arg0 forStore:(id)arg1 onPutBatchInPullQueue:(id)arg2 error:(unk)arg3  ;
-(BOOL)_checkContinueMinglingInTransaction:(id)arg0 ;
-(id)initWithEngineLibrary:(id)arg0 session:(id)arg1 ;
-(id)taskIdentifier;
-(void)_launch;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(void)_processNextBatch;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_taskDidFinishWithError:(id)arg0 ;
-(void)cancel;
-(void)launch;
-(void)taskDidFinishWithError:(id)arg0 ;


@end


#endif