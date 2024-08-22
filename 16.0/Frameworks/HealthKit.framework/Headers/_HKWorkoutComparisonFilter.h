// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKWORKOUTCOMPARISONFILTER_H
#define _HKWORKOUTCOMPARISONFILTER_H

@class HKComparisonFilter;


#import "HKQuantityType.h"
#import "_HKFilter.h"

@interface _HKWorkoutComparisonFilter : HKComparisonFilter

@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType
@property (readonly, copy, nonatomic) _HKFilter *subFilter; // ivar: _subFilter


+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)_quantityTypeFromKeyPath:(id)arg0 prefix:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithActivities:(id)arg0 ;
-(BOOL)_acceptsWorkoutWithActivityType:(NSUInteger)arg0 ;
-(BOOL)_acceptsWorkoutWithDuration:(CGFloat)arg0 ;
-(BOOL)_acceptsWorkoutWithGoalType:(NSUInteger)arg0 ;
-(BOOL)_acceptsWorkoutWithQuantity:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(void)configureInMemoryFilter;


@end


#endif