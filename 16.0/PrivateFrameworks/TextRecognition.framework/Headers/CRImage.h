// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRIMAGE_H
#define CRIMAGE_H

@class CIImage;

#import <Foundation/Foundation.h>


@interface CRImage : NSObject

@property (nonatomic) *CGImage cgImage; // ivar: _cgImage
@property (retain, nonatomic) CIImage *ciImage; // ivar: _ciImage
@property (readonly) int colorSpace; // ivar: _colorSpace
@property (readonly) NSUInteger height;
@property (readonly) BOOL isFullRange; // ivar: _isFullRange
@property (nonatomic) *__CVBuffer pixelBuffer; // ivar: _pixelBuffer
@property (readonly) vImage_Buffer vImage; // ivar: _vImage
@property (nonatomic) BOOL vImageDataIsCopy; // ivar: _vImageDataIsCopy
@property (readonly) NSUInteger width;


+(BOOL)convertVImage:(struct vImage_Buffer *)arg0 inColorSpace:(int)arg1 toVImage:(struct vImage_Buffer *)arg2 toColorSpace:(int)arg3 ;
+(NSUInteger)bytesPerPixelForColorSpace:(int)arg0 ;
+(NSUInteger)channelsForColorSpace:(int)arg0 ;
+(id)nameForColorSpace:(int)arg0 ;
+(struct vImage_Buffer )allocateVImageBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 bytesPerPixel:(int)arg2 ;
+(struct vImage_Buffer )allocateVImageBufferWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 colorSpace:(int)arg2 ;
+(struct vImage_Buffer )applyEXIFTransformsOnImage:(struct vImage_Buffer *)arg0 inColorSpace:(int)arg1 properties:(id)arg2 ;
+(void)cgOrientation:(unsigned int)arg0 toVImageRotationMode:(char *)arg1 andReflection:(*int)arg2 ;
+(void)drawVerticalLineAtXOffset:(CGFloat)arg0 image:(id)arg1 ;
-(NSUInteger)bytesPerPixel;
-(NSUInteger)numChannels;
-(id)imageByAdjustingBrightnessAlpha:(CGFloat)arg0 beta:(CGFloat)arg1 ;
-(id)imageByApplyingBinaryMask:(id)arg0 ;
-(id)imageByApplyingHistogramCorrection;
-(id)imageByConvertingToColorSpace:(int)arg0 ;
-(id)imageByCorrectingFromOrientation:(unsigned int)arg0 ;
-(id)imageByCroppingRectangle:(struct CGRect )arg0 ;
-(id)imageByCroppingRectangle:(struct CGRect )arg0 textFeaturePoints:(id)arg1 radians:(float)arg2 rotatedRoi:(struct CGRect *)arg3 ;
-(id)imageByCroppingRectangle:(struct CGRect )arg0 toHeight:(NSUInteger)arg1 andWidth:(NSUInteger)arg2 withRotationAngle:(float)arg3 ;
-(id)imageByCroppingTextFeature:(id)arg0 correctedBoundingBox:(id)arg1 padding:(struct CGPoint )arg2 networkInputSize:(struct CGSize )arg3 ;
-(id)imageByDilating;
-(id)imageByInvertingIntensity;
-(id)imageByOverlayingImage:(id)arg0 opacity:(float)arg1 ;
-(id)imageByOverlayingRects:(struct CGRect *)arg0 count:(NSInteger)arg1 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(id)imageByPaddingToRatioAndScalingToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 alignCenter:(BOOL)arg2 ;
-(id)imageByPaddingX:(NSUInteger)arg0 paddingY:(NSUInteger)arg1 ;
-(id)imageByRectifyingPolygon:(id)arg0 minImageHeight:(NSUInteger)arg1 ;
-(id)imageByRotating180;
-(id)imageByRotating90CW;
-(id)imageByScalingToWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(id)initARGB8888WithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initAYUV8888WithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 properties:(id)arg1 ;
-(id)initWithCGImage:(struct CGImage *)arg0 properties:(id)arg1 toColorSpace:(int)arg2 ;
-(id)initWithCGImage:(struct CGImage *)arg0 toColorSpace:(int)arg1 ;
-(id)initWithCIImage:(id)arg0 ;
-(id)initWithCIImage:(id)arg0 toColorSpace:(int)arg1 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 toColorSpace:(int)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 toColorSpace:(int)arg1 ;
-(id)initWithMat:(struct Mat *)arg0 ;
-(id)initWithVImageBuffer:(struct vImage_Buffer )arg0 ;
-(id)initWithVImageBuffer:(struct vImage_Buffer )arg0 inColorSpace:(int)arg1 ;
-(id)initWithVImageBuffer:(struct vImage_Buffer )arg0 inColorSpace:(int)arg1 toColorSpace:(int)arg2 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(id)initWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 colorSpace:(int)arg2 ;
-(id)initY8WithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initYUV888WithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(struct CGRect )rotatedRoiByCroppingRectangle:(struct CGRect )arg0 textFeaturePoints:(id)arg1 radians:(float)arg2 ;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 ;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 adjustedToSize:(struct CGSize *)arg2 ;
-(struct __CVBuffer *)pixelBufferWithScale:(CGFloat)arg0 paddedToSize:(struct CGSize )arg1 adjustedToSize:(struct CGSize *)arg2 mask:(struct CGImage *)arg3 ;
-(struct vImage_Buffer )createFloatBuffer;
-(void)dealloc;
// -(void)runBlockWithARGB8888Image:(id)arg0 blockOwnsMemory:(unk)arg1  ;
-(void)writeToFile:(id)arg0 ;


@end


#endif