// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKWORKOUTACTIVITYCOMPARISONFILTER_H
#define _HKWORKOUTACTIVITYCOMPARISONFILTER_H

@class HKComparisonFilter;


#import "HKQuantityType.h"

@interface _HKWorkoutActivityComparisonFilter : HKComparisonFilter

@property (readonly, copy, nonatomic) HKQuantityType *quantityType; // ivar: _quantityType


+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(BOOL)requiresSubpredicate;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)_quantityTypeFromKeyPath:(id)arg0 prefix:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsActivityWithActivityType:(NSUInteger)arg0 ;
-(BOOL)_acceptsActivityWithDate:(id)arg0 ;
-(BOOL)_acceptsActivityWithDuration:(CGFloat)arg0 ;
-(BOOL)_acceptsActivityWithQuantity:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;
-(BOOL)acceptsWorkoutActivity:(id)arg0 ;
-(void)configureInMemoryFilter;


@end


#endif