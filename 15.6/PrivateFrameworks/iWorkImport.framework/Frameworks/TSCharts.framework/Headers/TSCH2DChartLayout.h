// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH2DCHARTLAYOUT_H
#define TSCH2DCHARTLAYOUT_H

@class NSValue, NSDictionary;


#import "TSCHChartLayout.h"
#import "TSCHChartRootLayoutItem.h"

@interface TSCH2DChartLayout : TSCHChartLayout {
    TSCHChartRootLayoutItem *_layoutTreeRoot;
    CGSize _lastChartBodySize;
    CGSize _startingSize;
    CGRect _startingLegendInnerFrame;
    CGRect _startingChartInnerFrame;
    NSValue *_cachedOriginRelativeToChartAreaFrame;
}


@property (readonly) TSCHChartRootLayoutItem *p_layoutTree;
@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (copy, nonatomic) NSDictionary *seriesIndexedPieWedgeExplosions;


+(id)propertiesThatInvalidateLayout;
-(NSUInteger)dataSetIndex;
-(id)hitChartElements:(struct CGPoint )arg0 passingTest:(id)arg1 ;
-(id)initWithChartInfo:(id)arg0 ;
-(id)model;
-(id)renderersWithRep:(id)arg0 ;
-(id)subselectionHaloPositionsForSelections:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGPoint )p_cachedOriginRelativeToChartAreaFrame;
-(struct CGRect )boundsForResize;
-(struct CGRect )chartAreaFrame;
-(struct CGRect )chartBodyFrame;
-(struct CGRect )legendDrawingFrame;
-(struct CGRect )legendFrame;
-(struct CGRect )legendGeometryFrame;
-(struct CGRect )legendModelGeometryFrame;
-(struct CGRect )outerLayoutFrame;
-(struct CGRect )outerShadowFrame;
-(struct CGRect )titleFrame;
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)invalidate;
-(void)invalidateCachedOriginRelativeToChartAreaFrame;
-(void)layoutForChartAreaSize:(struct CGSize )arg0 ;
-(void)layoutForChartBodySize:(struct CGSize )arg0 ;
-(void)layoutForCircumscribingSize:(struct CGSize )arg0 ;
-(void)layoutForResizingSize:(struct CGSize )arg0 ;
-(void)p_ensureValidForInwardLayout;
-(void)p_layoutNowForChartAreaSize:(struct CGSize )arg0 ;
-(void)p_layoutNowForChartBodySize:(struct CGSize )arg0 ;
-(void)p_layoutNowForCircumscribingSize:(struct CGSize )arg0 ;
-(void)setDataSetIndex:(NSUInteger)arg0 ;
-(void)setLayoutSettings:(struct ? )arg0 ;
-(void)setLegendGeometryFrame:(struct CGRect )arg0 ;
-(void)setLegendModelGeometryFrame:(struct CGRect )arg0 ;
-(void)setLegendSize:(struct CGSize )arg0 ;
-(void)setStyleProvidingSource:(id)arg0 ;


@end


#endif