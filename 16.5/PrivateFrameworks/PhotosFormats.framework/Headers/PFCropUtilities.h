// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCROPUTILITIES_H
#define PFCROPUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFCropUtilities : NSObject



+(BOOL)_rectIsValid:(struct CGRect )arg0 ;
+(CGFloat)_interpolationFactorFor:(CGFloat)arg0 between:(CGFloat)arg1 and:(CGFloat)arg2 ;
+(CGFloat)_interpolationFocusRegionMaxSize:(struct CGRect )arg0 forEdge:(unsigned int)arg1 andImageSize:(struct CGSize )arg2 withPreferredRect:(struct CGRect )arg3 withAcceptableRect:(struct CGRect )arg4 ;
+(CGFloat)_interpolationV2ScoreAlongEdge:(unsigned int)arg0 forCrop:(struct CGRect )arg1 withFullsizeRect:(struct CGRect )arg2 andPreferredRect:(struct CGRect )arg3 andAcceptableRect:(struct CGRect )arg4 ;
+(CGFloat)_interpolationV2ScoreForCrop:(struct CGRect )arg0 withFullsizeRect:(struct CGRect )arg1 andPreferredRect:(struct CGRect )arg2 andAcceptableRect:(struct CGRect )arg3 ;
+(CGFloat)_interpolationV2ScoreForFocusRegion:(struct CGRect )arg0 insideCropRect:(struct CGRect )arg1 withImportantRect:(struct CGRect )arg2 ;
+(CGFloat)_interpolationWithFactor:(CGFloat)arg0 between:(CGFloat)arg1 and:(CGFloat)arg2 ;
+(CGFloat)_interpolationWithFocusRegion:(struct CGRect )arg0 forEdge:(unsigned int)arg1 betweenRect:(struct CGRect )arg2 andRect:(struct CGRect )arg3 inMaxRect:(struct CGRect )arg4 ;
+(CGFloat)_interpolationWithFocusRegion:(struct CGRect )arg0 forEdge:(unsigned int)arg1 withRect:(struct CGRect )arg2 inMaxRect:(struct CGRect )arg3 ;
+(CGFloat)_rectDimensionOffset:(struct CGRect )arg0 insideRect:(struct CGRect )arg1 forEdge:(unsigned int)arg2 ;
+(CGFloat)_rectDimensionSize:(struct CGRect )arg0 forEdge:(unsigned int)arg1 ;
+(CGFloat)scoreForCropRect:(struct CGRect )arg0 sourcePixelWidth:(NSUInteger)arg1 sourcePixelHeight:(NSUInteger)arg2 sourceEssentialAreaRect:(struct CGRect )arg3 ;
+(CGFloat)scoreForCropRect:(struct CGRect )arg0 sourcePixelWidth:(NSUInteger)arg1 sourcePixelHeight:(NSUInteger)arg2 sourceEssentialAreaRect:(struct CGRect )arg3 sourceSecondaryEssentialAreaRect:(struct CGRect )arg4 ;
+(struct CGPoint )_translationToIncludeRect:(struct CGRect )arg0 insideRect:(struct CGRect )arg1 ;
+(struct CGRect )_curatedLibraryAdjustedRectWithFaceAreaRect:(struct CGRect )arg0 proposedCropRect:(struct CGRect )arg1 assetRect:(struct CGRect )arg2 verticalContentMode:(NSInteger)arg3 ;
+(struct CGRect )_curatedLibraryCropForAspectRatio:(CGFloat)arg0 verticalContentMode:(NSInteger)arg1 cropMode:(NSInteger)arg2 sourcePixelWidth:(NSUInteger)arg3 sourcePixelHeight:(NSUInteger)arg4 sourcePreferredCropRectNormalized:(struct CGRect )arg5 sourceAcceptableCropRectNormalized:(struct CGRect )arg6 sourceFaceAreaRectNormalized:(struct CGRect )arg7 ;
+(struct CGRect )_faceAreaRectWithPadding:(struct CGRect )arg0 ;
+(struct CGRect )_interpolationCropForAspectRatio:(CGFloat)arg0 acceptableRect:(struct CGRect )arg1 andPreferredRect:(struct CGRect )arg2 andImageRect:(struct CGRect )arg3 outputCropScore:(*CGFloat)arg4 ;
+(struct CGRect )_interpolationCropForAspectRatio:(CGFloat)arg0 andZoom:(CGFloat)arg1 acceptableRect:(struct CGRect )arg2 andPreferredRect:(struct CGRect )arg3 andImageRect:(struct CGRect )arg4 outputCropScore:(*CGFloat)arg5 ;
+(struct CGRect )_interpolationCropToSize:(struct CGSize )arg0 withinRect:(struct CGRect )arg1 withPreferredRect:(struct CGRect )arg2 andAcceptableRect:(struct CGRect )arg3 outputScore:(*CGFloat)arg4 ;
+(struct CGRect )_interpolationV2AdjustedCrop:(struct CGRect )arg0 toFocusRegion:(struct CGRect )arg1 withFullsizeRect:(struct CGRect )arg2 andImportantRect:(struct CGRect )arg3 ;
+(struct CGRect )_interpolationV2CropForAspectRatio:(CGFloat)arg0 withFocusRegion:(struct CGRect )arg1 andAcceptableRect:(struct CGRect )arg2 andPreferredRect:(struct CGRect )arg3 andImageRect:(struct CGRect )arg4 outputCropScore:(*CGFloat)arg5 ;
+(struct CGRect )bestCropRectForAspectRatio:(CGFloat)arg0 verticalContentMode:(NSInteger)arg1 cropMode:(NSInteger)arg2 sourcePixelWidth:(NSUInteger)arg3 sourcePixelHeight:(NSUInteger)arg4 sourcePreferredCropRectNormalized:(struct CGRect )arg5 sourceAcceptableCropRectNormalized:(struct CGRect )arg6 sourceFaceAreaRectNormalized:(struct CGRect )arg7 ;
+(struct CGRect )bestCropRectV2ForAspectRatio:(CGFloat)arg0 sourcePixelWidth:(NSUInteger)arg1 sourcePixelHeight:(NSUInteger)arg2 sourceEssentialAreaRect:(struct CGRect )arg3 ;
+(struct CGRect )bestCropRectV2ForAspectRatio:(CGFloat)arg0 sourcePixelWidth:(NSUInteger)arg1 sourcePixelHeight:(NSUInteger)arg2 sourceEssentialAreaRect:(struct CGRect )arg3 sourceSecondaryEssentialAreaRect:(struct CGRect )arg4 ;
+(struct CGRect )bestCropRectV2ForAspectRatio:(CGFloat)arg0 sourcePixelWidth:(NSUInteger)arg1 sourcePixelHeight:(NSUInteger)arg2 sourceEssentialAreaRect:(struct CGRect )arg3 sourceSecondaryEssentialAreaRect:(struct CGRect )arg4 outputCropScore:(*CGFloat)arg5 ;
+(struct CGRect )bestCropRectV2ForAspectRatio:(CGFloat)arg0 withFocusRegion:(struct CGRect )arg1 sourcePixelWidth:(NSUInteger)arg2 sourcePixelHeight:(NSUInteger)arg3 sourcePreferredCropRectNormalized:(struct CGRect )arg4 sourceAcceptableCropRectNormalized:(struct CGRect )arg5 sourceFaceAreaRectNormalized:(struct CGRect )arg6 ;
+(struct CGRect )bestCropRectV2ForAspectRatio:(CGFloat)arg0 withFocusRegion:(struct CGRect )arg1 sourcePixelWidth:(NSUInteger)arg2 sourcePixelHeight:(NSUInteger)arg3 sourcePreferredCropRectNormalized:(struct CGRect )arg4 sourceAcceptableCropRectNormalized:(struct CGRect )arg5 sourceFaceAreaRectNormalized:(struct CGRect )arg6 outputCropScore:(*CGFloat)arg7 ;
+(struct CGRect )bestCropRectV2ForAspectRatio:(CGFloat)arg0 zoom:(CGFloat)arg1 sourcePixelWidth:(NSUInteger)arg2 sourcePixelHeight:(NSUInteger)arg3 sourceEssentialAreaRect:(struct CGRect )arg4 sourceSecondaryEssentialAreaRect:(struct CGRect )arg5 outputCropScore:(*CGFloat)arg6 ;
+(struct CGRect )bestCropRectV2ForParallaxClassification:(NSUInteger)arg0 layoutConfiguration:(id)arg1 sourcePixelWidth:(NSUInteger)arg2 sourcePixelHeight:(NSUInteger)arg3 sourcePreferredCropRectNormalized:(struct CGRect )arg4 sourceAcceptableCropRectNormalized:(struct CGRect )arg5 sourceFaceAreaRectNormalized:(struct CGRect )arg6 outputCropScore:(*CGFloat)arg7 outputLayoutScore:(*CGFloat)arg8 outputClockOverlapAcceptable:(*BOOL)arg9 ;
+(struct CGSize )_interpolationCropSizeForRatio:(CGFloat)arg0 andZoom:(CGFloat)arg1 forImageSize:(struct CGSize )arg2 ;
+(struct CGSize )_interpolationV2MaxCropSizeForAspectRatio:(CGFloat)arg0 andZoom:(CGFloat)arg1 withFocusRegion:(struct CGRect )arg2 forImageSize:(struct CGSize )arg3 withImportantRect:(struct CGRect )arg4 ;
+(void)_flipRect:(struct CGRect *)arg0 withinContentSize:(struct CGSize )arg1 ;


@end


#endif