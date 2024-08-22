// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKWORKOUTCOMPARISONFILTER_H
#define _HKWORKOUTCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKWorkoutComparisonFilter : HKComparisonFilter



+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithActivityType:(NSUInteger)arg0 ;
-(BOOL)_acceptsWorkoutWithDuration:(CGFloat)arg0 ;
-(BOOL)_acceptsWorkoutWithGoal:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithGoalType:(NSUInteger)arg0 ;
-(BOOL)_acceptsWorkoutWithTotalDistance:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithTotalEnergyBurned:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithTotalFlightsClimbed:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithTotalSwimmingStrokeCount:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif