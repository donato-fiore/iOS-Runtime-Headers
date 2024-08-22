// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKRELATIVEQUANTITYDISPLAYTYPEVALUEFORMATTER_H
#define HKRELATIVEQUANTITYDISPLAYTYPEVALUEFORMATTER_H



#import "HKQuantityDisplayTypeValueFormatter.h"

@interface HKRelativeQuantityDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter



-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 unitFormatString:(id)arg6 formatString:(id)arg7 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 formatString:(id)arg3 ;


@end


#endif