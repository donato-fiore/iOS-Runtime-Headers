// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSEARCHENGINE_H
#define HDMEDICATIONSEARCHENGINE_H


#import <Foundation/Foundation.h>


@interface HDMedicationSearchEngine : NSObject



+(BOOL)_inflateFirstConcept:(*id)arg0 predicate:(id)arg1 relationshipTypes:(id)arg2 maximumDepth:(NSInteger)arg3 ontologyTransaction:(id)arg4 errorOut:(*id)arg5 ;
+(BOOL)_medicationClusterFromMachineReadableCode:(id)arg0 codeAttributeType:(NSInteger)arg1 searchResultOut:(*id)arg2 ontologyTransaction:(id)arg3 errorOut:(*id)arg4 ;
+(BOOL)_medicationSearchResultForFirstConcept:(*id)arg0 predicate:(id)arg1 ontologyTransaction:(id)arg2 errorOut:(*id)arg3 ;
+(BOOL)medicationCluster:(*id)arg0 machineReadableCode:(id)arg1 codeAttributeType:(NSInteger)arg2 profile:(id)arg3 errorOut:(*id)arg4 ;
+(id)_attributeTypesForInflation;
+(id)_genericProductForClinicalProduct:(id)arg0 ontologyTransaction:(id)arg1 error:(*id)arg2 ;
+(id)_importEligibleMedicationConceptsSinceDate:(id)arg0 limit:(NSInteger)arg1 profile:(id)arg2 errorOut:(*id)arg3 ;
+(id)_medicationClustersFromScanResult:(id)arg0 limit:(NSInteger)arg1 ontologyTransaction:(id)arg2 errorOut:(*id)arg3 ;
+(id)_medicationClustersFromTextSearchTokens:(id)arg0 limit:(NSInteger)arg1 ontologyTransaction:(id)arg2 errorOut:(*id)arg3 ;
+(id)_medicationSearchResultForClinicalProduct:(id)arg0 ontologyTransaction:(id)arg1 errorOut:(*id)arg2 ;
+(id)_medicationSearchResultForSpecificProduct:(id)arg0 ontologyTransaction:(id)arg1 errorOut:(*id)arg2 ;
+(id)_relationshipsForInflation;
+(id)hkt_genericMedicationWithClinicalProductConcept:(id)arg0 profile:(id)arg1 errorOut:(*id)arg2 ;
+(id)hkt_importEligibleMedicationConceptsSinceDate:(id)arg0 limit:(NSInteger)arg1 profile:(id)arg2 errorOut:(*id)arg3 ;
+(id)medicationClustersForCHRImportWithExistingMedications:(id)arg0 sinceDate:(id)arg1 limit:(NSInteger)arg2 profile:(id)arg3 errorOut:(*id)arg4 ;
+(id)medicationClustersFromScanResult:(id)arg0 limit:(NSInteger)arg1 profile:(id)arg2 errorOut:(*id)arg3 ;
+(id)medicationClustersFromTextSearchTokens:(id)arg0 limit:(NSInteger)arg1 profile:(id)arg2 errorOut:(*id)arg3 ;


@end


#endif