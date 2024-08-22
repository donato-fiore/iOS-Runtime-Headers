// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLTOOLSCOMMANDBUFFER_H
#define MTLTOOLSCOMMANDBUFFER_H

@class NSString, NSError, NSDictionary, NSMutableSet, NSMutableDictionary;
@protocol MTLCommandBufferSPI, MTLToolsRetainingContainer, MTLCommandQueue, MTLDeadlineProfile, MTLDevice, MTLLogContainer;


#import "MTLToolsObject.h"
#import "MTLToolsDeadlineProfile.h"

@interface MTLToolsCommandBuffer : MTLToolsObject <MTLCommandBufferSPI, MTLToolsRetainingContainer>

 {
    ? _flags;
    os_unfair_lock_s _retainedObjectsLock;
    os_unfair_lock_s _handlerLock;
    vector<void (^)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>> _scheduledHandlers;
    vector<void (^)(id<MTLCommandBuffer>), std::allocator<void (^)(id<MTLCommandBuffer>)>> _completedHandlers;
    BOOL _didInvokeHandlers;
    id *_perfSampleHandlerBlock;
    BOOL _StatEnabled;
    MTLToolsDeadlineProfile *_deadlineProfile;
}


@property (readonly) CGFloat GPUEndTime;
@property (readonly) CGFloat GPUStartTime;
@property (readonly) NSObject<MTLCommandQueue> *commandQueue;
@property (readonly, retain) NSObject<MTLDeadlineProfile> *deadlineProfile;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly) NSError *error;
@property (readonly) NSUInteger errorOptions;
@property (readonly) NSUInteger globalTraceObjectID;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat kernelEndTime;
@property (readonly) CGFloat kernelStartTime;
@property (copy) NSString *label;
@property (readonly, nonatomic, getter=getListIndex) NSUInteger listIndex;
@property (readonly) NSObject<MTLLogContainer> *logs;
@property (getter=isProfilingEnabled) BOOL profilingEnabled;
@property (readonly) NSDictionary *profilingResults;
@property (readonly, nonatomic) NSMutableSet *retainedObjects; // ivar: _retainedObjects
@property (readonly) BOOL retainedReferences;
@property (readonly) NSUInteger status;
@property (readonly) Class superclass;
@property BOOL useRetainedObjectsLock; // ivar: _useRetainedObjectsLock
@property (readonly, nonatomic) NSMutableDictionary *userDictionary;


+(id)unwrapMTLComputePassDescriptorInternal:(id)arg0 ;
-(*void)debugBufferContentsWithLength:(*NSUInteger)arg0 ;
-(BOOL)addRetainedObject:(id)arg0 ;
-(BOOL)commitAndWaitUntilSubmitted;
-(BOOL)commitAndWaitUntilSubmittedWithDeadline:(NSUInteger)arg0 ;
-(NSUInteger)protectionOptions;
-(id)accelerationStructureCommandEncoder;
-(id)accelerationStructureCommandEncoderWithDescriptor:(id)arg0 ;
-(id)blitCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)debugCommandEncoder;
-(id)initWithBaseObject:(id)arg0 parent:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg0 parent:(id)arg1 descriptor:(id)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)resourceStateCommandEncoder;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg0 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)unwrapMTLAccelerationStructurePassDescriptor:(id)arg0 ;
-(id)unwrapMTLBlitPassDescriptor:(id)arg0 ;
-(id)unwrapMTLComputePassDescriptor:(id)arg0 ;
-(id)unwrapMTLRenderPassDescriptor:(id)arg0 ;
-(id)unwrapMTLResourceStatePassDescriptor:(id)arg0 ;
-(void)addCompletedHandler:(id)arg0 ;
-(void)addPurgedHeap:(id)arg0 ;
-(void)addPurgedResource:(id)arg0 ;
-(void)addScheduledHandler:(id)arg0 ;
-(void)addSynchronizationNotification:(id)arg0 ;
-(void)clearRetainedObjects;
-(void)commit;
-(void)commitAndHold;
-(void)commitWithDeadline:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)dropResourceGroups:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)encodeCacheHintFinalize:(NSUInteger)arg0 resourceGroups:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)encodeCacheHintTag:(NSUInteger)arg0 resourceGroups:(*id)arg1 count:(NSUInteger)arg2 ;
-(void)encodeDashboardFinalizeForResourceGroup:(id)arg0 dashboard:(NSUInteger)arg1 value:(NSUInteger)arg2 forIndex:(NSUInteger)arg3 ;
-(void)encodeDashboardFinalizeForResourceGroup:(id)arg0 dashboard:(NSUInteger)arg1 values:(*NSUInteger)arg2 indices:(*NSUInteger)arg3 count:(NSUInteger)arg4 ;
-(void)encodeDashboardTagForResourceGroup:(id)arg0 ;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 timeout:(unsigned int)arg2 ;
-(void)enqueue;
-(void)executeSynchronizationNotifications:(int)arg0 ;
-(void)executeSynchronizationNotifications:(int)arg0 scope:(NSUInteger)arg1 resources:(*id)arg2 count:(NSUInteger)arg3 ;
-(void)invokeCompletedHandlers;
-(void)invokeScheduledHandlers;
-(void)popDebugGroup;
-(void)postCompletionHandlers;
-(void)postScheduledHandlers;
-(void)preCommit;
-(void)preCompletionHandlers;
-(void)preScheduledHandlers;
-(void)presentDrawable:(id)arg0 ;
-(void)presentDrawable:(id)arg0 afterMinimumDuration:(CGFloat)arg1 ;
-(void)presentDrawable:(id)arg0 atTime:(CGFloat)arg1 ;
-(void)presentDrawable:(id)arg0 options:(id)arg1 ;
-(void)pushDebugGroup:(id)arg0 ;
-(void)retainObjectsFromRenderPassDescriptor:(id)arg0 ;
-(void)setProtectionOptions:(NSUInteger)arg0 ;
-(void)setResourceGroups:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;
-(void)willEncodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 writeableResources:(id)arg2 ;


@end


#endif