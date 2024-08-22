// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHPRESETIMAGERINFOBASED_H
#define TSCHPRESETIMAGERINFOBASED_H



#import "TSCHPresetImager.h"
#import "TSCHChartType.h"

@interface TSCHPresetImagerInfoBased : TSCHPresetImager {
    TSCHChartType *_chartType;
}




+(id)presetImagerForChartType:(id)arg0 ;
-(BOOL)p_shouldLayoutInwardForInsertionIcons;
-(CGFloat)p_canvasScale;
-(id)imageWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 documentRoot:(id)arg5 shouldCache:(*BOOL)arg6 ;
-(id)initWithChartType:(id)arg0 ;
-(id)p_chartType;
-(id)p_imageRectAdjustments;
-(id)p_rectAdjustmentForChartType:(id)arg0 ;
-(struct CGRect )p_updateSwatchFrameForInwardLayoutIfNeeded:(struct CGRect )arg0 outImageSize:(struct CGSize *)arg1 outImageScale:(*CGFloat)arg2 outSwatchOffset:(struct CGPoint *)arg3 outCanvasScale:(*CGFloat)arg4 ;
-(struct CGRect )p_updateSwatchFrameForRectAdjustmentIfNeeded:(struct CGRect )arg0 rectAdjustment:(id)arg1 outSwatchOffset:(struct CGPoint *)arg2 ;
-(struct UIEdgeInsets )swatchImageEdgeInsetsForSize:(struct CGSize )arg0 ;
-(void)p_debugGenerateLayoutCacheWithPreset:(id)arg0 target:(int)arg1 imageSize:(struct CGSize )arg2 imageScale:(CGFloat)arg3 swatchFrame:(struct CGRect )arg4 ;


@end


#endif