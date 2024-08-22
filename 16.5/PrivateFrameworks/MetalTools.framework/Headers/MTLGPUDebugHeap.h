// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLGPUDEBUGHEAP_H
#define MTLGPUDEBUGHEAP_H



#import "MTLToolsHeap.h"

@interface MTLGPUDebugHeap : MTLToolsHeap {
    BOOL _enableResourceUsageValidation;
    os_unfair_lock_s _bufferLock;
    vector<unsigned int, std::allocator<unsigned int>> _bufferIndices;
    os_unfair_lock_s _textureLock;
    vector<unsigned int, std::allocator<unsigned int>> _textureIndices;
    os_unfair_lock_s _accelerationStructureLock;
    vector<unsigned int, std::allocator<unsigned int>> _accelerationStructureIndices;
}




-(id)_newGPUDebugAccelerationStructure:(id)arg0 ;
-(id)initWithHeap:(id)arg0 descriptor:(id)arg1 device:(id)arg2 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 ;
-(id)newAccelerationStructureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 offset:(NSUInteger)arg1 resourceIndex:(NSUInteger)arg2 ;
-(id)newAccelerationStructureWithSize:(NSUInteger)arg0 resourceIndex:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)newBufferWithLength:(NSUInteger)arg0 options:(NSUInteger)arg1 offset:(NSUInteger)arg2 ;
-(id)newTextureWithDescriptor:(id)arg0 ;
-(id)newTextureWithDescriptor:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)enumerateBufferIndices:(id)arg0 ;
-(void)enumerateTextureIndices:(id)arg0 ;
-(void)notifyResourceReleasing:(id)arg0 ;


@end


#endif