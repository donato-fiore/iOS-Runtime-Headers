// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIXELBUFFERUTILITY_H
#define PIXELBUFFERUTILITY_H


#import <Foundation/Foundation.h>


@interface PixelBufferUtility : NSObject



+(BOOL)concatPixelBuffer:(struct __CVBuffer *)arg0 withPixelBuffer:(struct __CVBuffer *)arg1 targetPixelBuffer:(struct __CVBuffer *)arg2 ;
+(BOOL)copyAlphaChannelOfBuffer:(struct __CVBuffer *)arg0 toMonochromeBuffer:(struct __CVBuffer *)arg1 ;
+(BOOL)copyAlphaChannelOfBuffer:(struct __CVBuffer *)arg0 touint16Data:(*unsigned short)arg1 ;
+(BOOL)copyData:(id)arg0 toNonPlanarPixelBuffer:(struct __CVBuffer *)arg1 ;
+(BOOL)copyData:(id)arg0 toPlanarPixelBuffer:(struct __CVBuffer *)arg1 toPlane:(NSUInteger)arg2 ;
+(BOOL)copyFromPixelBuffer:(struct __CVBuffer *)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 andShiftBits:(int)arg2 ;
+(BOOL)copyMonochromeBuffer:(struct __CVBuffer *)arg0 toAlphaChannelOfBuffer:(struct __CVBuffer *)arg1 ;
+(BOOL)copyPixelBuffer:(struct __CVBuffer *)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 bytesPerPixel:(NSUInteger)arg2 ;
+(BOOL)copyuint16Data:(*unsigned short)arg0 toAlphaChannelOfBuffer:(struct __CVBuffer *)arg1 ;
+(BOOL)fillPlaneOfPixelBuffer:(struct __CVBuffer *)arg0 planeIndex:(int)arg1 withValue:(unsigned short)arg2 ;
+(BOOL)isPixelBufferCompandedRawBayer:(struct __CVBuffer *)arg0 ;
+(BOOL)isPixelBufferRawBayer:(struct __CVBuffer *)arg0 ;
+(BOOL)isPixelFormatCompandedRawBayer:(unsigned int)arg0 ;
+(BOOL)isPixelFormatRawBayer:(unsigned int)arg0 ;
+(BOOL)joinCompandedWarholBuffer:(struct __CVBuffer *)arg0 intoCompandedBayerBuffer:(struct __CVBuffer *)arg1 ;
+(BOOL)joinWarholBuffer:(struct __CVBuffer *)arg0 intoBayerBuffer:(struct __CVBuffer *)arg1 shiftBitsRightBy:(int)arg2 msbReplication:(BOOL)arg3 ;
+(BOOL)joinYUVBuffer:(struct __CVBuffer *)arg0 intoRawBayerPixelBuffer:(struct __CVBuffer *)arg1 shiftBitsLeftBy:(int)arg2 msbReplication:(BOOL)arg3 ;
+(BOOL)splitBayerBuffer:(struct __CVBuffer *)arg0 intoWarholPixelBuffer:(struct __CVBuffer *)arg1 shiftBitsLeftBy:(int)arg2 ;
+(BOOL)splitBayerBuffer:(struct __CVBuffer *)arg0 intoYUVPixelBuffer:(struct __CVBuffer *)arg1 shiftBitsLeftBy:(int)arg2 ;
+(BOOL)splitCompandedBayerBuffer:(struct __CVBuffer *)arg0 intoCompandedWarholPixelBuffer:(struct __CVBuffer *)arg1 ;
+(BOOL)verticallySplitPixelBuffer:(struct __CVBuffer *)arg0 intoTopPixelBuffer:(struct __CVBuffer *)arg1 bottomPixelBuffer:(struct __CVBuffer *)arg2 ;
+(BOOL)writeBuffer:(struct __CVBuffer *)arg0 toFile:(id)arg1 ;
+(NSInteger)extendedPixelsRightForPlanarBufferWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 format:(unsigned int)arg3 ;
+(NSInteger)numberOfPlanesForPixelFormatType:(unsigned int)arg0 ;
+(NSUInteger)extendedPixelsPerRowOfPixelBuffer:(struct __CVBuffer *)arg0 ;
+(NSUInteger)pixelBufferSizeWithPadding:(struct __CVBuffer *)arg0 ;
+(id)copyNonPlanarPixelBufferData:(struct __CVBuffer *)arg0 ;
+(id)copyPixelBufferData:(struct __CVBuffer *)arg0 ofPlane:(NSUInteger)arg1 ;
+(struct __CFDictionary *)createPixelBufferAttributesWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 extendedPixelsPerRow:(unsigned int)arg2 pixelFormat:(int)arg3 bytesPerRowAlignment:(unsigned int)arg4 planeAlignment:(unsigned int)arg5 ;
+(struct __CFDictionary *)createPixelBufferAttributesWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 pixelFormat:(int)arg2 bytesPerRow:(unsigned int)arg3 ;
+(struct __CFDictionary *)createPixelBufferAttributesWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 pixelFormat:(int)arg2 bytesPerRows:(id)arg3 ;
+(struct __CVBuffer *)create4444AYpCbCr16PixelBufferFillAlphaWithData:(struct __CFData *)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
+(struct __CVBuffer *)createRawPixelBufferWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 extendedRows:(unsigned int)arg2 extendedPixelsPerRow:(unsigned int)arg3 pixelFormat:(int)arg4 bytesPerRowAlignment:(unsigned int)arg5 planeAlignment:(unsigned int)arg6 bufferCacheMode:(unsigned int)arg7 ;
+(struct __CVBuffer *)createRawPixelBufferWithWidth:(unsigned int)arg0 height:(unsigned int)arg1 pixelFormat:(int)arg2 bytesPerRow:(unsigned int)arg3 ;
+(struct __CVBuffer *)newPixelBufferRefCopy:(struct __CVBuffer *)arg0 ;
+(struct __CVBuffer *)newRawBayerBufferFromYUVPixelBuffer:(struct __CVBuffer *)arg0 withPixelBufferPool:(struct __CVPixelBufferPool *)arg1 msbReplication:(BOOL)arg2 ;
+(struct __CVBuffer *)newWarholBufferFromCompandedRawBayerPixelBuffer:(struct __CVBuffer *)arg0 withPixelBufferPool:(struct __CVPixelBufferPool *)arg1 ;
+(struct __CVBuffer *)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer *)arg0 ;
+(struct __CVBuffer *)newWarholBufferFromRawBayerPixelBuffer:(struct __CVBuffer *)arg0 withPixelBufferPool:(struct __CVPixelBufferPool *)arg1 ;
+(struct __CVBuffer *)newYUVBufferFromRawBayerPixelBuffer:(struct __CVBuffer *)arg0 withPixelBufferPool:(struct __CVPixelBufferPool *)arg1 ;
+(struct __CVBuffer *)pixelBufferFromPool:(struct __CVPixelBufferPool *)arg0 ;
+(struct __CVBuffer *)readFrameFromFile:(id)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 pixelFormat:(unsigned int)arg3 ;
+(struct __CVPixelBufferPool *)createNewL008PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer *)arg0 minimumBufferCount:(NSUInteger)arg1 ;
+(struct __CVPixelBufferPool *)createNewL010PixelBufferPoolWithReferencePixelBuffer:(struct __CVBuffer *)arg0 minimumBufferCount:(NSUInteger)arg1 ;
+(struct __CVPixelBufferPool *)createPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 bytesPerRow:(NSUInteger)arg3 minBufferCount:(NSUInteger)arg4 ;
+(struct __CVPixelBufferPool *)createPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 bytesPerRows:(id)arg3 minBufferCount:(NSUInteger)arg4 ;
+(struct __CVPixelBufferPool *)createPixelBufferPoolWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 format:(unsigned int)arg2 extendedPixelsPerRow:(NSUInteger)arg3 minBufferCount:(NSUInteger)arg4 ;
+(void)writeBuffer:(char *)arg0 ofSize:(NSUInteger)arg1 toFile:(id)arg2 ;


@end


#endif