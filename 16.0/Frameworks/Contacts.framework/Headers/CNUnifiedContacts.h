// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUNIFIEDCONTACTS_H
#define CNUNIFIEDCONTACTS_H


#import <Foundation/Foundation.h>


@interface CNUnifiedContacts : NSObject



+(BOOL)canUnifyLabel:(id)arg0 withLabel:(id)arg1 forProperty:(id)arg2 ;
+(BOOL)doesMultiValue:(id)arg0 needLabeledValue:(id)arg1 fromMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(BOOL)shouldIncludeLabeledValue:(id)arg0 fromSource:(id)arg1 inDestination:(id)arg2 forProperty:(id)arg3 ;
+(BOOL)shouldLabeledValue:(id)arg0 replaceInferiorValueInMultiValue:(id)arg1 forProperty:(id)arg2 ;
+(NSUInteger)countOfLabelIncludingEquivalents:(id)arg0 value:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(NSUInteger)countOfLabelsUnifiableWithLabel:(id)arg0 valuesUnifiableWithValue:(id)arg1 inMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(NSUInteger)indexOfPreferredContactForImage:(id)arg0 ;
+(NSUInteger)indexOfValueMostInferiorTo:(id)arg0 inMultiValue:(id)arg1 forProperty:(id)arg2 ;
+(id)firstNonNilValueForProperty:(id)arg0 inContacts:(id)arg1 ;
+(id)imageValuePropertiesByKey;
+(id)imageValuePropertyKeys;
+(id)indexesOfLabeledValuesUnifiableWithLabelValuePair:(id)arg0 inMultiValue:(id)arg1 forProperty:(id)arg2 ;
+(id)indexesOfValuesInferiorTo:(id)arg0 inMultiValue:(id)arg1 forProperty:(id)arg2 ;
+(id)makeNonNameSingleValuePropertiesByKey;
+(id)nonNameSingleValuePropertiesByKey;
+(id)unifiedIdentifiersForLabeledValue:(id)arg0 inUnifiedMap:(id)arg1 forProperty:(id)arg2 ;
+(id)unifiedIdentifiersForValue:(id)arg0 inUnifiedMap:(id)arg1 forProperty:(id)arg2 ;
+(id)unifyAvailableKeysOfContacts:(id)arg0 ;
+(void)addLinkedLabeledValue:(id)arg0 toLabeledValue:(id)arg1 forProperty:(id)arg2 ;
+(void)replaceInferiorValueInMultiValue:(id)arg0 withEntryAtIndex:(NSUInteger)arg1 fromMultiValue:(id)arg2 forProperty:(id)arg3 ;
+(void)unifyImageOfContacts:(id)arg0 intoContact:(id)arg1 availableKeyDescriptor:(id)arg2 ;
+(void)unifyNamesOfContacts:(id)arg0 withPreferredContact:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3 ;
+(void)unifyNonNameSingleValuesOfContacts:(id)arg0 withPreferredContact:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3 ;
+(void)unifySingleValuesProperties:(id)arg0 ofContacts:(id)arg1 intoContact:(id)arg2 availableKeyDescriptor:(id)arg3 ;


@end


#endif