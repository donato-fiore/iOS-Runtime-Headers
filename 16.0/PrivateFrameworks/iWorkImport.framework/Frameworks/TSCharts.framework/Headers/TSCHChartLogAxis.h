// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTLOGAXIS_H
#define TSCHCHARTLOGAXIS_H



#import "TSCHChartValueAxis.h"

@interface TSCHChartLogAxis : TSCHChartValueAxis



-(BOOL)shouldAnalyzeAxisValue:(CGFloat)arg0 ;
-(CGFloat)doubleAxisToModelValue:(CGFloat)arg0 ;
-(CGFloat)doubleModelToAxisValue:(CGFloat)arg0 forSeries:(id)arg1 ;
-(CGFloat)interceptForAxis:(id)arg0 ;
-(CGFloat)unitSpaceValueForDataSpaceValue:(CGFloat)arg0 min:(CGFloat)arg1 max:(CGFloat)arg2 ;
-(CGFloat)validateUserMaxForDouble:(CGFloat)arg0 ;
-(CGFloat)validateUserMinForDouble:(CGFloat)arg0 ;
-(id)computeMajorGridlinesFromMinMaxInAnalysis:(id)arg0 ;
-(id)computeMinorGridlinesFromMajorGridlinesInAnalysis:(id)arg0 ;
-(id)p_orthogonalAxis;
-(id)userMax;
-(id)userMin;
-(void)adjustMinMaxForDataRangeInAnalysis:(id)arg0 ;
-(void)updateGridValueTypeInterceptInAnalysis:(id)arg0 ;


@end


#endif