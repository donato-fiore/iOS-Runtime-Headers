// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKINTERACTIVECHARTOXYGENSATURATIONFORMATTER_H
#define HKINTERACTIVECHARTOXYGENSATURATIONFORMATTER_H



#import "HKInteractiveChartGenericStatFormatter.h"

@interface HKInteractiveChartOxygenSaturationFormatter : HKInteractiveChartGenericStatFormatter

@property (nonatomic) NSInteger airPressureStatisticsType; // ivar: _airPressureStatisticsType


-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)initWithStatisticsType:(NSInteger)arg0 ;


@end


#endif