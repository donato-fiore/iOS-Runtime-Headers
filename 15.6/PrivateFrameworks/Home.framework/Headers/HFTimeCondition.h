// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFTIMECONDITION_H
#define HFTIMECONDITION_H



#import "HFCondition.h"

@interface HFTimeCondition : HFCondition



+(id)_formattedStringForDateComponentsCondition:(id)arg0 style:(NSUInteger)arg1 formattingContext:(NSInteger)arg2 ;
+(id)_formattedStringForOffset:(id)arg0 ;
+(id)_formattedStringForSunriseSunsetCondition:(id)arg0 style:(NSUInteger)arg1 formattingContext:(NSInteger)arg2 ;
+(id)_formattedStringForTimeCondition:(id)arg0 style:(NSUInteger)arg1 formattingContext:(NSInteger)arg2 ;
+(id)_formattedStringForTimeRangeCondition:(id)arg0 style:(NSUInteger)arg1 formattingContext:(NSInteger)arg2 ;
+(id)_nameForConditionType:(NSUInteger)arg0 formattingStyle:(NSInteger)arg1 formattingContext:(NSInteger)arg2 ;
+(id)defaultConditionForType:(NSUInteger)arg0 ;
+(id)hf_naturalLanguageSummaryForTypeOnlyWithOptions:(id)arg0 ;
-(NSUInteger)timeConditionType;
-(id)hf_naturalLanguageSummaryWithOptions:(id)arg0 ;


@end


#endif