// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDHEALTHRECORDSINGESTIONSERVICECLIENT_H
#define HDHEALTHRECORDSINGESTIONSERVICECLIENT_H

@class HKProxyProvider, NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>


@interface HDHealthRecordsIngestionServiceClient : NSObject <_HKXPCExportable>

 {
    HKProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)exportedInterface;
-(id)handleSignedClinicalDataFeature:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_synchronousPerformWithProxyHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)addCardToWalletForRecord:(id)arg0 completion:(id)arg1 ;
-(void)connectionInvalidated;
-(void)dealloc;
-(void)didUpdateSignedClinicalDataRecord:(id)arg0 ;
-(void)parseSignedClinicalData:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)processOriginalSignedClinicalDataRecords:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)reverifySignatureForRecord:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)triggerDownloadIssuerRegistryForCatalogURL:(id)arg0 shouldPersist:(BOOL)arg1 completion:(id)arg2 ;
-(void)triggerDownloadPublicKeysForCatalogURL:(id)arg0 shouldPersist:(BOOL)arg1 completion:(id)arg2 ;
-(void)willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)arg0 ;


@end


#endif