// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
-(void)fetchCurrentIssuerRegistryContentVersionWithCompletion:(id)arg0 ;
-(void)fetchSignedClinicalDataGroupBackingMedicalRecord:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)insertOrReplaceIssuerRegistryEntries:(id)arg0 completion:(id)arg1 ;
-(void)parseSignedClinicalData:(id)arg0 options:(NSInteger)arg1 completion:(id)arg2 ;
-(void)reverifySignatureForRecord:(id)arg0 completion:(id)arg1 ;
-(void)setIssuerRegistryContentVersion:(id)arg0 completion:(id)arg1 ;
-(void)storeSignedClinicalData:(id)arg0 completion:(id)arg1 ;
-(void)triggerDownloadIssuerRegistryForCatalog:(id)arg0 shouldPersist:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif