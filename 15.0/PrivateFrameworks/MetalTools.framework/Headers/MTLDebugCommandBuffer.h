// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLDEBUGCOMMANDBUFFER_H
#define MTLDEBUGCOMMANDBUFFER_H

@class _MTLCommandEncoder, NSMutableSet;


#import "MTLToolsCommandBuffer.h"
#import "MTLToolsObject.h"

@interface MTLDebugCommandBuffer : MTLToolsCommandBuffer {
    _MTLCommandEncoder *_currentEncoder;
    unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> _attachmentSet;
    array<AttachmentDescriptorSimple, 8> _prevAttachments;
    array<AttachmentDescriptorSimple, 8> _currAttachments;
    os_unfair_lock_s _purgeableObjectsLock;
    unordered_set<id<MTLDebugResourcePurgeable>, std::hash<id<MTLDebugResourcePurgeable>>, std::equal_to<id<MTLDebugResourcePurgeable>>, std::allocator<id<MTLDebugResourcePurgeable>>> _referencedPurgeableObjects;
    os_unfair_lock_s _retainedObjectsLock;
    unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> _externallyRetainedObjects;
    unordered_set<MTLToolsObject *, std::hash<MTLToolsObject *>, std::equal_to<MTLToolsObject *>, std::allocator<MTLToolsObject *>> _internallyRetainedObjects;
    MTLToolsObject *_referencedDeadObject;
    os_unfair_lock_s _renderTargetAttachmentLock;
    NSMutableSet *_renderTargetAttachments;
}




-(*void)debugBufferContentsWithLength:(*NSUInteger)arg0 ;
-(BOOL)renderTargetInActiveRenderTargets:(id)arg0 ;
-(BOOL)testObjectReferenced:(id)arg0 wasInternallyRetained:(*BOOL)arg1 ;
-(id)accelerationStructureCommandEncoder;
-(id)blitCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 commandQueue:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)resourceStateCommandEncoder;
-(id)resourceStateCommandEncoderWithDescriptor:(id)arg0 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)unwrapMTLRenderPassDescriptor:(id)arg0 ;
-(void)addActiveRenderTarget:(id)arg0 ;
-(void)addActiveRenderTargets:(id)arg0 ;
-(void)addCompletedHandler:(id)arg0 ;
-(void)addObject:(id)arg0 retained:(BOOL)arg1 purgeable:(BOOL)arg2 ;
-(void)addPurgeableObject:(id)arg0 ;
-(void)addReferencedObject:(id)arg0 internallyRetained:(BOOL)arg1 ;
-(void)addScheduledHandler:(id)arg0 ;
-(void)addSynchronizationNotification:(id)arg0 ;
-(void)dealloc;
-(void)encodeDashboardFinalizeForResourceGroup:(id)arg0 dashboard:(NSUInteger)arg1 value:(NSUInteger)arg2 forIndex:(NSUInteger)arg3 ;
-(void)encodeDashboardFinalizeForResourceGroup:(id)arg0 dashboard:(NSUInteger)arg1 values:(*NSUInteger)arg2 indices:(*NSUInteger)arg3 count:(NSUInteger)arg4 ;
-(void)encodeDashboardTagForResourceGroup:(id)arg0 ;
-(void)encodeSignalEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWaitForEvent:(id)arg0 value:(NSUInteger)arg1 timeout:(unsigned int)arg2 ;
-(void)executeSynchronizationNotifications:(int)arg0 ;
-(void)executeSynchronizationNotifications:(int)arg0 scope:(NSUInteger)arg1 resources:(*id)arg2 count:(NSUInteger)arg3 ;
-(void)lockPurgeableObjects;
-(void)onParallelRenderCommanderEndEncoding;
-(void)postCompletionHandlers;
-(void)preCommit;
-(void)preCompletionHandlers;
-(void)removeAllReferencedObjects:(BOOL)arg0 ;
-(void)unlockPurgeableObjects;
-(void)validateStoreLoadTransition:(id)arg0 atIndex:(NSUInteger)arg1 renderTargetArrayLength:(NSUInteger)arg2 ;
-(void)waitUntilCompleted;
-(void)waitUntilScheduled;


@end


#endif