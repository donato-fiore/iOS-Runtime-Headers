// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTLTELEMETRYBLITCOMMANDENCODER_H
#define MTLTELEMETRYBLITCOMMANDENCODER_H



#import "MTLToolsBlitCommandEncoder.h"
#import "MTLTelemetryDevice.h"
#import "MTLTelemetryCommandBuffer.h"

@interface MTLTelemetryBlitCommandEncoder : MTLToolsBlitCommandEncoder {
    MTLTelemetryDevice *_telemetryDevice;
    MTLTelemetryCommandBuffer *_telemetryCommandBuffer;
    unsigned int _beBlits;
}




-(id)initWithBlitCommandEncoder:(id)arg0 commandBuffer:(id)arg1 ;
-(void)accumulateBlitDistribution:(NSUInteger)arg0 samples:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 bufferSize:(NSUInteger)arg4 type:(NSUInteger)arg5 option:(NSUInteger)arg6 src:(NSUInteger)arg7 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 sourceBytesPerRow:(NSUInteger)arg2 sourceBytesPerImage:(NSUInteger)arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 options:(NSUInteger)arg9 ;
-(void)copyFromBuffer:(id)arg0 sourceOffset:(NSUInteger)arg1 toBuffer:(id)arg2 destinationOffset:(NSUInteger)arg3 size:(NSUInteger)arg4 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toBuffer:(id)arg5 destinationOffset:(NSUInteger)arg6 destinationBytesPerRow:(NSUInteger)arg7 destinationBytesPerImage:(NSUInteger)arg8 options:(NSUInteger)arg9 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 sourceOrigin:(struct ? )arg3 sourceSize:(struct ? )arg4 toTexture:(id)arg5 destinationSlice:(NSUInteger)arg6 destinationLevel:(NSUInteger)arg7 destinationOrigin:(struct ? )arg8 ;
-(void)copyFromTexture:(id)arg0 sourceSlice:(NSUInteger)arg1 sourceLevel:(NSUInteger)arg2 toTexture:(id)arg3 destinationSlice:(NSUInteger)arg4 destinationLevel:(NSUInteger)arg5 sliceCount:(NSUInteger)arg6 levelCount:(NSUInteger)arg7 ;
-(void)copyFromTexture:(id)arg0 toTexture:(id)arg1 ;
-(void)endEncoding;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 pattern4:(unsigned int)arg2 ;
-(void)fillBuffer:(id)arg0 range:(struct _NSRange )arg1 value:(unsigned char)arg2 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 bytes:(*void)arg4 length:(NSUInteger)arg5 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 ;
-(void)fillTexture:(id)arg0 level:(NSUInteger)arg1 slice:(NSUInteger)arg2 region:(struct ? )arg3 color:(struct ? )arg4 pixelFormat:(NSUInteger)arg5 ;


@end


#endif