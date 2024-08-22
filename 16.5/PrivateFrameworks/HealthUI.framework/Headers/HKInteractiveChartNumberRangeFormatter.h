// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTNUMBERRANGEFORMATTER_H
#define HKINTERACTIVECHARTNUMBERRANGEFORMATTER_H


#import <Foundation/Foundation.h>


@interface HKInteractiveChartNumberRangeFormatter : NSObject



-(BOOL)_shouldRemoveUnit:(id)arg0 fromMaximumFormattedValue:(id)arg1 ;
-(BOOL)_shouldRemoveUnit:(id)arg0 fromMinimumFormattedValue:(id)arg1 ;
-(id)_attributedStringFromValue:(id)arg0 withValueFormatter:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 ;
-(id)attributedStringForMinimumString:(id)arg0 maximumString:(id)arg1 minimumUnitString:(id)arg2 maximumUnitString:(id)arg3 valueFont:(id)arg4 formatForChart:(BOOL)arg5 resultIsASingleValue:(*BOOL)arg6 ;
-(id)attributedStringForMinimumValue:(id)arg0 maximumValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 ;
-(id)attributedStringForMinimumValue:(id)arg0 maximumValue:(id)arg1 displayType:(id)arg2 unitController:(id)arg3 valueFont:(id)arg4 unitFont:(id)arg5 formatForChart:(BOOL)arg6 resultIsSingleValue:(*BOOL)arg7 ;
-(id)stringForMinimumValue:(id)arg0 maximumValue:(id)arg1 displayType:(id)arg2 unitPreferenceController:(id)arg3 ;


@end


#endif