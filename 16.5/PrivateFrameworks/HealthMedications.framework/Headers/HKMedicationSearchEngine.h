// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONSEARCHENGINE_H
#define HKMEDICATIONSEARCHENGINE_H

@class NSString, HKHealthStore, HKTaskServerProxyProvider;
@protocol _HKXPCExportable, HKMedicationSearchEngineClientInterface;

#import <Foundation/Foundation.h>


@interface HKMedicationSearchEngine : NSObject <_HKXPCExportable, HKMedicationSearchEngineClientInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)connectionInvalidated;
-(void)fetchMedicationClusterWithMachineReadableCode:(id)arg0 codeAttributeType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)fetchMedicationClustersForCHRImportWithExistingMedications:(id)arg0 sinceDate:(id)arg1 limit:(NSInteger)arg2 completion:(id)arg3 ;
-(void)fetchMedicationClustersWithScanResult:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)fetchMedicationClustersWithTextSearchTokens:(id)arg0 limit:(NSInteger)arg1 completion:(id)arg2 ;
-(void)unitTest_noOpWithCompletion:(id)arg0 ;


@end


#endif