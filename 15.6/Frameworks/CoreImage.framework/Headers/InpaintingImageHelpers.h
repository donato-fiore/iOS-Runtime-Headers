// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPAINTINGIMAGEHELPERS_H
#define INPAINTINGIMAGEHELPERS_H


#import <Foundation/Foundation.h>


@interface InpaintingImageHelpers : NSObject



+(CGFloat)expandDimension:(CGFloat)arg0 toOneOfTheResolutions:(id)arg1 ;
+(id)absoluteDiffBetweenImage:(id)arg0 andImage:(id)arg1 ;
+(id)blendImage:(id)arg0 withBackgroundImage:(id)arg1 usingMask:(id)arg2 ;
+(id)blendImage:(id)arg0 withBackgroundImage:(id)arg1 usingMask:(id)arg2 andGaussianBlendRadius:(int)arg3 ;
+(id)blurImage:(id)arg0 withSigma:(CGFloat)arg1 ;
+(id)compositeImage:(id)arg0 overImage:(id)arg1 ;
+(id)compositeImageNoReclamping:(id)arg0 overImage:(id)arg1 ;
+(id)compositeImageWithReclamping:(id)arg0 overImage:(id)arg1 ;
+(id)computePerChannelAvgPixelValueInImage:(id)arg0 onArea:(struct CGRect )arg1 ;
+(id)computePerChannelSumsOfPixelsInImage:(id)arg0 onArea:(struct CGRect )arg1 ;
+(id)createBGRAVImageWrapperFromCIImage:(id)arg0 ;
+(id)dilateMask:(id)arg0 usingRadius:(int)arg1 ;
+(id)dilateMaskUsingClampingAndCropping:(id)arg0 usingRadius:(int)arg1 ;
+(id)erodeMask:(id)arg0 usingRadius:(int)arg1 ;
+(id)erodeMaskUsingClampingAndCropping:(id)arg0 usingRadius:(int)arg1 ;
+(id)extractTileFromImage:(id)arg0 aroundCenterPoint:(struct CGPoint )arg1 tileSize:(int)arg2 ;
+(id)findEquidistantPointsOnMaskDiagonal:(id)arg0 tileSize:(int)arg1 maxDistanceBetweenPoints:(int)arg2 diagonalityDirection:(int)arg3 ;
+(id)invertMask:(id)arg0 ;
+(id)moveOriginForImage:(id)arg0 to:(struct CGPoint )arg1 ;
+(id)multiplyImage:(id)arg0 withMask:(id)arg1 ;
+(id)padImage:(id)arg0 toExtent:(struct CGRect )arg1 usingColor:(id)arg2 ;
+(id)padMask:(id)arg0 toImageSize:(id)arg1 ;
+(id)reclampImageWith1PixBoundary:(id)arg0 ;
+(id)scaleImage:(id)arg0 toShorterEdgeSize:(CGFloat)arg1 ;
+(id)scaleImage:(id)arg0 toSize:(struct CGSize )arg1 ;
+(id)scaleImage:(id)arg0 toWidth:(CGFloat)arg1 andHeight:(CGFloat)arg2 ;
+(id)thresholdMask:(id)arg0 ;
+(int)findTile1DOffsetForCenter:(int)arg0 maxBound:(int)arg1 tileSize:(int)arg2 ;
+(struct CGRect )computeTileRectForImage:(id)arg0 aroundCenterPoint:(struct CGPoint )arg1 tileSize:(int)arg2 ;
+(struct CGRect )expandBoundingBox:(struct CGRect )arg0 toWidth:(int)arg1 andHeight:(int)arg2 withinArea:(struct CGSize )arg3 ;
+(struct CGRect )expandBoundingBox:(struct CGRect )arg0 withSideExtraPercentage:(float)arg1 maxExtraSidePixels:(int)arg2 withinArea:(struct CGSize )arg3 ;
+(struct CGRect )expandBoundingBoxToRectangle:(struct CGRect )arg0 withSideExtraPercentage:(float)arg1 maxExtraSidePixels:(int)arg2 withinArea:(struct CGSize )arg3 roundUpSidesToClosestResolution:(id)arg4 ;
+(struct CGRect )expandBoundingBoxToSquare:(struct CGRect )arg0 withSideExtraPercentage:(float)arg1 maxExtraSidePixels:(int)arg2 withinArea:(struct CGSize )arg3 roundUpSidesToClosestResolution:(id)arg4 ;
+(void)saveCIImage:(id)arg0 asPNGAt:(id)arg1 ;
+(void)saveCIImage:(id)arg0 asTIFFAt:(id)arg1 ;
+(void)saveVImageWrapper:(id)arg0 asPNGAt:(id)arg1 ;


@end


#endif