// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKCHARTAXISDIMENSIONTABLEFORTIMEOFDAY_H
#define _HKCHARTAXISDIMENSIONTABLEFORTIMEOFDAY_H



#import "HKChartAxisDimensionUsingTable.h"
#import "HKTimeSinceStartOfDayNumberFormatter.h"

@interface _HKChartAxisDimensionTableForTimeOfDay : HKChartAxisDimensionUsingTable

@property (readonly, nonatomic) HKTimeSinceStartOfDayNumberFormatter *numberFormatter; // ivar: _numberFormatter


-(id)endingLabelsFactorOverride;
-(id)initWithStepSizeTable:(struct HKStepSizeTableEntryDefn *)arg0 stepSizeTableSize:(NSInteger)arg1 displayType:(id)arg2 unitController:(id)arg3 ;
-(id)stringForLocation:(id)arg0 ;


@end


#endif