// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PISEGMENTATIONHELPER_H
#define PISEGMENTATIONHELPER_H


#import <Foundation/Foundation.h>


@interface PISegmentationHelper : NSObject



+(BOOL)matteHistogramIndicatesSubjectDetected:(id)arg0 ;
+(CGFloat)computeAlphaCoverageWithRect:(struct CGRect )arg0 foregroundImage:(id)arg1 context:(id)arg2 ;
+(CGFloat)computeAvoidOverlapYOffsetWithVisibleFrame:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 segmentationMatte:(id)arg2 layoutConfiguration:(id)arg3 outputUnsafeOverlap:(*CGFloat)arg4 context:(id)arg5 ;
+(CGFloat)computeMatteCoverageWithRect:(struct CGRect )arg0 segmentationMatte:(id)arg1 context:(id)arg2 ;
+(CGFloat)computeTargetOverlapYOffsetWithVisibleFrame:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 segmentationMatte:(id)arg2 layoutConfiguration:(id)arg3 context:(id)arg4 ;
+(float)groundedScoreForSegmentationMatte:(id)arg0 context:(id)arg1 ;
+(float)localConfidenceScoreForLocalConfidenceImage:(id)arg0 extent:(struct CGRect )arg1 context:(id)arg2 ;
+(id)backgroundForImage:(id)arg0 matte:(id)arg1 ;
+(id)backgroundForImage:(id)arg0 matte:(id)arg1 infill:(id)arg2 ;
+(id)debugImageForColorAnalysis:(id)arg0 inputImage:(id)arg1 visibleFrame:(struct CGRect )arg2 ;
+(id)debugImageWithInputImage:(id)arg0 finalLayout:(id)arg1 intermediateLayout:(id)arg2 faceRects:(id)arg3 saliencyPreferrectRect:(struct CGRect )arg4 saliencyAcceptableRect:(struct CGRect )arg5 ;
+(id)debugImageWithInputImage:(id)arg0 layout:(id)arg1 faceRects:(id)arg2 saliencyPreferrectRect:(struct CGRect )arg3 saliencyAcceptableRect:(struct CGRect )arg4 ;
+(id)debugPreviewRenderWithBackground:(id)arg0 foreground:(id)arg1 layout:(id)arg2 style:(id)arg3 ;
+(id)dilateMask:(id)arg0 withRadius:(CGFloat)arg1 ;
+(id)erodeMask:(id)arg0 withRadius:(CGFloat)arg1 ;
+(id)foregroundForImage:(id)arg0 matte:(id)arg1 ;
+(id)histogramForSegmentationMatte:(id)arg0 ;
+(id)histogramForSegmentationMatteImage:(id)arg0 ;
+(id)imageWithColor:(id)arg0 extent:(struct CGRect )arg1 ;
+(id)infillMaskForSegmentationMatte:(id)arg0 ;
+(id)invertImage:(id)arg0 ;
+(id)localConfidenceImage:(id)arg0 ;
+(id)openMask:(id)arg0 withRadius:(CGFloat)arg1 ;
+(id)thresholdImage:(id)arg0 withThreshold:(CGFloat)arg1 ;
+(id)upsampleBackgroundImage:(id)arg0 toSize:(struct CGSize )arg1 ;
+(id)upsampleMatteImage:(id)arg0 guideImage:(id)arg1 ;
+(struct CGRect )_computeAvoidingRect:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 maxYMotion:(CGFloat)arg2 segmentationMatte:(id)arg3 layoutConfiguration:(id)arg4 context:(id)arg5 ;
+(struct CGRect )tightCropFrameFromMatteImage:(id)arg0 ;
+(struct PISegmentationBimodalScore )bimodalScoreForHistogram:(id)arg0 ;
+(struct PISegmentationClockOverlapResult )computeClockLayerOrderWithVisibleFrame:(struct CGRect )arg0 foregroundImage:(id)arg1 layoutConfiguration:(id)arg2 context:(id)arg3 ;
+(struct PISegmentationClockOverlapResult )computeClockLayerOrderWithVisibleFrame:(struct CGRect )arg0 segmentationMatte:(id)arg1 layoutConfiguration:(id)arg2 context:(id)arg3 ;
+(struct PISegmentationInactiveResult )computeInactiveFrameWithVisibleFrame:(struct CGRect )arg0 imageSize:(struct CGSize )arg1 canUpdateVisibleRect:(BOOL)arg2 segmentationMatte:(id)arg3 layoutConfiguration:(id)arg4 context:(id)arg5 ;


@end


#endif