// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTSTACKEDBARELEMENTSRENDERER_H
#define TSCHCHARTSTACKEDBARELEMENTSRENDERER_H



#import "TSCHChartBarElementsRenderer.h"

@interface TSCHChartStackedBarElementsRenderer : TSCHChartBarElementsRenderer



-(id)stackRectsWithContext:(struct CGContext *)arg0 ;
-(struct CGPath *)clippingPathForRect:(struct CGRect )arg0 inGroupIndex:(NSUInteger)arg1 series:(id)arg2 withContext:(struct CGContext *)arg3 relativelyPositive:(BOOL)arg4 stackRects:(id)arg5 forceRoundedCornersOff:(BOOL)arg6 ;
-(void)renderRoundedCornerElementStrokeIntoContext:(struct CGContext *)arg0 stroke:(id)arg1 clippingPath:(struct CGPath *)arg2 elementRenderRect:(struct CGRect )arg3 ;


@end


#endif