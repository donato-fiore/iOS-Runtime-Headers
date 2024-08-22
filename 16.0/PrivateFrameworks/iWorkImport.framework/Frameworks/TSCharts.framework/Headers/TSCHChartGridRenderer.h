// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTGRIDRENDERER_H
#define TSCHCHARTGRIDRENDERER_H



#import "TSCHRenderer.h"

@interface TSCHChartGridRenderer : TSCHRenderer



-(id)p_majorLocationsWithAxis:(id)arg0 ;
-(struct CGRect )p_frame;
-(void)p_debugRenderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;
-(void)p_drawFillWithContext:(struct CGContext *)arg0 fill:(id)arg1 frameToDraw:(struct CGRect )arg2 ;
-(void)p_renderBackground:(struct CGContext *)arg0 style:(id)arg1 ;
-(void)p_renderGridlines:(struct CGContext *)arg0 axis:(id)arg1 locations:(id)arg2 showProperty:(int)arg3 strokeProperty:(int)arg4 shadowProperty:(int)arg5 opacityProperty:(int)arg6 ;
-(void)p_renderGridlinesWithContext:(struct CGContext *)arg0 axis:(id)arg1 stroke:(id)arg2 locations:(id)arg3 frame:(struct CGRect )arg4 ;
-(void)p_renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;


@end


#endif