// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKPERCENTAGEDISPLAYTYPEVALUEFORMATTER_H
#define HKPERCENTAGEDISPLAYTYPEVALUEFORMATTER_H



#import "HKQuantityDisplayTypeValueFormatter.h"

@interface HKPercentageDisplayTypeValueFormatter : HKQuantityDisplayTypeValueFormatter



-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 unitFormatString:(id)arg6 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;


@end


#endif