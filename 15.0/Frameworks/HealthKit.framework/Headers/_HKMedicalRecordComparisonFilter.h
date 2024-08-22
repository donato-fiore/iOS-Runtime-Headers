// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKMEDICALRECORDCOMPARISONFILTER_H
#define _HKMEDICALRECORDCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKMedicalRecordComparisonFilter : HKComparisonFilter



+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsRecordWithDate:(id)arg0 ;
-(BOOL)_acceptsRecordWithManuallyEnteredIdentifier:(NSUInteger)arg0 ;
-(BOOL)_acceptsRecordWithState:(NSUInteger)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif