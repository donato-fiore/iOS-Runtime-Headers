// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCHCHARTSERIESTYPESTACKEDCOLUMN_H
#define TSCHCHARTSERIESTYPESTACKEDCOLUMN_H



#import "TSCHChartSeriesTypeColumn.h"

@interface TSCHChartSeriesTypeStackedColumn : TSCHChartSeriesTypeColumn



-(BOOL)supportsBarGap;
-(CGFloat)beginDataValueForSeries:(id)arg0 groupIndex:(NSUInteger)arg1 valueAxisID:(id)arg2 ;
-(CGFloat)beginDataValueForSeries:(id)arg0 valueIndex:(NSUInteger)arg1 valueAxisID:(id)arg2 ;
-(CGFloat)beginValueForSeries:(NSUInteger)arg0 groupIndex:(NSUInteger)arg1 unitSpaceIntercept:(CGFloat)arg2 relativelyPositive:(BOOL)arg3 valueAxis:(id)arg4 ;
-(NSUInteger)numberOfSeriesForCalculatingBarWidth:(id)arg0 ;
-(NSUInteger)seriesIndexForDrawing:(id)arg0 ;
-(id)elementBuilder;
-(id)g_genericToSpecificPropertyMapStackedColumn;
-(id)genericToSpecificPropertyMap;
-(id)init;
-(id)legalChartLabelPositions;
-(id)userInterfaceName;
-(id)userInterfaceNameForLabelPosition:(id)arg0 ;
-(unsigned int)adjustLabelPosition:(unsigned int)arg0 forAxisValue:(CGFloat)arg1 intercept:(CGFloat)arg2 ;
-(unsigned int)filterChartLabelPosition:(unsigned int)arg0 ;


@end


#endif