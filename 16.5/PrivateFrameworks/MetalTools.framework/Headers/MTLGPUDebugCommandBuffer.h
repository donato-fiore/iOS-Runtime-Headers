// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLGPUDEBUGCOMMANDBUFFER_H
#define MTLGPUDEBUGCOMMANDBUFFER_H

@protocol MTLGPUDebugBufferEncoder, MTLArgumentEncoder, MTLBuffer;


#import "MTLToolsCommandBuffer.h"
#import "MTLGPUDebugDevice.h"

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder>

 {
    BOOL _initialized;
    *Options _options;
    id<MTLArgumentEncoder> *_stageArgumentEncoder;
    id<MTLBuffer> *_vertexComputeReportBuffer;
    NSUInteger _vertexComputeReportOffset;
    id<MTLBuffer> *_fragmentReportBuffer;
    NSUInteger _fragmentReportOffset;
    vector<MetalBuffer, std::allocator<MetalBuffer>> _usedBuffers;
    MetalBuffer _currentPooledBuffer;
    NSUInteger _currentPooledBufferOffset;
    unsigned int _currentEncoderID;
    unsigned int _currentReportID;
    vector<id<MTLBuffer>, std::allocator<id<MTLBuffer>>> _reportBufferList;
    vector<ReportBufferEntry, std::allocator<ReportBufferEntry>> _reportEntryList;
    vector<NSString *, std::allocator<NSString *>> _encoderLabels;
    mutex _allocationLock;
    os_unfair_lock_s _tempBufLock;
    BOOL _supportsTileStage;
    BOOL _supportsMeshStage;
    BOOL _hasDeferredBindingObjectAndMeshReportBuffers;
    BufferUsageTable _bufferUsageTables;
    TextureUsageTable _textureUsageTables;
    HeapUsageTable _heapUsageTable;
}


@property (readonly) MTLGPUDebugDevice *device;


-(id)_newReportBuffer;
-(id)accelerationStructureCommandEncoder;
-(id)accelerationStructureCommandEncoderWithDescriptor:(id)arg0 ;
-(id)blitCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)encodeBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 resultOffset:(*NSUInteger)arg3 ;
-(id)encoderIdentifierForEncoderIndex:(unsigned int)arg0 ;
-(id)initWithCommandBuffer:(id)arg0 commandQueue:(id)arg1 descriptor:(id)arg2 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)temporaryBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)temporaryBufferWithLength:(NSUInteger)arg0 ;
-(int)resourceUsageForBuffer:(id)arg0 stage:(NSUInteger)arg1 ;
-(int)resourceUsageForTexture:(id)arg0 stage:(NSUInteger)arg1 ;
-(struct ReportBufferEntry )_allocReportEntryStorageForType:(NSUInteger)arg0 ;
-(struct pair<id<MTLBuffer>, unsigned long> )_temporaryBufferWithLength:(NSUInteger)arg0 ;
-(void)_checkReportBuffers;
-(void)_encodeReportBuffer:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_encodeResourceTableBuffers:(id)arg0 type:(NSUInteger)arg1 ;
-(void)_lateInit;
-(void)beginUseOfMeshShadersInEncoder:(id)arg0 ;
-(void)beginingEncoder:(id)arg0 type:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)endingEncoder:(id)arg0 type:(NSUInteger)arg1 ;
-(void)markAccelerationStructure:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)markBuffer:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)markHeap:(id)arg0 stages:(NSUInteger)arg1 ;
-(void)markTexture:(id)arg0 usage:(NSUInteger)arg1 stages:(NSUInteger)arg2 ;
-(void)preCommit;
-(void)preCompletionHandlers;


@end


#endif