// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSLEEPDURATIONAVERAGEFORMATTER_H
#define _HKSLEEPDURATIONAVERAGEFORMATTER_H

@class NSArray;


#import "HKInteractiveChartDataFormatter.h"

@interface _HKSleepDurationAverageFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSArray *rangeDataForTimeAsleepAverage; // ivar: _rangeDataForTimeAsleepAverage
@property (retain, nonatomic) NSArray *rangeDataForTimeInBedAverage; // ivar: _rangeDataForTimeInBedAverage


-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)init;
-(void)_setRangeData:(id)arg0 isTimeInBed:(BOOL)arg1 ;
-(void)setCurrentVisibleAverageNumber:(id)arg0 isTimeInBed:(BOOL)arg1 isHighlighted:(BOOL)arg2 useAverageCopy:(BOOL)arg3 ;


@end


#endif