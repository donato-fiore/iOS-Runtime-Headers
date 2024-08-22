// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTOOLSCOMMANDQUEUE_H
#define MTLTOOLSCOMMANDQUEUE_H

@class NSString;
@protocol MTLCommandQueueSPI, OS_dispatch_queue, MTLDevice;


#import "MTLToolsObject.h"
#import "MTLToolsPerfCounterMailbox.h"

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI>

 {
    MTLToolsPerfCounterMailbox *_perfSampleMailbox;
    os_unfair_lock_s _perfHandlerLock;
    id *_perfSampleHandlerBlock;
}


@property (nonatomic, getter=isStatEnabled) BOOL StatEnabled;
@property (nonatomic, getter=getStatLocations) NSUInteger StatLocations;
@property (nonatomic, getter=getStatOptions) NSUInteger StatOptions;
@property int backgroundTrackingPID;
@property (readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property (readonly) BOOL commitSynchronously;
@property (readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) BOOL disableCrossQueueHazardTracking;
@property BOOL executionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isOpenGLQueue;
@property (copy) NSString *label;
@property (readonly) NSUInteger maxCommandBufferCount;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSUInteger qosLevel;
@property BOOL skipRender;
@property (readonly) Class superclass;


-(BOOL)setBackgroundGPUPriority:(NSUInteger)arg0 ;
-(BOOL)setBackgroundGPUPriority:(NSUInteger)arg0 offset:(unsigned short)arg1 ;
-(BOOL)setGPUPriority:(NSUInteger)arg0 ;
-(BOOL)setGPUPriority:(NSUInteger)arg0 offset:(unsigned short)arg1 ;
-(NSUInteger)getBackgroundGPUPriority;
-(NSUInteger)getGPUPriority;
-(id)availableCounters;
-(id)commandBuffer;
-(id)commandBufferWithDescriptor:(id)arg0 ;
-(id)commandBufferWithUnretainedReferences;
-(id)counterInfo;
-(id)getRequestedCounters;
-(id)getSPIStats;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)snapshotPerfSampleHandlerAndStatEnabled:(SEL)arg0 forCommandBuffer:(*BOOL)arg1 ;
-(id)subdivideCounterList:(id)arg0 ;
-(int)requestCounters:(id)arg0 ;
-(int)requestCounters:(id)arg0 withIndex:(NSUInteger)arg1 ;
-(void)addPerfSampleHandler:(id)arg0 ;
-(void)dealloc;
-(void)finish;
-(void)insertDebugCaptureBoundary;
-(void)setSubmissionQueue:(id)arg0 ;


@end


#endif