// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCHARTSTACKEDVALUEAXIS_H
#define TSCHCHARTSTACKEDVALUEAXIS_H



#import "TSCHChartValueAxis.h"

@interface TSCHChartStackedValueAxis : TSCHChartValueAxis



-(*CGFloat)unitSpaceValuesForSeries:(id)arg0 groupIndexSet:(id)arg1 min:(CGFloat)arg2 max:(CGFloat)arg3 ;
-(BOOL)supportsReferenceLines;
-(CGFloat)doubleAxisToModelValue:(CGFloat)arg0 ;
-(CGFloat)doubleModelToAxisValue:(CGFloat)arg0 forSeries:(id)arg1 ;
-(CGFloat)interceptForAxis:(id)arg0 ;
-(CGFloat)unitSpaceValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 min:(CGFloat)arg2 max:(CGFloat)arg3 ;
-(id)p_orthogonalAxisForSeries:(id)arg0 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg0 ;
-(void)updateModelAxisAnalysis:(id)arg0 ;
-(void)updateMultiDataModelAxisAnalysis:(id)arg0 ;


@end


#endif