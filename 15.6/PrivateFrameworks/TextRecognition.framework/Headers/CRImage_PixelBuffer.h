// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRIMAGE_PIXELBUFFER_H
#define CRIMAGE_PIXELBUFFER_H



#import "CRImage.h"

@interface CRImage_PixelBuffer : CRImage



+(struct __CVBuffer *)_convertPixelBuffer:(struct __CVBuffer *)arg0 toFormat:(unsigned int)arg1 ;
+(void)drawVerticalLineAtXOffset:(CGFloat)arg0 image:(id)arg1 ;
-(NSUInteger)height;
-(NSUInteger)width;
-(id)imageByApplyingBinaryMask:(id)arg0 ;
-(id)imageByConvertingToColorSpace:(int)arg0 ;
-(id)imageByCorrectingFromOrientation:(unsigned int)arg0 ;
-(id)imageByCroppingRectangle:(struct CGRect )arg0 ;
-(id)imageByDilating;
-(id)imageByInvertingIntensity;
-(id)imageByOverlayingImage:(id)arg0 opacity:(float)arg1 ;
-(id)imageByOverlayingRects:(struct CGRect *)arg0 count:(NSInteger)arg1 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 alignCenter:(BOOL)arg2 ;
-(id)imageByPaddingX:(NSUInteger)arg0 paddingY:(NSUInteger)arg1 ;
-(id)imageByRotating180;
-(id)imageByRotating90CW;
-(id)imageByScalingToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 toColorSpace:(int)arg1 ;
-(struct CGImage *)cgImage;
-(struct __CVBuffer *)_pixelBufferFromUrl:(id)arg0 ;
-(struct __CVBuffer *)pixelBuffer;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 ;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 adjustedToSize:(struct CGSize *)arg2 ;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 adjustedToSize:(struct CGSize *)arg2 mask:(struct CGImage *)arg3 ;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 adjustedToSize:(struct CGSize *)arg2 mask:(struct CGImage *)arg3 format:(unsigned int)arg4 ;
-(struct vImage_Buffer )createFloatBuffer;
-(struct vImage_Buffer )vImage;
-(void)dealloc;
-(void)writeToFile:(id)arg0 ;


@end


#endif