// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHBARCOLUMNELEMENTBUILDER_H
#define TSCHBARCOLUMNELEMENTBUILDER_H



#import "TSCHElementBuilder.h"

@interface TSCHBarColumnElementBuilder : TSCHElementBuilder {
    BOOL _vertical;
}




+(void)calculateGapsForChartModel:(id)arg0 forTotalWidth:(float)arg1 outBarWidth:(*float)arg2 outBarGroupGap:(*float)arg3 outBarGap:(*float)arg4 ;
-(?)countOfBarRectsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewGroupIndexArray:(?)arg3 outNewElementRectsArrayoutNewClipRectsArray;
-(?)countOfElementsInSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewElementBounds:(?)arg3 outNewClipRects:(?)arg4 outNewElementPaths:(?)arg5 outSelectionKnobLocationsforHighlightPath;
-(?)countOfErrorBarsInSeries:(?)arg0 forGroups:(?)arg1 forAxisID:(?)arg2 forBodyLayout:(?)arg3 outClipRectoutNewErrorBarDescriptors;
-(?)countOfLabelsForSeries:(?)arg0 forGroups:(?)arg1 forBodyLayout:(?)arg2 outNewTransforms:(?)arg3 outNewElementSizes:(?)arg4 outNewClipRectoutNewStrings;
-(CGFloat)p_beginValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 unitSpaceIntercept:(CGFloat)arg2 relativelyPositive:(BOOL)arg3 valueAxis:(id)arg4 ;
-(NSUInteger)p_logicalSeriesIndexForSeries:(id)arg0 ;
-(NSUInteger)p_numberOfSeriesForGapCalcInModel:(id)arg0 ;
-(id)init;
-(id)initWithVertical:(BOOL)arg0 ;
-(struct CGPath *)newRoundedRectPathWithRect:(struct CGRect )arg0 chartInfo:(id)arg1 series:(id)arg2 groupIndex:(NSUInteger)arg3 isVertical:(BOOL)arg4 forGroups:(id)arg5 forBodyLayout:(id)arg6 ;
-(struct CGRect )nudgeBarElementFrame:(struct CGRect )arg0 inPlotAreaFrame:(struct CGRect )arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(CGFloat)arg3 unitSpaceValueEnd:(CGFloat)arg4 withViewScale:(CGFloat)arg5 ;
-(struct CGRect )p_createBarRectInFrame:(struct CGRect )arg0 forSeries:(id)arg1 groupIndex:(NSUInteger)arg2 count:(NSUInteger)arg3 valueAxis:(id)arg4 groupAxis:(id)arg5 barWidth:(float)arg6 barGroupGap:(float)arg7 barGap:(float)arg8 ;
-(void)p_calcGapsForBodyLayout:(id)arg0 elementCount:(NSUInteger)arg1 outBarWidth:(*float)arg2 outBarGroupGap:(*float)arg3 outBarGap:(*float)arg4 ;
-(void)p_nudgeBarElementFrame:(struct CGRect *)arg0 inPlotAreaFrame:(struct CGRect )arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(CGFloat)arg3 unitSpaceValueEnd:(CGFloat)arg4 withViewScale:(CGFloat)arg5 ;
-(void)p_trendlineInfoForSeries:(id)arg0 forBodyLayout:(id)arg1 outVertical:(*BOOL)arg2 outOffsetInBody:(*CGFloat)arg3 ;


@end


#endif