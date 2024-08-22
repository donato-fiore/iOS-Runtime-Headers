// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTAFIBBURDENFORMATTER_H
#define HKINTERACTIVECHARTAFIBBURDENFORMATTER_H



#import "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartAFibBurdenFormatter : HKInteractiveChartGenericStatFormatter

@property (nonatomic) NSInteger statisticsType; // ivar: _statisticsType


-(id)_formattedDataWithLessThan:(CGFloat)arg0 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)initWithStatisticsType:(NSInteger)arg0 ;


@end


#endif