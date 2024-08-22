// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKINTERACTIVECHARTCATEGORYVALUEFORMATTER_H
#define HKINTERACTIVECHARTCATEGORYVALUEFORMATTER_H

@class NSString;


#import "HKInteractiveChartDataFormatter.h"

@interface HKInteractiveChartCategoryValueFormatter : HKInteractiveChartDataFormatter

@property (retain, nonatomic) NSString *localizedCategoryName; // ivar: _localizedCategoryName


-(id)_formattedStringWithCount:(NSInteger)arg0 ;
-(id)_formattedStringWithText:(id)arg0 ;
-(id)_formattedStringWithValue:(NSInteger)arg0 useColorAttributes:(BOOL)arg1 ;
-(id)_uniqueChartPoints:(id)arg0 ;
-(id)formattedSelectedRangeLabelDataWithChartData:(id)arg0 context:(NSInteger)arg1 ;
-(id)formattedValueStringForChartData:(id)arg0 options:(NSInteger)arg1 ;
-(id)initWithLocalizedCategoryName:(id)arg0 ;


@end


#endif