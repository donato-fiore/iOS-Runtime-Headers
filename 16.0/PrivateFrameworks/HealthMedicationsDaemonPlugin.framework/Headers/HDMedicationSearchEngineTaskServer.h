// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDMEDICATIONSEARCHENGINETASKSERVER_H
#define HDMEDICATIONSEARCHENGINETASKSERVER_H

@class HDStandardTaskServer;
@protocol HKMedicationSearchEngineServerInterface;



@interface HDMedicationSearchEngineTaskServer : HDStandardTaskServer <HKMedicationSearchEngineServerInterface>





+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)remote_fetchMedicationClusterWithMachineReadableCode:(id)arg0 codeAttributeType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)remote_fetchMedicationClustersForCHRImportWithExistingMedications:(id)arg0 sinceDate:(id)arg1 limit:(NSInteger)arg2 completion:(id)arg3 ;
-(void)remote_fetchMedicationClustersWithScanResult:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)remote_fetchMedicationClustersWithTextSearchTokens:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif