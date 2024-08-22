// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKELECTROCARDIOGRAMCOMPARISONFILTER_H
#define _HKELECTROCARDIOGRAMCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKElectrocardiogramComparisonFilter : HKComparisonFilter



+(BOOL)areValidTypes:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsECGWithAverageHeartRate:(id)arg0 ;
-(BOOL)_acceptsECGWithPrivateClassification:(NSUInteger)arg0 ;
-(BOOL)_acceptsECGWithPublicClassification:(NSInteger)arg0 ;
-(BOOL)_acceptsECGWithSymptomsStatus:(NSInteger)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif