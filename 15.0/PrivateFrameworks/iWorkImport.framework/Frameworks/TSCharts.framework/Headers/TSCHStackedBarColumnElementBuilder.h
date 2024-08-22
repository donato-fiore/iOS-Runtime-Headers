// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHSTACKEDBARCOLUMNELEMENTBUILDER_H
#define TSCHSTACKEDBARCOLUMNELEMENTBUILDER_H



#import "TSCHBarColumnElementBuilder.h"

@interface TSCHStackedBarColumnElementBuilder : TSCHBarColumnElementBuilder



-(CGFloat)p_beginValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 unitSpaceIntercept:(CGFloat)arg2 relativelyPositive:(BOOL)arg3 valueAxis:(id)arg4 ;
-(NSUInteger)p_logicalSeriesIndexForSeries:(id)arg0 ;
-(NSUInteger)p_numberOfSeriesForGapCalcInModel:(id)arg0 ;
-(id)p_stackedRectsWithChartInfo:(id)arg0 forGroups:(id)arg1 forBodyLayout:(id)arg2 ;
-(struct CGPath *)newRoundedRectPathWithRect:(struct CGRect )arg0 chartInfo:(id)arg1 series:(id)arg2 groupIndex:(NSUInteger)arg3 isVertical:(BOOL)arg4 forGroups:(id)arg5 forBodyLayout:(id)arg6 ;


@end


#endif