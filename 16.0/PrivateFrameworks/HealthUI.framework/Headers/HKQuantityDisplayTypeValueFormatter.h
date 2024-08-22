// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUANTITYDISPLAYTYPEVALUEFORMATTER_H
#define HKQUANTITYDISPLAYTYPEVALUEFORMATTER_H



#import "HKDisplayTypeValueFormatter.h"

@interface HKQuantityDisplayTypeValueFormatter : HKDisplayTypeValueFormatter



-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 unitFormatString:(id)arg6 ;
-(id)attributedStringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 unitFormatString:(id)arg6 formatString:(id)arg7 ;
-(id)attributedStringFromValue:(id)arg0 unit:(id)arg1 unitController:(id)arg2 valueFont:(id)arg3 unitFont:(id)arg4 formatForChart:(BOOL)arg5 unitFormatString:(id)arg6 formatString:(id)arg7 ;
-(id)attributedStringFromValueString:(id)arg0 valueFont:(id)arg1 unitString:(id)arg2 unitFont:(id)arg3 unitIcon:(id)arg4 formatForChart:(BOOL)arg5 formatString:(id)arg6 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 ;
-(id)stringFromValue:(id)arg0 displayType:(id)arg1 unitController:(id)arg2 formatString:(id)arg3 ;


@end


#endif