// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTIMEPERIODDISPLAYTYPEVALUEFORMATTER_H
#define HKTIMEPERIODDISPLAYTYPEVALUEFORMATTER_H



#import "HKDisplayTypeValueFormatter.h"

@interface HKTimePeriodDisplayTypeValueFormatter : HKDisplayTypeValueFormatter



-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 ;
-(id)attributedStringFromValue:(id)arg0 roundToHours:(BOOL)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 ;
-(id)attributedStringFromValue:(id)arg0 roundToHours:(BOOL)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 usePerDayFormatting:(BOOL)arg7 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif