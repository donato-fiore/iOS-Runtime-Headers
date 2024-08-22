// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTBARELEMENTSRENDERER_H
#define TSCHCHARTBARELEMENTSRENDERER_H



#import "TSCHRenderer.h"

@interface TSCHChartBarElementsRenderer : TSCHRenderer {
    BOOL _vertical;
    BOOL _touchInResize;
    BOOL _touchInBody;
    NSUInteger _hitSeriesIndex;
    NSUInteger _hitValueIndex;
    CGFloat _hitFudgeOffset;
    BOOL _resizeIsOutsideBody;
    CGRect _lastDrawRect;
}




-(BOOL)supportsSeparateLabelsRenderPass;
-(id)initWithChartRep:(id)arg0 layoutItem:(id)arg1 ;
-(id)p_strokeForSeriesIndex:(NSUInteger)arg0 withContext:(struct CGContext *)arg1 ;
-(id)stackRectsWithContext:(struct CGContext *)arg0 ;
-(int)chunkPlane;
-(struct CGPath *)clippingPathForRect:(struct CGRect )arg0 inGroupIndex:(NSUInteger)arg1 series:(id)arg2 withContext:(struct CGContext *)arg3 relativelyPositive:(BOOL)arg4 stackRects:(id)arg5 forceRoundedCornersOff:(BOOL)arg6 ;
-(struct CGPath *)roundedCornerPathForRect:(struct CGRect )arg0 shouldRoundOuterEndOnly:(BOOL)arg1 relativelyPositive:(BOOL)arg2 ;
-(struct CGRect )barElementFrameForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 ;
-(struct CGRect )renderingElementFrameForBarElementFrame:(struct CGRect )arg0 groupIndex:(NSUInteger)arg1 modelCache:(id)arg2 stroke:(id)arg3 viewScale:(CGFloat)arg4 contextInfo:(struct ? )arg5 returningFillRect:(struct CGRect *)arg6 strokeRect:(struct CGRect *)arg7 ;
-(void)enumerateElementsForSeries:(id)arg0 context:(struct CGContext *)arg1 elementCount:(NSUInteger)arg2 groupIndexes:(*NSUInteger)arg3 elementRects:(struct CGRect *)arg4 clipRects:(struct CGRect *)arg5 forBlock:(id)arg6 ;
-(void)p_drawBars:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_drawLabels:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_drawLayer:(struct CGLayer *)arg0 intoContext:(struct CGContext *)arg1 contextRect:(struct CGRect )arg2 groupIndex:(NSUInteger)arg3 series:(id)arg4 relativelyPositive:(BOOL)arg5 stackRects:(id)arg6 forceRoundedCornersOff:(BOOL)arg7 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)renderElementStroke:(id)arg0 intoContext:(struct CGContext *)arg1 usingElementRenderRect:(struct CGRect )arg2 inGroupIndex:(NSUInteger)arg3 series:(id)arg4 relativelyPositive:(BOOL)arg5 stackRects:(id)arg6 forceRoundedCornersOff:(BOOL)arg7 ;
-(void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext *)arg0 stroke:(id)arg1 clippingPath:(struct CGPath *)arg2 elementRenderRect:(struct CGRect )arg3 ;


@end


#endif