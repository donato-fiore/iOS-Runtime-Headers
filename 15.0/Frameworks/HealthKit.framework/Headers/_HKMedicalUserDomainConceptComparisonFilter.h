// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKMEDICALUSERDOMAINCONCEPTCOMPARISONFILTER_H
#define _HKMEDICALUSERDOMAINCONCEPTCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKMedicalUserDomainConceptComparisonFilter : HKComparisonFilter



+(BOOL)allowsEmptyDataTypesSetForKeyPath:(id)arg0 ;
+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif