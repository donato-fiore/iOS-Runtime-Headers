// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTBODYLAYOUTITEM_H
#define TSCHCHARTBODYLAYOUTITEM_H

@class NSDictionary;


#import "TSCHChartLayoutItem.h"

@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem {
    BOOL _vertical;
}


@property (readonly, copy, nonatomic) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;


-(?)countOfElementsForModel:(?)arg0 series:(?)arg1 forGroupsBySeries:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRectsoutNewElementPaths;
-(BOOL)layoutSpacePointIsInChartBody:(struct CGPoint )arg0 ;
-(id)initWithParent:(id)arg0 ;
-(id)p_errorBarSubselectionKnobsForSeries:(id)arg0 axisID:(id)arg1 ;
-(id)p_refLineSubselectionKnobsForStyleSwapIndex:(NSUInteger)arg0 ;
-(id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg0 ;
-(id)p_trendLineR2SubselectionKnobsForSeries:(id)arg0 ;
-(id)p_trendLineSubselectionKnobsForSeries:(id)arg0 ;
-(id)p_valueLabelSubselectionKnobsForSeries:(id)arg0 ;
-(id)renderersWithRep:(id)arg0 ;
-(id)subselectionKnobPositionsForSelection:(id)arg0 ;
-(struct CGAffineTransform )p_transformForRenderingLabelForBarColSeries:(NSUInteger)arg0 forGroupIndex:(NSUInteger)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 ;
-(struct CGAffineTransform )p_transformForRenderingLabelForLineAreaSeries:(NSUInteger)arg0 forGroup:(NSUInteger)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 ;
-(struct CGAffineTransform )transformForRenderingLabelForSeries:(NSUInteger)arg0 forGroup:(NSUInteger)arg1 outElementSize:(struct CGSize *)arg2 outClipRect:(struct CGRect *)arg3 ;
-(struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg0 ;
-(struct CGRect )calcDrawingRect;
-(struct CGRect )calcOverhangRect;
-(struct CGRect )p_calcDrawingRectForModel:(id)arg0 ;
-(struct CGRect )p_calcDrawingRectForReferenceLinesForModel:(id)arg0 ;
-(struct CGRect )p_exactLabelsDrawingRectForSeries:(id)arg0 ;
-(void)iterateHitChartElements:(struct CGPoint )arg0 withBlock:(id)arg1 ;
-(void)layoutOutward;
-(void)p_addRendererOfClass:(Class)arg0 andRep:(id)arg1 toArray:(id)arg2 ;
-(void)p_nudgeBarElementFrame:(struct CGRect *)arg0 usingBarModelCache:(id)arg1 unitSpaceValueBegin:(CGFloat)arg2 unitSpaceValueEnd:(CGFloat)arg3 ;


@end


#endif