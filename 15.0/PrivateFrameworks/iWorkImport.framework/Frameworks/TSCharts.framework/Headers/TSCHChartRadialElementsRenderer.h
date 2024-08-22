// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTRADIALELEMENTSRENDERER_H
#define TSCHCHARTRADIALELEMENTSRENDERER_H

@class NSIndexSet;


#import "TSCHRenderer.h"

@interface TSCHChartRadialElementsRenderer : TSCHRenderer {
    CGPoint _hitPoint;
    NSUInteger _hitSeries;
    float _hitStartAngle;
    float _hitRadius;
    float _hitExplosion;
    BOOL _didMoveDuringTouchIfNotThenRotateChartForDemo;
    NSIndexSet *_partialRenderingSeriesIndexSet;
    BOOL _partialRenderingInclusionFlag;
}




-(BOOL)p_shouldRenderSeriesIndex:(NSUInteger)arg0 ;
-(CGFloat)p_calculateIntersectionAreaForRectangle:(struct CGRect )arg0 circleCenter:(struct CGPoint )arg1 circleRadius:(CGFloat)arg2 ;
-(int)chunkPlane;
-(struct CGLayer *)p_newPreRenderedImageWithContext:(struct CGContext *)arg0 wedgePath:(struct CGPath *)arg1 fullWedgePath:(struct CGPath *)arg2 fill:(id)arg3 stroke:(id)arg4 shadow:(id)arg5 outUserSpaceLayerBounds:(struct CGRect *)arg6 ;
-(struct CGRect )chartLayoutSpaceRenderingRect;
-(void)drawAll;
-(void)drawAllButSeriesIndicies:(id)arg0 ;
-(void)drawOnlySeriesIndicies:(id)arg0 ;
-(void)p_drawLinePathsIntoContext:(struct CGContext *)arg0 linePath:(struct CGPath *)arg1 tailPath:(struct CGPath *)arg2 headPath:(struct CGPath *)arg3 fillTail:(BOOL)arg4 fillHead:(BOOL)arg5 stroke:(id)arg6 ;
-(void)p_drawOnlyShadow:(id)arg0 forImage:(struct CGLayer *)arg1 intoRect:(struct CGRect )arg2 intoContext:(struct CGContext *)arg3 atViewScale:(CGFloat)arg4 usingBlendMode:(int)arg5 opacity:(CGFloat)arg6 ;
-(void)p_drawOnlyShapeImage:(struct CGLayer *)arg0 intoRect:(struct CGRect )arg1 intoContext:(struct CGContext *)arg2 usingBlendMode:(int)arg3 opacity:(CGFloat)arg4 ;
-(void)p_drawWedgePathIntoContext:(struct CGContext *)arg0 path:(struct CGPath *)arg1 fill:(id)arg2 stroke:(id)arg3 opacity:(CGFloat)arg4 withinBounds:(struct CGRect )arg5 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)renderLabelWithPieLabel:(id)arg0 combinedLabelTransform:(struct CGAffineTransform )arg1 context:(struct CGContext *)arg2 paragraphStyle:(id)arg3 ;
-(void)renderLabelsWithWedgeLayoutInfo:(id)arg0 paragraphStyle:(id)arg1 context:(struct CGContext *)arg2 ;


@end


#endif