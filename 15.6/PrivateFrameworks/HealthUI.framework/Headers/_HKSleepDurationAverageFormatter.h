// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSLEEPDURATIONAVERAGEFORMATTER_H
#define _HKSLEEPDURATIONAVERAGEFORMATTER_H

@class NSArray;


#import "HKInteractiveChartDataFormatter.h"

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSArray *rangeDataForAverage; // ivar: _rangeDataForAverage


-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)init;
-(void)setCurrentVisibleAverageNumber:(id)arg0 averageForInBed:(BOOL)arg1 ;


@end


#endif