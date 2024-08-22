// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHPRESETIMAGERRADAR_H
#define TSCHPRESETIMAGERRADAR_H



#import "TSCHPresetImager.h"

@interface TSCHPresetImagerRadar : TSCHPresetImager



-(BOOL)p_isEllipticalWithPreset:(id)arg0 ;
-(CGFloat)p_circumscribingRadiusToFitRegularPolygonWithSideCount:(NSUInteger)arg0 intoHeight:(CGFloat)arg1 ;
-(id)p_chartType;
-(id)p_strokeFromStyle:(id)arg0 specific:(int)arg1 default:(int)arg2 ;
-(struct UIEdgeInsets )nativeSwatchImageEdgeInsets;
-(struct UIEdgeInsets )swatchImageEdgeInsetsForSize:(struct CGSize )arg0 ;
-(void)p_drawShadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 preset:(id)arg3 target:(int)arg4 shouldCache:(*BOOL)arg5 ;
-(void)p_drawUnshadowedContentIntoContext:(struct CGContext *)arg0 size:(struct CGSize )arg1 contentsScale:(CGFloat)arg2 preset:(id)arg3 target:(int)arg4 shouldCache:(*BOOL)arg5 ;


@end


#endif