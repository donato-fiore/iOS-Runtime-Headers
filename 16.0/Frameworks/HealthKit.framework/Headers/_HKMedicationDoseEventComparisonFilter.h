// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKMEDICATIONDOSEEVENTCOMPARISONFILTER_H
#define _HKMEDICATIONDOSEEVENTCOMPARISONFILTER_H

@class HKComparisonFilter;



@interface _HKMedicationDoseEventComparisonFilter : HKComparisonFilter



+(BOOL)isAllowedPredicateOperatorType:(NSUInteger)arg0 forKeyPath:(id)arg1 ;
+(BOOL)isSupportedKeyPath:(id)arg0 ;
+(BOOL)isValidValue:(id)arg0 forKeyPath:(id)arg1 operatorType:(NSUInteger)arg2 dataTypes:(id)arg3 error:(*id)arg4 ;
+(NSInteger)enumRepresentationForKeyPath:(id)arg0 ;
+(id)allowedDataTypeClassesForKeyPath:(id)arg0 ;
+(id)allowedValueClassesForKeyPath:(id)arg0 ;
-(BOOL)_acceptsMedicationDoseEventWithMedicationIdentifier:(id)arg0 ;
-(BOOL)_acceptsMedicationDoseEventWithScheduleItemIdentifier:(id)arg0 ;
-(BOOL)_acceptsMedicationDoseEventWithStatus:(NSInteger)arg0 ;
-(BOOL)acceptsDataObject:(id)arg0 ;


@end


#endif