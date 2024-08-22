// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOGPUMETALIOCOMMANDQUEUE_H
#define IOGPUMETALIOCOMMANDQUEUE_H

@class MTLIOCommandQueue, IOGPUMetalDevice<MTLDevice>, IOGPUMetalCommandQueue<MTLCommandQueue>, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;



@interface IOGPUMetalIOCommandQueue : MTLIOCommandQueue {
    IOGPUMetalDevice<MTLDevice> *_device;
    *__IOGPUIOCommandQueue _ioCommandQueueRef;
    IOGPUMetalCommandQueue<MTLCommandQueue> *_gpuQueue;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    _opaque_pthread_mutex_t _pendingQueueLock;
    _opaque_pthread_mutex_t _submittedQueueLock;
    NSObject<OS_dispatch_queue> *_submissionQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_queue> *_ioThreadDispatch;
    NSObject<OS_dispatch_queue> *_decompressionQueue;
    NSUInteger _globalTraceObjectID;
}




-(NSInteger)getPriority;
-(NSUInteger)globalTraceObjectID;
-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)getDecompressionQueue;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(void)_submitAvailableCommands;
-(void)barrier;
-(void)commandBufferComplete;
-(void)commitCommandBuffer:(id)arg0 ;
-(void)dealloc;
-(void)didComplete:(id)arg0 withStatus:(NSInteger)arg1 ;
-(void)enqueueBarrier;
-(void)enqueueCommandBuffer:(id)arg0 ;
-(void)launchIOGPUIOThreads;
-(void)launchIOWorkerThreads;
-(void)setLabel:(id)arg0 ;


@end


#endif