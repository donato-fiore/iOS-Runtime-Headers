// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHPIECHARTREP_H
#define TSCHPIECHARTREP_H

@class NSArray, NSDictionary;


#import "TSCHChartRep.h"
#import "TSCHChartRadialElementsRenderer.h"

@interface TSCHPieChartRep : TSCHChartRep {
    TSCHChartRadialElementsRenderer *_pieElementRenderer;
    NSArray *_wedgeKnobs;
    NSDictionary *_seriesIndexedPieWedgeDraggingLayers;
    BOOL _hasDrawnSinceWedgeKnobTrackerCreated;
}




-(BOOL)forceRenderBlankBackground;
-(CGFloat)dragTravelAlongBisectorBetweenStartPoint:(struct CGPoint )arg0 andEndingPoint:(struct CGPoint )arg1 forSeries:(NSUInteger)arg2 ;
-(CGFloat)p_radius;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)pieElementRenderer;
-(void)clearRenderers;
-(void)renderIntoContext:(struct CGContext *)arg0 visible:(struct CGRect )arg1 ;


@end


#endif