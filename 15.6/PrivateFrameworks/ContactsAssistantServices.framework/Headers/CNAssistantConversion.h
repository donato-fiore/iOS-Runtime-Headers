// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNASSISTANTCONVERSION_H
#define CNASSISTANTCONVERSION_H


#import <Foundation/Foundation.h>


@interface CNAssistantConversion : NSObject



+(id)addressesForSyncFromContact:(id)arg0 ;
+(id)addressesFromContact:(id)arg0 ;
+(id)addressesFromPerson:(id)arg0 ;
+(id)createSAPersonFromCNContact:(id)arg0 ;
+(id)createSAPersonFromCNContact:(id)arg0 conversionType:(NSInteger)arg1 ;
+(id)createSAPersonFromCNContactWithExternalIdentifier:(id)arg0 ;
+(id)createSASourceFromCNContainer:(id)arg0 ;
+(id)descriptorsForRequiredKeys;
+(id)descriptorsForRequiredKeysForConversionType:(NSInteger)arg0 ;
+(id)emailAddressesForSyncFromContact:(id)arg0 ;
+(id)emailAddressesFromContact:(id)arg0 ;
+(id)emailAddressesFromPerson:(id)arg0 ;
+(id)filterLabeledValues:(id)arg0 droppingEmptyLabels:(BOOL)arg1 droppingDuplicates:(BOOL)arg2 ;
+(id)keysFromPerson:(id)arg0 ;
+(id)personForSyncFromContact:(id)arg0 ;
+(id)personFromContact:(id)arg0 ;
+(id)personFromContact:(id)arg0 useABPerson:(BOOL)arg1 ;
+(id)personFromMeContact:(id)arg0 ;
+(id)phoneNumbersForSyncFromContact:(id)arg0 ;
+(id)phoneNumbersFromContact:(id)arg0 ;
+(id)phoneNumbersFromPerson:(id)arg0 ;
+(id)relationsForSyncFromContact:(id)arg0 ;
+(id)relationsFromContact:(id)arg0 ;
+(id)relationsFromPerson:(id)arg0 ;
+(id)socialProfilesFromContact:(id)arg0 ;
+(id)verifyContact:(id)arg0 hasDescriptorsForRequiredKeys:(id)arg1 ;
+(void)addFieldsFromPerson:(id)arg0 toContactWithIdentifier:(id)arg1 usingStore:(id)arg2 saveRequest:(id)arg3 ;
+(void)applyUpdate:(id)arg0 toContactWithIdentifier:(id)arg1 usingStore:(id)arg2 saveRequest:(id)arg3 ;
+(void)markMeContactInPeople:(id)arg0 usingStore:(id)arg1 ;
+(void)removeFieldsFromPerson:(id)arg0 toContactWithIdentifier:(id)arg1 usingStore:(id)arg2 saveRequest:(id)arg3 ;
+(void)setFieldsFromPerson:(id)arg0 toContactWithIdentifier:(id)arg1 usingStore:(id)arg2 saveRequest:(id)arg3 ;


@end


#endif