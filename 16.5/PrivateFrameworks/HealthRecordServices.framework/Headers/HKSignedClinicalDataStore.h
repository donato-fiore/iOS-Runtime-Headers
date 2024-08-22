// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSIGNEDCLINICALDATASTORE_H
#define HKSIGNEDCLINICALDATASTORE_H

@class HKTaskServerProxyProvider, NSString;
@protocol HKSignedClinicalDataStoreClientInterface, _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HKSignedClinicalDataStore : NSObject <HKSignedClinicalDataStoreClientInterface, _HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(id)logPrefix;
-(id)remoteInterface;
// -(void)_fetchServerProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)deleteSignedClinicalDataRecord:(id)arg0 completion:(id)arg1 ;
-(void)fetchCurrentRegistryIssuerContentVersionWithCompletion:(id)arg0 ;
-(void)fetchCurrentRegistryPublicKeyContentVersionWithCompletion:(id)arg0 ;
-(void)fetchPublicKeyEntriesWithCompletion:(id)arg0 ;
-(void)fetchPublicKeyWithKeyID:(id)arg0 completion:(id)arg1 ;
-(void)fetchSignedClinicalDataGroupBackingMedicalRecord:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)insertOrReplaceIssuerRegistryEntries:(id)arg0 completion:(id)arg1 ;
-(void)insertOrReplacePublicKeyEntries:(id)arg0 completion:(id)arg1 ;
-(void)parseSignedClinicalData:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)reextractSignedClinicalDataRecordsForAccountWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)removePublicKeyEntriesWithKeyIDs:(id)arg0 completion:(id)arg1 ;
-(void)reverifySignatureForRecord:(id)arg0 completion:(id)arg1 ;
-(void)setRegistryIssuerContentVersion:(id)arg0 completion:(id)arg1 ;
-(void)setRegistryPublicKeyContentVersion:(id)arg0 completion:(id)arg1 ;
-(void)storeSignedClinicalData:(id)arg0 completion:(id)arg1 ;
-(void)triggerDownloadIssuerRegistryForCatalogURL:(id)arg0 shouldPersist:(BOOL)arg1 completion:(id)arg2 ;
-(void)triggerDownloadPublicKeysForCatalogURL:(id)arg0 shouldPersist:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif