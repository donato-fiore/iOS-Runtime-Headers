// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKVERIFIABLECLINICALRECORDCOMPARISONFILTER_H
#define _HKVERIFIABLECLINICALRECORDCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKVerifiableClinicalRecordComparisonFilter : HKComparisonFilter



+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg0 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsSampleWithDate:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif