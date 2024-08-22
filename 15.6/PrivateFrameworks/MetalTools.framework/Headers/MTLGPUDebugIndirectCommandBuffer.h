// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUDEBUGINDIRECTCOMMANDBUFFER_H
#define MTLGPUDEBUGINDIRECTCOMMANDBUFFER_H

@protocol MTLBuffer;


#import "MTLToolsIndirectCommandBuffer.h"

@interface MTLGPUDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer {
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
    unsigned short _commandByteStride;
    NSUInteger _originalResourceOptions;
}


@property (readonly, nonatomic) NSUInteger commandByteStride;
@property (readonly, nonatomic) BOOL inheritsBuffers;
@property (readonly, nonatomic) BOOL inheritsPipelineState;
@property (readonly, nonatomic) NSObject<MTLBuffer> *internalDrawOrDispatchIDBuffer;
@property (readonly, nonatomic) NSObject<MTLBuffer> *internalICBBuffer;
@property (readonly, nonatomic) NSUInteger maxCommands;
@property (readonly, nonatomic) NSUInteger maxFragmentBindings;
@property (readonly, nonatomic) NSUInteger maxKernelBindings;
@property (readonly, nonatomic) NSUInteger maxVertexBindings;


-(NSUInteger)cpuCacheMode;
-(NSUInteger)hazardTrackingMode;
-(NSUInteger)resourceOptions;
-(NSUInteger)storageMode;
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


@end


#endif