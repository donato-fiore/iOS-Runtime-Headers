// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MTLCOMMANDQUEUE_H
#define _MTLCOMMANDQUEUE_H

@class MTLObjectWithLabel, NSMutableArray, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, OS_dispatch_semaphore;


#import "_MTLDevice.h"

@interface _MTLCommandQueue : MTLObjectWithLabel {
    _MTLDevice *_dev;
    NSMutableArray *_pendingQueue;
    NSMutableArray *_submittedQueue;
    _opaque_pthread_mutex_t _pendingQueueLock;
    _opaque_pthread_mutex_t _submittedQueueLock;
    NSObject<OS_dispatch_group> *_submittedGroup;
    NSObject<OS_dispatch_queue> *_commandQueueDispatch;
    NSObject<OS_dispatch_queue> *_completionQueueDispatch;
    NSObject<OS_dispatch_source> *_commandQueueEventSource;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    NSUInteger _labelTraceID;
    uint8_t _numCommandBuffers;
    id *_perfSampleHandlerBlock;
    NSObject<OS_dispatch_semaphore> *_presentScheduledSemaphore;
    BOOL _forceImmediateSubmissionOnCommitThread;
}


@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled; // ivar: _StatEnabled
@property (nonatomic, getter=getStatLocations) NSUInteger StatLocations; // ivar: _StatLocations
@property (nonatomic, getter=getStatOptions) NSUInteger StatOptions; // ivar: _StatOptions
@property int backgroundTrackingPID; // ivar: _backgroundTrackingPID
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue; // ivar: _commitQueue
@property (readonly) BOOL commitSynchronously; // ivar: _commitSynchronously
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue; // ivar: _completionQueue
@property (readonly) BOOL disableCrossQueueHazardTracking; // ivar: _disableCrossQueueHazardTracking
@property BOOL executionEnabled; // ivar: _executionEnabled
@property (readonly) NSUInteger globalTraceObjectID; // ivar: _globalTraceObjectID
@property (readonly) BOOL isOpenGLQueue; // ivar: _openGLQueue
@property (copy) NSString *label;
@property (nonatomic, getter=getListIndex) NSUInteger listIndex; // ivar: _listIndex
@property (readonly) NSUInteger maxCommandBufferCount; // ivar: _maxCommandBufferCount
@property (nonatomic) NSUInteger numCommandBuffers;
@property (getter=isProfilingEnabled) BOOL profilingEnabled; // ivar: _profilingEnabled
@property (readonly) NSUInteger qosLevel; // ivar: _qosLevel
@property BOOL skipRender; // ivar: _skipRender


-(BOOL)_submitAvailableCommandBuffers;
-(BOOL)submitCommandBuffer:(id)arg0 ;
-(NSUInteger)getAndIncrementNumCommandBuffers;
-(id)availableCounters;
-(id)commandBufferWithDescriptor:(id)arg0 ;
-(id)description;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 descriptor:(id)arg1 ;
-(id)initWithDevice:(id)arg0 maxCommandBufferCount:(NSUInteger)arg1 ;
-(int)requestCounters:(id)arg0 ;
-(int)requestCounters:(id)arg0 withIndex:(NSUInteger)arg1 ;
-(void)addPerfSampleHandler:(id)arg0 ;
-(void)commandBufferDidComplete:(id)arg0 startTime:(NSUInteger)arg1 completionTime:(NSUInteger)arg2 error:(id)arg3 ;
-(void)commitCommandBuffer:(id)arg0 wake:(BOOL)arg1 ;
-(void)completeCommandBuffers:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)enqueueCommandBuffer:(id)arg0 ;
-(void)finish;
-(void)insertDebugCaptureBoundary;
-(void)setSubmissionQueue:(id)arg0 ;
-(void)submitCommandBuffers:(*id)arg0 count:(NSUInteger)arg1 ;


@end


#endif