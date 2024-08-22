// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGINDIRECTCOMMANDBUFFER_H
#define MTLGPUDEBUGINDIRECTCOMMANDBUFFER_H

@class NSString;
@protocol MTLGPUDebugResource, MTLBuffer, MTLIndirectCommandBufferSPI, MTLDevice, MTLHeap;


#import "MTLToolsIndirectCommandBuffer.h"

@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLGPUDebugResource>

 {
    BOOL _hasRender;
    BOOL _hasCompute;
    BOOL _inheritsBuffers;
    BOOL _inheritsPipelineState;
    id<MTLBuffer> *_argumentStorage;
    id<MTLBuffer> *_drawOrDispatchIDBuffer;
    unsigned short _maxCommands;
    unsigned char _maxVertexBindings;
    unsigned char _maxFragmentBindings;
    unsigned char _maxKernelBindings;
    unsigned char _maxThreadgroupBindings;
    unsigned char _maxObjectBindings;
    unsigned char _maxMeshBindings;
    BOOL _mayContainDrawMeshes;
    unsigned short _commandByteStride;
    NSUInteger _originalResourceOptions;
}


@property (readonly) NSUInteger allocatedSize;
@property (readonly) NSUInteger allocationID;
@property (retain, nonatomic) NSObject<MTLIndirectCommandBufferSPI> *baseObject;
@property (readonly, nonatomic) NSUInteger commandByteStride;
@property (readonly) NSUInteger cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger gpuAddress;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hazardTrackingMode;
@property (readonly) NSObject<MTLHeap> *heap;
@property (readonly) NSUInteger heapOffset;
@property (readonly, nonatomic) BOOL inheritsBuffers;
@property (readonly, nonatomic) BOOL inheritsPipelineState;
@property (readonly, nonatomic) NSObject<MTLBuffer> *internalDrawOrDispatchIDBuffer;
@property (readonly, nonatomic) NSObject<MTLBuffer> *internalICBBuffer;
@property (copy) NSString *label;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSUInteger maxCommands;
@property (readonly, nonatomic) NSUInteger maxFragmentBindings;
@property (readonly, nonatomic) NSUInteger maxKernelBindings;
@property (readonly, nonatomic) NSUInteger maxMeshBindings;
@property (readonly, nonatomic) NSUInteger maxObjectBindings;
@property (readonly, nonatomic) NSUInteger maxVertexBindings;
@property (readonly, nonatomic) BOOL mayContainDrawMeshes;
@property (readonly) NSUInteger protectionOptions;
@property (readonly) NSUInteger resourceOptions;
@property int responsibleProcess;
@property (readonly) NSUInteger storageMode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger underlyingGPUAddress;
@property (readonly) NSUInteger unfilteredResourceOptions;


-(NSUInteger)handleForOffset:(NSUInteger)arg0 ;
-(id)indirectComputeCommandAtIndex:(NSUInteger)arg0 ;
-(id)indirectRenderCommandAtIndex:(NSUInteger)arg0 ;
-(id)initWithIndirectCommandBuffer:(id)arg0 descriptor:(id)arg1 maxCommandCount:(NSUInteger)arg2 resourceOptions:(NSUInteger)arg3 device:(id)arg4 ;
-(void)dealloc;
-(void)onExecuteWithComputeEncoder:(id)arg0 ;
-(void)onExecuteWithRenderEncoder:(id)arg0 ;
-(void)resetAtIndex:(NSUInteger)arg0 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 forStage:(NSUInteger)arg3 commandIndex:(NSUInteger)arg4 ;
-(void)setComputePipelineStateBuffers:(id)arg0 commandIndex:(NSUInteger)arg1 ;
-(void)setRenderPipelineStateBuffers:(id)arg0 commandIndex:(NSUInteger)arg1 ;
-(void)setTessellationControlPointIndexBuffer:(id)arg0 offset:(NSUInteger)arg1 commandIndex:(NSUInteger)arg2 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 commandIndex:(NSUInteger)arg2 ;
-(void)useWithComputeEncoder:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useWithRenderEncoder:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;


@end


#endif