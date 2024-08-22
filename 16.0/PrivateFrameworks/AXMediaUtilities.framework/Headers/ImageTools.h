// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMAGETOOLS_H
#define IMAGETOOLS_H


#import <Foundation/Foundation.h>


@interface ImageTools : NSObject



+(*void)loadRawBufferFromData:(id)arg0 width:(*unsigned int)arg1 height:(*unsigned int)arg2 rowBytes:(*unsigned int)arg3 error:(*id)arg4 ;
+(*void)loadRawBufferFromURL:(id)arg0 width:(*unsigned int)arg1 height:(*unsigned int)arg2 rowBytes:(*unsigned int)arg3 error:(*id)arg4 ;
+(BOOL)writeImage:(struct CGImage *)arg0 toFile:(id)arg1 error:(*id)arg2 ;
+(NSInteger)create420YCbCr8BufferFromPlanar8Buffer:(*void)arg0 withWidth:(int)arg1 andWithHeight:(int)arg2 andWithBytesPerRow:(NSUInteger)arg3 toLumaBuffer:(*void)arg4 withBytesPerRowLuma:(NSUInteger)arg5 andToChromaBuffer:(*void)arg6 withBytesPerRowChroma:(NSUInteger)arg7 ;
+(NSInteger)create420YCbCr8BufferFromRGB8Buffer:(*void)arg0 withWidth:(int)arg1 andWithHeight:(int)arg2 andWithBytesPerRow:(NSUInteger)arg3 andAlphaFirst:(BOOL)arg4 toLumaBuffer:(*void)arg5 withBytesPerRowLuma:(NSUInteger)arg6 andToChromaBuffer:(*void)arg7 withBytesPerRowChroma:(NSUInteger)arg8 ;
+(NSInteger)createRGB8BufferFrom420Y8BiPlanarBuffer:(*void)arg0 withBytesPerRowLuma:(NSUInteger)arg1 andFrom420CbCr8Buffer:(*void)arg2 withBytesPerRowChroma:(NSUInteger)arg3 andWithWidth:(int)arg4 andWithHeight:(int)arg5 andAlphaFirst:(BOOL)arg6 toRGB8Buffer:(*void)arg7 withBytesPerRowDst:(NSUInteger)arg8 ;
+(NSInteger)createRGB8BufferFrom420Y8PlanarBuffer:(*void)arg0 withBytesPerRowY:(NSUInteger)arg1 andFrom420Cb8Buffer:(*void)arg2 withBytesPerRowCb:(NSUInteger)arg3 andFrom420Cr8Buffer:(*void)arg4 withBytesPerRowCr:(NSUInteger)arg5 andWithWidth:(int)arg6 andWithHeight:(int)arg7 andAlphaFirst:(BOOL)arg8 toRGB8Buffer:(*void)arg9 withBytesPerRowDst:(NSUInteger)arg10 ;
+(NSInteger)extractLumaFromBGRA8Buffer:(*void)arg0 withWidth:(int)arg1 andWithHeight:(int)arg2 andWithBytesPerRow:(NSUInteger)arg3 toBuffer:(*void)arg4 withBytesPerRow:(NSUInteger)arg5 ;
+(id)getValueForTag:(id)arg0 inObject:(id)arg1 ;
+(id)getValueForTag:(id)arg0 inObject:(id)arg1 depth:(int)arg2 parent:(id)arg3 ;
+(id)numberOfChannelsInImageData:(id)arg0 error:(*id)arg1 ;
+(id)saveCGImage:(struct CGImage *)arg0 withName:(id)arg1 inFolder:(id)arg2 error:(*id)arg3 ;
+(id)saveCVPixelBuffer420YpCbCr8:(struct __CVBuffer *)arg0 withName:(id)arg1 inFolder:(id)arg2 error:(*id)arg3 ;
+(id)saveCVPixelBufferPlane8:(int)arg0 from:(struct __CVBuffer *)arg1 withName:(id)arg2 inFolder:(id)arg3 error:(*id)arg4 ;
+(id)saveCVPixelBufferRGBA8:(struct __CVBuffer *)arg0 withName:(id)arg1 inFolder:(id)arg2 error:(*id)arg3 ;
+(id)saveRawBuffer:(*void)arg0 withWidth:(unsigned int)arg1 andHeight:(unsigned int)arg2 andRowBytes:(unsigned int)arg3 withName:(id)arg4 inFolder:(id)arg5 error:(*id)arg6 ;
+(id)saveVImageBufferPlanar8:(struct vImage_Buffer *)arg0 withName:(id)arg1 inFolder:(id)arg2 error:(*id)arg3 ;
+(id)saveVImageBufferPlanar8ToData:(struct vImage_Buffer *)arg0 deriveTypeFromFileName:(id)arg1 error:(*id)arg2 ;
+(id)saveVImageBufferPlanar8ToJPEGData:(struct vImage_Buffer *)arg0 withCompressionQuality:(float)arg1 error:(*id)arg2 ;
+(id)saveVImageBufferRGBA8:(struct vImage_Buffer *)arg0 withName:(id)arg1 inFolder:(id)arg2 error:(*id)arg3 ;
+(id)saveVImageBufferRGBA8ToData:(struct vImage_Buffer *)arg0 deriveTypeFromFileName:(id)arg1 error:(*id)arg2 ;
+(id)saveVImageBufferRGBA8ToJPEGData:(struct vImage_Buffer *)arg0 withCompressionQuality:(float)arg1 error:(*id)arg2 ;
+(id)writeImageToData:(struct CGImage *)arg0 type:(struct __CFString *)arg1 error:(*id)arg2 ;
+(struct CGContext *)createARGBBitmapContextWithImage:(struct CGImage *)arg0 ;
+(struct CGImage *)loadCGImageEXIFRotatedFromData:(id)arg0 error:(*id)arg1 ;
+(struct CGImage *)loadCGImageEXIFRotatedFromSource:(struct CGImageSource *)arg0 error:(*id)arg1 ;
+(struct CGImage *)loadCGImageEXIFRotatedFromURL:(id)arg0 error:(*id)arg1 ;
+(struct CGImage *)loadCGImageFromURL:(id)arg0 error:(*id)arg1 ;
+(struct CGImage *)newCGImageFromPlanar8VImageBuffer:(struct vImage_Buffer *)arg0 error:(*id)arg1 ;
+(struct CGImage *)newCGImageFromRGBA8VImageBuffer:(struct vImage_Buffer *)arg0 error:(*id)arg1 ;
+(struct CGImage *)rotateImage:(struct CGImage *)arg0 accordingToEXIFOrientation:(int)arg1 ;
+(struct CGImage *)rotateImage:(struct CGImage *)arg0 withAngle:(float)arg1 andXFlip:(BOOL)arg2 andYFlip:(BOOL)arg3 ;
+(struct __CFString *)guessType:(id)arg0 ;
+(struct __CVBuffer *)loadCVPixelBuffer420YpCbCr8FromURL:(id)arg0 error:(*id)arg1 ;
+(struct __CVBuffer *)loadCVPixelBufferARGB8FromURL:(id)arg0 error:(*id)arg1 ;
+(struct vImage_Buffer )getVImageBufferFromCGImage:(struct CGImage *)arg0 error:(*id)arg1 ;
+(struct vImage_Buffer )getVImageBufferFromCGImageLuma:(struct CGImage *)arg0 error:(*id)arg1 ;
+(struct vImage_Buffer )getVImageBufferFromCVPixelBuffer:(struct __CVBuffer *)arg0 channel:(int)arg1 error:(*id)arg2 ;
+(struct vImage_Buffer *)loadVImageBufferEXIFRotatedFromData:(id)arg0 error:(*id)arg1 ;
+(struct vImage_Buffer *)loadVImageBufferEXIFRotatedFromURL:(id)arg0 error:(*id)arg1 ;
+(struct vImage_Buffer *)loadVImageBufferFromData:(id)arg0 isRaw:(BOOL)arg1 lumaOnly:(BOOL)arg2 error:(*id)arg3 ;
+(struct vImage_Buffer *)loadVImageBufferFromURL:(id)arg0 lumaOnly:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif