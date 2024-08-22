// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLGPUDEBUGCOMMANDBUFFER_H
#define MTLGPUDEBUGCOMMANDBUFFER_H

@protocol MTLGPUDebugBufferEncoder, MTLArgumentEncoder, MTLBuffer;


#import "MTLToolsCommandBuffer.h"
#import "MTLGPUDebugDevice.h"

@interface MTLGPUDebugCommandBuffer : MTLToolsCommandBuffer <MTLGPUDebugBufferEncoder>

 {
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
}


@property (readonly) MTLGPUDebugDevice *device;


-(id)_encoderIdentifierForEncoderIndex:(unsigned int)arg0 ;
-(id)_newReportBuffer;
-(id)accelerationStructureCommandEncoder;
-(id)blitCommandEncoder;
-(id)blitCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoder;
-(id)computeCommandEncoderWithDescriptor:(id)arg0 ;
-(id)computeCommandEncoderWithDispatchType:(NSUInteger)arg0 ;
-(id)encodeBuffers:(*id)arg0 offsets:(*NSUInteger)arg1 withRange:(struct _NSRange )arg2 resultOffset:(*NSUInteger)arg3 ;
-(id)initWithCommandBuffer:(id)arg0 commandQueue:(id)arg1 ;
-(id)parallelRenderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)renderCommandEncoderWithDescriptor:(id)arg0 ;
-(id)sampledComputeCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(*unk)arg0 capacity:(struct ? )arg1 ;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg0 programInfoBuffer:(*unk)arg1 capacity:(struct ? )arg2 ;
-(id)temporaryBufferWithBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(id)temporaryBufferWithLength:(NSUInteger)arg0 ;
-(struct ReportBufferEntry )_allocReportEntryStorageForType:(NSUInteger)arg0 ;
-(struct pair<id<MTLBuffer>, unsigned long> )_temporaryBufferWithLength:(NSUInteger)arg0 ;
-(void)_checkReportBuffers;
-(void)_encodeReportBuffer:(id)arg0 type:(NSUInteger)arg1 ;
-(void)beginingEncoder:(id)arg0 type:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)endingEncoder:(id)arg0 type:(NSUInteger)arg1 ;
-(void)preCompletionHandlers;


@end


#endif