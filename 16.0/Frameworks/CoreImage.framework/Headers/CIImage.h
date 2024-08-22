// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIIMAGE_H
#define CIIMAGE_H

@class AVDepthData, AVPortraitEffectsMatte, NSDictionary, AVSemanticSegmentationMatte, NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "CIFilterShape.h"

@interface CIImage : NSObject <NSSecureCoding, NSCopying>

 {
    *void _priv;
}


@property (readonly, nonatomic) *CGImage CGImage;
@property (readonly) *CGColorSpace colorSpace;
@property (readonly) CIFilterShape *definition;
@property (readonly, nonatomic) AVDepthData *depthData;
@property (readonly, nonatomic) CGRect extent;
@property (readonly, nonatomic) *__CVBuffer pixelBuffer;
@property (readonly, nonatomic) AVPortraitEffectsMatte *portraitEffectsMatte;
@property (readonly) NSDictionary *properties;
@property (readonly, nonatomic) AVSemanticSegmentationMatte *semanticSegmentationMatte;
@property (readonly) NSURL *url;


+(BOOL)supportsSecureCoding;
+(id)blackImage;
+(id)blueImage;
+(id)clearImage;
+(id)clearImage:(struct CGRect )arg0 ;
+(id)cyanImage;
+(id)emptyImage;
+(id)grayImage;
+(id)greenImage;
+(id)imageForRenderingWithMPS:(id)arg0 orNonMPS:(id)arg1 ;
+(id)imageForRenderingWithMetal:(id)arg0 orNonMetal:(id)arg1 ;
+(id)imageForRenderingWithMetalContext:(id)arg0 orOpenGLContextUsingMetal:(id)arg1 orNonMetalContext:(id)arg2 ;
+(id)imageWithArrayOfImages:(id)arg0 selector:(id)arg1 ;
+(id)imageWithAttributedString:(id)arg0 format:(int)arg1 ;
+(id)imageWithAttributedString:(id)arg0 format:(int)arg1 options:(id)arg2 ;
+(id)imageWithBitmapData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
+(id)imageWithBitmapData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 options:(id)arg4 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 ;
+(id)imageWithCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
+(id)imageWithCGImageSource:(struct CGImageSource *)arg0 index:(NSUInteger)arg1 options:(id)arg2 ;
+(id)imageWithCGLayer:(struct CGLayer *)arg0 ;
+(id)imageWithCGLayer:(struct CGLayer *)arg0 options:(id)arg1 ;
+(id)imageWithCVImageBuffer:(struct __CVBuffer *)arg0 ;
+(id)imageWithCVImageBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
+(id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
+(id)imageWithColor:(id)arg0 ;
+(id)imageWithContentsOfFile:(id)arg0 ;
+(id)imageWithContentsOfFile:(id)arg0 options:(id)arg1 ;
+(id)imageWithContentsOfURL:(id)arg0 ;
+(id)imageWithContentsOfURL:(id)arg0 options:(id)arg1 ;
+(id)imageWithData:(id)arg0 ;
+(id)imageWithData:(id)arg0 options:(id)arg1 ;
+(id)imageWithDepthData:(id)arg0 ;
+(id)imageWithDepthData:(id)arg0 options:(id)arg1 ;
+(id)imageWithIOSurface:(struct __IOSurface *)arg0 ;
+(id)imageWithIOSurface:(struct __IOSurface *)arg0 options:(id)arg1 ;
+(id)imageWithImageProvider:(id)arg0 size:(NSUInteger)arg1 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 ;
+(id)imageWithImageProvider:(id)arg0 userInfo:(id)arg1 size:(struct CGSize )arg2 format:(int)arg3 flipped:(BOOL)arg4 colorSpace:(struct CGColorSpace *)arg5 ;
+(id)imageWithInternalRepresentation:(*void)arg0 ;
+(id)imageWithMTLTexture:(id)arg0 options:(id)arg1 ;
+(id)imageWithPortaitEffectsMatte:(id)arg0 ;
+(id)imageWithPortaitEffectsMatte:(id)arg0 options:(id)arg1 ;
+(id)imageWithPortraitEffectsMatte:(id)arg0 ;
+(id)imageWithPortraitEffectsMatte:(id)arg0 options:(id)arg1 ;
+(id)imageWithSemanticSegmentationMatte:(id)arg0 ;
+(id)imageWithSemanticSegmentationMatte:(id)arg0 options:(id)arg1 ;
+(id)imageWithTexture:(unsigned int)arg0 size:(struct CGSize )arg1 flipped:(BOOL)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
+(id)imageWithTexture:(unsigned int)arg0 size:(struct CGSize )arg1 flipped:(BOOL)arg2 options:(id)arg3 ;
+(id)imageWithTexture:(unsigned int)arg0 size:(struct CGSize )arg1 options:(id)arg2 ;
+(id)imageWithYCCImage:(id)arg0 matrix:(int)arg1 fullRange:(BOOL)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
+(id)imageWithYCCImage:(id)arg0 matrix:(int)arg1 fullRange:(BOOL)arg2 precision:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
+(id)imageWithYImage:(id)arg0 CrCbImage:(id)arg1 CrCbScale:(int)arg2 matrix:(int)arg3 fullRange:(BOOL)arg4 colorSpace:(struct CGColorSpace *)arg5 ;
+(id)imageWithYImage:(id)arg0 CrCbImage:(id)arg1 CrCbScale:(int)arg2 matrix:(int)arg3 fullRange:(BOOL)arg4 precision:(int)arg5 colorSpace:(struct CGColorSpace *)arg6 ;
+(id)imageYCC444:(id)arg0 matrix:(int)arg1 fullRange:(BOOL)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
+(id)imageYCC444:(id)arg0 matrix:(int)arg1 fullRange:(BOOL)arg2 precision:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
+(id)magentaImage;
+(id)noiseImage;
+(id)noiseImageNearest;
+(id)noiseImagePadded;
+(id)nullImage;
+(id)redImage;
+(id)smartColorAdjustmentsForValue:(CGFloat)arg0 andStatistics:(id)arg1 ;
+(id)smartToneAdjustmentsForValue:(CGFloat)arg0 andStatistics:(id)arg1 ;
+(id)smartToneAdjustmentsForValue:(CGFloat)arg0 localLightAutoValue:(CGFloat)arg1 andStatistics:(id)arg2 ;
+(id)whiteImage;
+(id)yellowImage;
-(*void)_internalRepresentation;
-(BOOL)cacheHint;
-(BOOL)isOpaque;
-(NSUInteger)digest;
-(id)TIFFRepresentation;
-(id)_autoRedEyeFilterWithFeatures:(id)arg0 imageProperties:(id)arg1 context:(id)arg2 options:(id)arg3 ;
-(id)_dictForFeature:(id)arg0 invOrientationTransform:(struct CGAffineTransform )arg1 extent:(struct CGRect )arg2 ;
-(id)_imageByApplyingBlur:(CGFloat)arg0 ;
-(id)_imageByApplyingColorMatrixRedgreenbluebias;
-(id)_imageByApplyingGamma:(CGFloat)arg0 ;
-(id)_imageByApplyingTransform:(struct CGAffineTransform )arg0 highQualityDownsample:(struct Trilean )arg1 ;
-(id)_imageByClampingAlpha;
-(id)_imageByMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg0 ;
-(id)_imageByMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg0 ;
-(id)_imageByPremultiplying;
-(id)_imageByRenderingToIntermediate;
-(id)_imageBySamplingLinear;
-(id)_imageBySamplingNearest;
-(id)_imageByUnpremultiplying;
-(id)_initNaiveWithCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(id)_initWithBitmapData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 options:(id)arg4 ;
-(id)_initWithCVImageBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(id)_initWithIOSurface:(struct __IOSurface *)arg0 options:(id)arg1 owner:(*void)arg2 ;
// -(id)_initWithImageProvider:(id)arg0 width:(unk)arg1 height:(NSUInteger)arg2 format:(NSUInteger)arg3 colorSpace:(int)arg4 surfaceCache:(struct CGColorSpace *)arg5 options:(BOOL)arg6  ;
-(id)_initWithInternalRepresentation:(*void)arg0 ;
-(id)_pdfDataRepresentation;
-(id)_scaleImageToMaxDimension:(unsigned int)arg0 ;
-(id)autoAdjustmentFilters;
-(id)autoAdjustmentFiltersWithImageProperties:(id)arg0 options:(id)arg1 ;
-(id)autoAdjustmentFiltersWithOptions:(id)arg0 ;
-(id)autoPerspectiveFilterWithOptions:(id)arg0 ;
-(id)autoPerspectiveResultWithOptions:(id)arg0 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg0 imageProperties:(id)arg1 options:(id)arg2 ;
-(id)autoRedEyeFilterWithFeatures:(id)arg0 options:(id)arg1 ;
-(id)autoRotateFilterFFT:(id)arg0 image:(struct CGImage *)arg1 inputRect:(struct CGRect )arg2 minTiltAngle:(float)arg3 maxTiltAngle:(float)arg4 detectVerticalLines:(BOOL)arg5 thrVertAngle:(float)arg6 thrDomAngleDiff:(float)arg7 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)filteredImage:(id)arg0 keysAndValues:(id)arg1 ;
-(id)getAutoRotateFilter:(id)arg0 ciImage:(id)arg1 inputRect:(struct CGRect )arg2 rotateCropRect:(struct CGRect *)arg3 minTiltAngle:(float)arg4 maxTiltAngle:(float)arg5 detectVerticalLines:(BOOL)arg6 thrVertAngle:(float)arg7 thrDomAngleDiff:(float)arg8 ;
-(id)imageByApplyingCGOrientation:(unsigned int)arg0 ;
-(id)imageByApplyingFilter:(id)arg0 ;
-(id)imageByApplyingFilter:(id)arg0 withInputParameters:(id)arg1 ;
-(id)imageByApplyingGaussianBlurWithSigma:(CGFloat)arg0 ;
-(id)imageByApplyingOrientation:(int)arg0 ;
-(id)imageByApplyingTransform:(struct CGAffineTransform )arg0 ;
-(id)imageByApplyingTransform:(struct CGAffineTransform )arg0 highQualityDownsample:(BOOL)arg1 ;
-(id)imageByClampingToExtent;
-(id)imageByClampingToRect:(struct CGRect )arg0 ;
-(id)imageByColorMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg0 ;
-(id)imageByColorMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg0 ;
-(id)imageByColorMatchingWorkingSpaceToRGBorGrayColorSpace:(struct CGColorSpace *)arg0 ;
-(id)imageByCompositingOverImage:(id)arg0 ;
-(id)imageByConvertingLabToWorkingSpace;
-(id)imageByConvertingWorkingSpaceToLab;
-(id)imageByCroppingToRect:(struct CGRect )arg0 ;
-(id)imageByInsertingIntermediate;
-(id)imageByInsertingIntermediate:(BOOL)arg0 ;
-(id)imageByPremultiplyingAlpha;
-(id)imageBySamplingLinear;
-(id)imageBySamplingNearest;
-(id)imageBySettingAlphaOneInExtent:(struct CGRect )arg0 ;
-(id)imageBySettingProperties:(id)arg0 ;
-(id)imageBySettingPropertiesNoCopy:(id)arg0 ;
-(id)imageByTaggingWithColorSpace:(struct CGColorSpace *)arg0 ;
-(id)imageByToneMappingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg0 ;
-(id)imageByUnpremultiplyingAlpha;
// -(id)imageWithExtent:(struct CGRect )arg0 processorDescription:(id)arg1 argumentDigest:(NSUInteger)arg2 inputFormat:(int)arg3 outputFormat:(int)arg4 options:(id)arg5 roiCallback:(id)arg6 processor:(unk)arg7  ;
-(id)imageWithMesh:(id)arg0 transform:(struct CGAffineTransform )arg1 ;
-(id)init;
-(id)initAuxiliaryWithImageSource:(struct CGImageSource *)arg0 index:(NSUInteger)arg1 options:(id)arg2 depth:(BOOL)arg3 ;
-(id)initForRenderingWithMPS:(id)arg0 orNonMPS:(id)arg1 ;
-(id)initForRenderingWithMetal:(id)arg0 orNonMetal:(id)arg1 ;
-(id)initForRenderingWithMetalContext:(id)arg0 orOpenGLContextUsingMetal:(id)arg1 orNonMetalContext:(id)arg2 ;
-(id)initMatteWithImageSource:(struct CGImageSource *)arg0 options:(id)arg1 ;
-(id)initWithArrayOfImages:(id)arg0 selector:(id)arg1 ;
-(id)initWithAttributedString:(id)arg0 format:(int)arg1 ;
-(id)initWithAttributedString:(id)arg0 format:(int)arg1 options:(id)arg2 ;
-(id)initWithBitmapData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 ;
-(id)initWithBitmapData:(id)arg0 bytesPerRow:(NSUInteger)arg1 size:(struct CGSize )arg2 format:(int)arg3 options:(id)arg4 ;
-(id)initWithCGImage:(struct CGImage *)arg0 ;
-(id)initWithCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(id)initWithCGImageSource:(struct CGImageSource *)arg0 index:(NSUInteger)arg1 options:(id)arg2 ;
-(id)initWithCGLayer:(struct CGLayer *)arg0 ;
-(id)initWithCGLayer:(struct CGLayer *)arg0 options:(id)arg1 ;
-(id)initWithCVImageBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithCVImageBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)initWithColorR:(CGFloat)arg0 G:(CGFloat)arg1 B:(CGFloat)arg2 A:(CGFloat)arg3 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 options:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 options:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)initWithDepthData:(id)arg0 ;
-(id)initWithDepthData:(id)arg0 options:(id)arg1 ;
-(id)initWithEmptyClearColor;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 ;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 options:(id)arg1 ;
-(id)initWithImageProvider:(id)arg0 size:(NSUInteger)arg1 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 ;
-(id)initWithImageProvider:(id)arg0 userInfo:(id)arg1 size:(struct CGSize )arg2 format:(int)arg3 flipped:(BOOL)arg4 colorSpace:(struct CGColorSpace *)arg5 ;
// -(id)initWithImageProvider:(id)arg0 width:(unk)arg1 height:(NSUInteger)arg2 format:(NSUInteger)arg3 colorSpace:(int)arg4 options:(struct CGColorSpace *)arg5  ;
-(id)initWithMTLTexture:(id)arg0 options:(id)arg1 ;
-(id)initWithPortaitEffectsMatte:(id)arg0 ;
-(id)initWithPortaitEffectsMatte:(id)arg0 options:(id)arg1 ;
-(id)initWithPortraitEffectsMatte:(id)arg0 ;
-(id)initWithPortraitEffectsMatte:(id)arg0 options:(id)arg1 ;
-(id)initWithSemanticSegmentationMatte:(id)arg0 ;
-(id)initWithSemanticSegmentationMatte:(id)arg0 options:(id)arg1 ;
-(id)initWithTexture:(unsigned int)arg0 size:(struct CGSize )arg1 flipped:(BOOL)arg2 colorSpace:(struct CGColorSpace *)arg3 ;
-(id)initWithTexture:(unsigned int)arg0 size:(struct CGSize )arg1 flipped:(BOOL)arg2 options:(id)arg3 ;
-(id)initWithTexture:(unsigned int)arg0 size:(struct CGSize )arg1 options:(id)arg2 ;
-(id)localLightStatistics;
-(id)localLightStatisticsNoProxy;
-(id)localLightStatisticsWithProxy:(BOOL)arg0 ;
-(id)metalImageByApplyingFilter:(id)arg0 ;
-(id)metalImageByApplyingFilter:(id)arg0 withInputParameters:(id)arg1 ;
-(id)smartBlackAndWhiteAdjustmentsForValue:(CGFloat)arg0 andStatistics:(id)arg1 ;
-(id)smartBlackAndWhiteStatistics;
-(id)smartColorAdjustmentsForValue:(CGFloat)arg0 andStatistics:(id)arg1 ;
-(id)smartColorStatistics;
-(id)smartToneAdjustmentsForValue:(CGFloat)arg0 andStatistics:(id)arg1 ;
-(id)smartToneAdjustmentsForValue:(CGFloat)arg0 localLightAutoValue:(CGFloat)arg1 andStatistics:(id)arg2 ;
-(id)smartToneStatistics;
-(id)userInfo;
-(int)outputFormat;
-(struct CGAffineTransform )imageTransformForCGOrientation:(unsigned int)arg0 ;
-(struct CGAffineTransform )imageTransformForOrientation:(int)arg0 ;
-(struct CGAffineTransform )inverseImageTransformForOrientation:(int)arg0 ;
-(struct CGColorSpace *)baseColorSpace;
-(struct CGPoint )calcIntersection:(struct CGPoint )arg0 slope1:(struct CGPoint )arg1 pt2:(struct CGPoint )arg2 slope2:(struct CGPoint )arg3 ;
-(struct CGPoint )pointWithDictionary:(id)arg0 name:(id)arg1 index:(int)arg2 transformedBy:(struct CGAffineTransform )arg3 ;
-(struct CGRect )regionOfInterestForImage:(id)arg0 inRect:(struct CGRect )arg1 ;
-(struct __CVBuffer *)_originalCVPixelBuffer;
-(struct __CVBuffer *)_pixelBufferFromAuxProps:(struct __CFDictionary *)arg0 ;
-(void)_setOriginalCGImage:(struct CGImage *)arg0 options:(id)arg1 ;
-(void)_setOriginalCVPixelBuffer:(struct __CVBuffer *)arg0 options:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getAutocropRect:(id)arg0 rotateXfrm:(struct CGAffineTransform )arg1 inputImageRect:(struct CGRect )arg2 clipRect:(struct CGRect *)arg3 ;
-(void)printTree;
-(void)setCacheHint:(BOOL)arg0 ;
-(void)setUserInfo:(id)arg0 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)writeToTIFF:(id)arg0 ;


@end


#endif