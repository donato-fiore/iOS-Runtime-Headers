// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKCONCEPTINDEXABLECOMPARISONFILTER_H
#define _HKCONCEPTINDEXABLECOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKConceptIndexableComparisonFilter : HKComparisonFilter



+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(BOOL)supportsKeyPath:(id)arg0 forTypes:(id)arg1 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsDataObjectWithValue:(id)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif