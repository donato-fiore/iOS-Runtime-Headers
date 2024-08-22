// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLCOUNTERSBLITCOMMANDENCODER_H
#define MTLCOUNTERSBLITCOMMANDENCODER_H



#import "MTLToolsBlitCommandEncoder.h"
#import "MTLCountersTraceBlitCommandEncoder.h"

@interface MTLCountersBlitCommandEncoder : MTLToolsBlitCommandEncoder {
    MTLCountersTraceBlitCommandEncoder *_traceEncoder;
}




-(id)initWithBlitCommandEncoder:(id)arg0 commandBuffer:(id)arg1 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 toBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 size:(NSUInteger)arg4 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 toTexture:(id)arg3 destinationSlice:(NSUInteger)arg4 destinationLevel:(NSUInteger)arg5 sliceCount:(NSUInteger)arg6 levelCount:(NSUInteger)arg7 ;
-(void)copyFromTexture:(id)arg0 toTexture:(id)arg1 ;
-(void)dealloc;
-(void)endEncoding;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 pattern4:(unsigned int)arg2 ;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 value:(unsigned char)arg2 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 bytes:(*void)arg4 length:(NSUInteger)arg5 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 pixelFormat:(NSUInteger)arg5 ;
-(void)generateMipmapsForTexture:(id)arg0 ;
-(void)insertDebugSignpost:(id)arg0 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)popDebugGroup;
-(void)pushDebugGroup:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)updateFence:(id)arg0 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif