// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTPOLARGRIDRENDERER_H
#define TSCHCHARTPOLARGRIDRENDERER_H



#import "TSCHChartGridRenderer.h"

@interface TSCHChartPolarGridRenderer : TSCHChartGridRenderer



-(BOOL)p_polarAxisIsEnabled:(int)arg0 ;
-(CGFloat)p_rotationInRadians;
-(id)p_majorLocationsWithAxis:(id)arg0 ;
-(struct CGPath *)p_polarAxisShapePathWithRect:(struct CGRect )arg0 unitSpaceValue:(CGFloat)arg1 numberOfValues:(NSUInteger)arg2 ;
-(struct CGRect )p_frame;
-(void)p_debugRenderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_drawFillWithContext:(struct CGContext *)arg0 fill:(id)arg1 frameToDraw:(struct CGRect )arg2 ;
-(void)p_renderGridlinesWithContext:(struct CGContext *)arg0 axis:(id)arg1 stroke:(id)arg2 locations:(id)arg3 frame:(struct CGRect )arg4 ;


@end


#endif