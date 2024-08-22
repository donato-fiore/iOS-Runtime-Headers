// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTLCOUNTERSTRACEBLITCOMMANDENCODER_H
#define MTLCOUNTERSTRACEBLITCOMMANDENCODER_H



#import "MTLCountersTraceCommandEncoder.h"

@interface MTLCountersTraceBlitCommandEncoder : MTLCountersTraceCommandEncoder



-(id)init:(struct BinaryBuffer *)arg0 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 toBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 size:(NSUInteger)arg4 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 toTexture:(id)arg3 destinationSlice:(NSUInteger)arg4 destinationLevel:(NSUInteger)arg5 sliceCount:(NSUInteger)arg6 levelCount:(NSUInteger)arg7 ;
-(void)copyFromTexture:(id)arg0 toTexture:(id)arg1 ;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 pattern4:(unsigned int)arg2 ;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 value:(unsigned char)arg2 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 bytes:(*void)arg4 length:(NSUInteger)arg5 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 pixelFormat:(NSUInteger)arg5 ;
-(void)generateMipmapsForTexture:(id)arg0 ;
-(void)getTextureAccessCounters:(id)arg0 region:(struct ? )arg1 mipLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 resetCounters:(BOOL)arg4 countersBuffer:(id)arg5 countersBufferOffset:(NSUInteger)arg6 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 ;
-(void)optimizeContentsForCPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 ;
-(void)optimizeContentsForGPUAccess:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)resetTextureAccessCounters:(id)arg0 region:(struct ? )arg1 mipLevel:(NSUInteger)arg2 slice:(NSUInteger)arg3 ;
-(void)synchronizeResource:(id)arg0 ;
-(void)synchronizeTexture:(id)arg0 slice:(NSUInteger)arg1 level:(NSUInteger)arg2 ;
-(void)updateFence:(id)arg0 ;
-(void)waitForFence:(id)arg0 ;


@end


#endif