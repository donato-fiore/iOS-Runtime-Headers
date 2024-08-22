// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLDEBUGCOMPUTECOMMANDENCODER_H
#define MTLDEBUGCOMPUTECOMMANDENCODER_H

@protocol MTLComputePipelineState;


#import "MTLToolsComputeCommandEncoder.h"
#import "MTLDebugCommandBuffer.h"

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder {
    ? _buffers;
    ? _textures;
    ? _samplers;
    ? _threadgroupMemoryLengths;
    ? _imageBlockSize;
    MTLDebugCommandBuffer *_commandBuffer;
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL canSetComputePipelineState;
    BOOL hasEndEncoding;
    BOOL hasSetComputePipelineState;
    BOOL hasSetStageInRegion;
    ? stageInRegion;
    BOOL hasIndirectSetStageInRegion;
    BOOL allowsNullBufferBinds;
    deque<id, std::allocator<id>> updatedFences;
    unsigned int _activeSubstream;
    unsigned int _numSubstreams;
    set<unsigned int, std::less<unsigned int>, std::allocator<unsigned int>> _progressLabels;
}


@property (readonly, nonatomic) NSObject<MTLComputePipelineState> *computePipelineState; // ivar: _computePipelineState


-(id)description;
-(id)endEncodingAndRetrieveProgramAddressTable;
-(id)formattedDescription:(NSUInteger)arg0 ;
-(id)initWithComputeCommandEncoder:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)_setDefaults;
-(void)_validateAllFunctionArguments;
-(void)_validateThreadsPerThreadgroup:(struct ? )arg0 ;
-(void)dealloc;
-(void)dispatchThreadgroups:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadgroupsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 threadsPerThreadgroup:(struct ? )arg2 ;
-(void)dispatchThreads:(struct ? )arg0 threadsPerThreadgroup:(struct ? )arg1 ;
-(void)dispatchThreadsWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)enableNullBufferBinds:(BOOL)arg0 ;
-(void)endEncoding;
-(void)endEncoding_private;
-(void)enumerateBuffersUsingBlock:(id)arg0 ;
-(void)enumerateSamplersUsingBlock:(id)arg0 ;
-(void)enumerateTexturesUsingBlock:(id)arg0 ;
-(void)enumerateThreadgroupMemoryLengthsUsingBlock:(id)arg0 ;
-(void)executeCommandsInBuffer:(id)arg0 indirectBuffer:(id)arg1 indirectBufferOffset:(NSUInteger)arg2 ;
-(void)executeCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned int)arg0 lastBatch:(unsigned int)arg1 filterIndex:(unsigned int)arg2 ;
-(void)memoryBarrierWithResources:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)memoryBarrierWithScope:(NSUInteger)arg0 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)setAccelerationStructure:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setBuffer:(id)arg0 offset:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setBufferOffset:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 ;
-(void)setBytes:(*void)arg0 length:(NSUInteger)arg1 atIndex:(NSUInteger)arg2 ;
-(void)setImageblockWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setIntersectionFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)setSamplerState:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setSamplerState:(id)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(NSUInteger)arg3 ;
-(void)setSamplerStates:(*id)arg0 lodMinClamps:(*float)arg1 lodMaxClamps:(*float)arg2 withRange:(struct _NSRange )arg3 ;
-(void)setSamplerStates:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setStageInRegion:(struct ? )arg0 ;
-(void)setStageInRegionWithIndirectBuffer:(id)arg0 indirectBufferOffset:(NSUInteger)arg1 ;
-(void)setSubstream:(unsigned int)arg0 ;
-(void)setTexture:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setTextures:(*id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)setThreadgroupMemoryLength:(NSUInteger)arg0 atIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTable:(id)arg0 atBufferIndex:(NSUInteger)arg1 ;
-(void)setVisibleFunctionTables:(*id)arg0 withBufferRange:(struct _NSRange )arg1 ;
-(void)signalProgress:(unsigned int)arg0 ;
-(void)updateFence:(id)arg0 ;
-(void)useHeap:(id)arg0 ;
-(void)useHeaps:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)useResource:(id)arg0 usage:(NSUInteger)arg1 ;
-(void)useResources:(*id)arg0 count:(NSUInteger)arg1 usage:(NSUInteger)arg2 ;
-(void)validateFunctionTableUseResource:(id)arg0 selectorName:(id)arg1 ;
-(void)validateStageInRegion:(struct ? )arg0 ;
-(void)waitForFence:(id)arg0 ;
-(void)waitForProgress:(unsigned int)arg0 ;


@end


#endif