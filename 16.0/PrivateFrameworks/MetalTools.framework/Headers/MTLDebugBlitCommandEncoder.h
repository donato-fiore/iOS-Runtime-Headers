// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTLDEBUGBLITCOMMANDENCODER_H
#define MTLDEBUGBLITCOMMANDENCODER_H



#import "MTLToolsBlitCommandEncoder.h"
#import "MTLDebugCommandBuffer.h"

@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder {
    BOOL canDealloc;
    BOOL canEndEncoding;
    BOOL hasEndEncoding;
    deque<id, std::allocator<id>> updatedFences;
    MTLDebugCommandBuffer *_commandBuffer;
}




-(id)initWithBlitCommandEncoder:(id)arg0 commandBuffer:(id)arg1 descriptor:(id)arg2 ;
-(void)_setDefaults;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 toBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 size:(NSUInteger)arg4 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 toTexture:(id)arg3 destinationSlice:(NSUInteger)arg4 destinationLevel:(NSUInteger)arg5 sliceCount:(NSUInteger)arg6 levelCount:(NSUInteger)arg7 ;
-(void)copyFromTexture:(id)arg0 toTexture:(id)arg1 ;
-(void)copyIndirectCommandBuffer:(id)arg0 sourceRange:(struct _NSRange )arg1 destination:(id)arg2 destinationIndex:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)endEncoding;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 pattern4:(unsigned int)arg2 ;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 value:(unsigned char)arg2 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 bytes:(*void)arg4 length:(NSUInteger)arg5 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 pixelFormat:(NSUInteger)arg5 ;
-(void)filterCounterRangeWithFirstBatch:(unsigned int)arg0 lastBatch:(unsigned int)arg1 filterIndex:(unsigned int)arg2 ;
-(void)generateMipmapsForTexture:(id)arg0 ;
-(void)getTextureAccessCounters:(id)arg0 region:(struct ? )arg1 mipLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 resetCounters:(BOOL)arg4 countersBuffer:(id)arg5 countersBufferOffset:(NSUInteger)arg6 ;
-(void)internalValidateCopyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)invalidateCompressedTexture:(id)arg0 ;
-(void)invalidateCompressedTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeIndirectCommandBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)resetCommandsInBuffer:(id)arg0 withRange:(struct _NSRange )arg1 ;
-(void)resetTextureAccessCounters:(id)arg0 region:(struct ? )arg1 mipLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(void)resolveCounters:(id)arg0 inRange:(struct _NSRange )arg1 destinationBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 ;
-(void)sampleCountersInBuffer:(id)arg0 atSampleIndex:(NSUInteger)arg1 withBarrier:(BOOL)arg2 ;
-(void)updateFence:(id)arg0 ;
-(void)validateCopyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)validateCopyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 options:(NSUInteger)arg9 ;
-(void)validateCopyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 move:(BOOL)arg10 ;
-(void)validateCopyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceSize:(struct ? )arg3 toTexture:(id)arg4 destinationSlice:(NSUInteger)arg5 destinationLevel:(NSUInteger)arg6 options:(NSUInteger)arg7 sliceCount:(NSUInteger)arg8 levelCount:(NSUInteger)arg9 ;
-(void)validateTextureAccess:(id)arg0 region:(struct ? )arg1 mipLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif