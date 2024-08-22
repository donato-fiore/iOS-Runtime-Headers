// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKINTERACTIVECHARTNUMBERFORMATTER_H
#define HKINTERACTIVECHARTNUMBERFORMATTER_H

@class NSString;


#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartNumberFormatter : HKInteractiveChartDataFormatter

@property (copy, nonatomic) NSString *unitFormatString; // ivar: _unitFormatString


-(id)_formattedStringWithValue:(id)arg0 formatter:(id)arg1 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;
-(id)init;


@end


#endif