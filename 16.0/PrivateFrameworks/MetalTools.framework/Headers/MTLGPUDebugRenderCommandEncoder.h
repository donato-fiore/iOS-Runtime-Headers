// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLGPUDEBUGRENDERCOMMANDENCODER_H
#define MTLGPUDEBUGRENDERCOMMANDENCODER_H

@class NSString;
@protocol MTLGPUDebugCommandEncoder, MTLBuffer;


#import "MTLToolsRenderCommandEncoder.h"
#import "MTLGPUDebugCommandBuffer.h"
#import "MTLGPUDebugRenderPipelineState.h"
#import "MTLToolsDepthStencilState.h"

@interface MTLGPUDebugRenderCommandEncoder : MTLToolsRenderCommandEncoder <MTLGPUDebugCommandEncoder>

 {
    unsigned int useResourceIteration;
    BOOL _tileStageActive;
    BOOL _tileStageUsed;
    BOOL _fragmentStageActive;
    BOOL _vertexStageActive;
    BOOL _objectStageActive;
    BOOL _meshStageActive;
    BOOL _enableUseResourceValidation;
    MTLGPUDebugCommandBuffer *_commandBuffer;
    MTLGPUDebugStageBufferHandles _vertexHandles;
    MTLGPUDebugStageBufferHandles _fragmentHandles;
    MTLGPUDebugStageBufferHandles _tileHandles;
    MTLGPUDebugTileThreadgroup _threadgroup;
    MTLGPUDebugStageBufferHandles _objectHandles;
    MTLGPUDebugStageBufferHandles _meshHandles;
    *Options _options;
    GPUDebugEventUUIDPacket _drawID;
    NSUInteger _encoderType;
    MTLGPUDebugRenderPipelineState *_currentPipeline;
    MTLToolsDepthStencilState *_currentDepthStencil;
    MTLGPUDebugBufferSubAlloc _vertexReportBuffer;
    MTLGPUDebugBufferSubAlloc _fragmentReportBuffer;
    MTLGPUDebugBufferSubAlloc _tileReportBuffer;
    MTLGPUDebugBufferSubAlloc _objectReportBuffer;
    MTLGPUDebugBufferSubAlloc _meshReportBuffer;
    ? _vertexAmpState;
    id<MTLBuffer> *_vertexBufferUsageTable;
    id<MTLBuffer> *_vertexTextureUsageTable;
    id<MTLBuffer> *_fragmentBufferUsageTable;
    id<MTLBuffer> *_fragmentTextureUsageTable;
}


@property (readonly) MTLGPUDebugCommandBuffer *commandBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int encoderID;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithRenderCommandEncoder:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 encoderID:(unsigned int)arg3 ;
-(id)initWithRenderCommandEncoder:(id)arg0 parallelEncoder:(id)arg1 encoderID:(unsigned int)arg2 ;
-(id)temporaryBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)temporaryBufferWithLength:(NSUInteger)arg0 ;
-(void)_initBufferArgumentData:(id)arg0 ;
-(void)_useResourceCommon:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;
-(void)dispatchThreadsPerTile:(struct ? )arg0 ;
-(void)dispatchThreadsPerTile:(struct ? )arg0 inRegion:(struct ? )arg1 ;
-(void)dispatchThreadsPerTile:(struct ? )arg0 inRegion:(struct ? )arg1 withRenderTargetArrayIndex:(unsigned int)arg2 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchIndexBuffer:(id)arg1 patchIndexBufferOffset:(NSUInteger)arg2 controlPointIndexBuffer:(id)arg3 controlPointIndexBufferOffset:(NSUInteger)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(NSUInteger)arg6 ;
-(void)drawIndexedPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 controlPointIndexBuffer:(id)arg5 controlPointIndexBufferOffset:(NSUInteger)arg6 instanceCount:(NSUInteger)arg7 baseInstance:(NSUInteger)arg8 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexCount:(NSUInteger)arg1 indexType:(NSUInteger)arg2 indexBuffer:(id)arg3 indexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseVertex:(NSInteger)arg6 baseInstance:(NSUInteger)arg7 ;
-(void)drawIndexedPrimitives:(NSUInteger)arg0 indexType:(NSUInteger)arg1 indexBuffer:(id)arg2 indexBufferOffset:(NSUInteger)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(NSUInteger)arg5 ;
-(void)drawMeshThreadgroups:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawMeshThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerObjectThreadgroup:(struct ? )arg2 threadsPerMeshThreadgroup:(struct ? )arg3 ;
-(void)drawMeshThreads:(struct ? )arg0 threadsPerObjectThreadgroup:(struct ? )arg1 threadsPerMeshThreadgroup:(struct ? )arg2 ;
-(void)drawPatches:(NSUInteger)arg0 patchIndexBuffer:(id)arg1 patchIndexBufferOffset:(NSUInteger)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(NSUInteger)arg4 ;
-(void)drawPatches:(NSUInteger)arg0 patchStart:(NSUInteger)arg1 patchCount:(NSUInteger)arg2 patchIndexBuffer:(id)arg3 patchIndexBufferOffset:(NSUInteger)arg4 instanceCount:(NSUInteger)arg5 baseInstance:(NSUInteger)arg6 ;
-(void)drawPrimitives:(NSUInteger)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 ;
-(void)drawPrimitives:(NSUInteger)arg0 vertexStart:(NSUInteger)arg1 vertexCount:(NSUInteger)arg2 instanceCount:(NSUInteger)arg3 baseInstance:(NSUInteger)arg4 ;
-(void)endEncoding;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)flushBindings;
-(void)setBufferUsageTable:(id)arg0 textureUsageTable:(id)arg1 forStage:(NSUInteger)arg2 ;
-(void)setDepthStencilState:(id)arg0 ;
-(void)setFragmentAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentAccelerationStructures:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setFragmentBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setFragmentBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setFragmentIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setFragmentReportBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setFragmentTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setFragmentTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setFragmentVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setFragmentVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setMeshAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshAccelerationStructures:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setMeshBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setMeshBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setMeshIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setMeshReportBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setMeshTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setMeshTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setMeshVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setMeshVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectAccelerationStructures:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setObjectBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setObjectIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setObjectReportBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setObjectTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setObjectTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setObjectVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setObjectVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setRenderPipelineState:(id)arg0 ;
-(void)setRenderPipelineStateBuffers:(id)arg0 ;
-(void)setTessellationControlPointIndexBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileAccelerationStructures:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setTileBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setTileBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setTileIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setTileReportBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setTileTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTileTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setTileVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setTileVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVertexAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexAccelerationStructures:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVertexAmplificationCount:(NSUInteger)arg0 viewMappings:(struct ? *)arg1 ;
-(void)setVertexBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setVertexBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setVertexIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setVertexReportBuffer:(id)arg0 offset:(NSUInteger)arg1 ;
-(void)setVertexTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVertexTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setVertexVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVertexVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeap:(id)arg0 stages:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)useResourceInternal:(id)arg0 usage:(NSUInteger)arg1 stages:(struct optional<unsigned long> )arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 stages:(NSUInteger)arg3 ;


@end


#endif