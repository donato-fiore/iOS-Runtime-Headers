// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MTLIOCOMMANDQUEUE_H
#define _MTLIOCOMMANDQUEUE_H

@class MTLObjectWithLabel, NSMutableArray, NSString;
@protocol MTLIOCommandQueueSPI, OS_dispatch_queue, OS_dispatch_semaphore, MTLDevice, MTLSharedEvent, MTLCommandQueue, MTLIOScratchBufferAllocator;


#import "MTLResourceListPool.h"
#import "MTLSharedEventListener.h"

@interface _MTLIOCommandQueue : MTLObjectWithLabel <MTLIOCommandQueueSPI>

 {
    NSInteger _type;
    NSInteger _priority;
    NSObject<OS_dispatch_queue> *_commitQueue;
    NSUInteger _maxWorkerThreads;
    MTLResourceListPool *_resourceListPool;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    _opaque_pthread_cond_t cmdCvar;
    _opaque_pthread_mutex_t cmdMutex;
    NSObject<OS_dispatch_queue> *_followonQueue;
    NSUInteger _labelTraceID;
    MTLIOCommandQueueCommandList _commandList;
    _opaque_pthread_mutex_t _completeQueueMutex;
    NSMutableArray *_completeQueue;
    BOOL _usesPooledScratchBufferAllocator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description; // ivar: description
@property (readonly) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) MTLSharedEventListener *eventSignalListener; // ivar: _eventSignalListener
@property (readonly, nonatomic) NSUInteger globalTraceObjectID;
@property (readonly) NSObject<MTLSharedEvent> *gpuEvent; // ivar: _gpuEvent
@property (readonly) NSObject<MTLCommandQueue> *gpuQueue; // ivar: _gpuQueue
@property (readonly) NSUInteger hash; // ivar: hash
@property (copy) NSString *label;
@property (readonly) NSObject<MTLIOScratchBufferAllocator> *scratchBufferAllocator; // ivar: _scratchBufferAllocator
@property (readonly) Class superclass; // ivar: superclass


-(id)commandBuffer;
-(id)commandBufferWithUnretainedReferences;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(void)barrier;
-(void)commit:(id)arg0 ;
-(void)dealloc;
-(void)didComplete:(id)arg0 withStatus:(NSInteger)arg1 ;
-(void)enqueueBarrier;
-(void)kickAllocatorCleanupQueue;
-(void)launchIOWorkerThreads;
-(void)returnActiveScratchBuffersToPool;


@end


#endif