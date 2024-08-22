// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLGPUDEBUGCOMPUTECOMMANDENCODER_H
#define MTLGPUDEBUGCOMPUTECOMMANDENCODER_H

@class NSString;
@protocol MTLGPUDebugCommandEncoder, MTLBuffer;


#import "MTLToolsComputeCommandEncoder.h"
#import "MTLGPUDebugComputePipelineState.h"
#import "MTLGPUDebugCommandBuffer.h"

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder <MTLGPUDebugCommandEncoder>

 {
    unsigned int useResourceIteration;
    BOOL _enableUseResourceValidation;
    unsigned int _commandBufferJumpNestingLevel;
    *Options _options;
    MTLGPUDebugStageBufferHandles _handles;
    MTLGPUDebugThreadgroupLengths _threadgroup;
    GPUDebugEventUUIDPacket _dispatchID;
    MTLGPUDebugComputePipelineState *_currentPipeline;
    MTLGPUDebugBufferSubAlloc _reportBuffer;
    id<MTLBuffer> *_bufferUsageTable;
    id<MTLBuffer> *_textureUsageTable;
}


@property (readonly) MTLGPUDebugCommandBuffer *commandBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encoderID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)encodeEndDoWhile:(id)arg0 offset:(NSUInteger)arg1 comparison:(NSUInteger)arg2 referenceValue:(unsigned int)arg3 ;
-(BOOL)encodeEndIf;
-(BOOL)encodeEndWhile;
-(id)initWithComputeCommandEncoder:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 encoderID:(unsigned int)arg3 ;
-(id)initWithComputeCommandEncoder:(id)arg0 parent:(id)arg1 encoderID:(unsigned int)arg2 ;
-(id)temporaryBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)temporaryBufferWithLength:(NSUInteger)arg0 ;
-(void)_initBufferArgumentData:(id)arg0 ;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerThreadgroup:(struct ? )arg2 ;
-(void)dispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)encodeStartDoWhile;
-(void)encodeStartIf:(id)arg0 offset:(NSUInteger)arg1 comparison:(NSUInteger)arg2 referenceValue:(unsigned int)arg3 ;
-(void)encodeStartWhile:(id)arg0 offset:(NSUInteger)arg1 comparison:(NSUInteger)arg2 referenceValue:(unsigned int)arg3 ;
-(void)endEncoding;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)flushBindings;
-(void)setAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setAccelerationStructures:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setBufferUsageTable:(id)arg0 textureUsageTable:(id)arg1 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setComputePipelineState:(id)arg0 ;
-(void)setComputePipelineStateBuffers:(id)arg0 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setKernelReportBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;


@end


#endif