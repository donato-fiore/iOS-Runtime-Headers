// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPXPCSERVERPIPELINEDBATCHQUERYMANAGER_H
#define PPXPCSERVERPIPELINEDBATCHQUERYMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface PPXPCServerPipelinedBatchQueryManager : NSObject {
    NSInteger _pipelineDepth;
    NSUInteger _pipelinedCallTimeoutNsec;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSem;
    NSMutableDictionary *_queryReplyThrottleSemaphores;
    uint8_t _isInterrupted;
}




-(id)initWithPipelineDepth:(NSInteger)arg0 pipelinedCallTimeoutNsec:(NSUInteger)arg1 maxConcurrentRequestsPerConnection:(NSUInteger)arg2 ;
-(void)_unblockQueryReplyThrottleSemaphore:(id)arg0 ;
-(void)runConcurrentlyWithRequestThrottle:(id)arg0 ;
// -(void)sendBatchedResultForQueryWithName:(id)arg0 queryId:(NSUInteger)arg1 batchGenerator:(id)arg2 sendError:(unk)arg3 sendBatch:(id)arg4  ;
-(void)unblockPendingQueries;


@end


#endif