// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTKTEXTURELOADERIMAGEIO_H
#define MTKTEXTURELOADERIMAGEIO_H

@class NSData;


#import "MTKTextureLoaderData.h"

@interface MTKTextureLoaderImageIO : MTKTextureLoaderData {
    *CGImageBlockSet _blockSet;
    *__CFData _cfData;
    MTLPixelFormatInfo _pixelFormatInfo;
    NSUInteger _bytesPerRow;
    NSData *_imageData;
    BOOL _expandRGBToRGBA;
}




-(BOOL)decodeCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(BOOL)decodeCGImageDataProvider:(struct CGImage *)arg0 options:(id)arg1 ;
-(BOOL)decodeCGImageImageProvider:(struct CGImage *)arg0 CGImageProvider:(struct CGImageProvider *)arg1 options:(id)arg2 ;
-(BOOL)determineCGImageBlockFormatWithComponentType:(int)arg0 alphaInfo:(unsigned int)arg1 andPixelSizeBytes:(NSUInteger)arg2 andColorSpace:(struct CGColorSpace *)arg3 isOptimized:(BOOL)arg4 options:(id)arg5 ;
-(id)getDataForArrayElement:(NSUInteger)arg0 face:(NSUInteger)arg1 level:(NSUInteger)arg2 depthPlane:(NSUInteger)arg3 bytesPerRow:(*NSUInteger)arg4 bytesPerImage:(*NSUInteger)arg5 ;
-(id)initWithCGImage:(struct CGImage *)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)initWithData:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif