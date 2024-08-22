// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPICLOUDMANAGER_H
#define UARPICLOUDMANAGER_H

@class NSMutableSet;
@protocol OS_dispatch_queue, UARPiCloudManagerDelegate, OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPiCloudContainer.h"

@interface UARPiCloudManager : NSObject {
    NSObject<OS_dispatch_queue> *_recordProcessingQueue;
    NSMutableSet *_pendingiCloudAccessoryRequests;
}


@property (readonly) UARPiCloudContainer *container; // ivar: _container
@property (readonly) NSObject<UARPiCloudManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_os_log> *log; // ivar: _log


-(BOOL)fetchVerificationCertificateInContainer:(id)arg0 ;
-(BOOL)processCHIPAccessoriesRecord:(id)arg0 productGroup:(id)arg1 ;
-(BOOL)processCHIPAttestationCertificateRecord:(id)arg0 subjectKeyIdentifier:(id)arg1 ;
-(BOOL)validateCHIPFirmwareRecord:(id)arg0 inContainer:(id)arg1 forAccessory:(id)arg2 ;
-(BOOL)validateSignatureForUARPAccessoryRecord:(id)arg0 inContainer:(id)arg1 ;
-(NSInteger)fetchRemoteDatabaseChangesInContainer:(id)arg0 completion:(id)arg1 ;
-(id)calculateDigestFromCHIPAccessoriesRecord:(id)arg0 ;
-(id)calculateDigestFromCHIPAttestationCertificateRecord:(id)arg0 ;
-(id)calculateDigestFromCHIPFirmwareRecord:(id)arg0 ;
-(id)calculateDigestFromUARPAccessoryRecord:(id)arg0 ;
-(id)filterInterestedZonesInContainer:(id)arg0 forAccessories:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 containerID:(id)arg1 ;
-(struct __SecKey *)copyPublicKeyForVerificationCertificateData:(id)arg0 policy:(struct __SecPolicy *)arg1 ;
-(struct __SecKey *)copyPublicKeyFromCertificateID:(id)arg0 ;
-(void)fetchZoneChangesInContainer:(id)arg0 forAccessories:(id)arg1 ;
-(void)handleRemoteFetchRequestForAccessories:(id)arg0 ;
-(void)handleRemoteFetchRequestForCHIPAccessoriesMetadata:(id)arg0 ;
-(void)handleRemoteFetchRequestForCHIPAttestationCertificates:(*id)arg0 subjectKeyIdentifier:(id)arg1 ;
-(void)handleRemoteFetchRequestForCHIPAttestationCertificates:(id)arg0 ;
-(void)handleRemoteFetchRequestSyncForCHIPAccessoriesMetadata:(*id)arg0 productGroup:(id)arg1 ;
-(void)handleRemoteFetchRequestSyncForCHIPAttestationCertificates:(*id)arg0 subjectKeyIdentifier:(id)arg1 ;
-(void)performRemoteFetchForAccessories:(id)arg0 ;
-(void)performRemoteFetchForAttestationCertificates:(id)arg0 ;
-(void)performRemoteFetchForCHIPVerificationCertificateSync;
-(void)performRemoteFetchForSupportedAccessoriesMetadata:(id)arg0 ;
-(void)performRemoteFetchForSupportedAccessoriesMetadataInZone:(id)arg0 ;
-(void)processCHIPAccessoriesRecords:(id)arg0 productGroup:(id)arg1 ;
-(void)processCHIPAttestationCertificateRecords:(id)arg0 subjectKeyIdentifier:(id)arg1 ;
-(void)processCHIPFirmwareRecord:(id)arg0 inContainer:(id)arg1 forAccessory:(id)arg2 ;
-(void)processCKRecord:(id)arg0 inContainer:(id)arg1 forAccessory:(id)arg2 ;
-(void)processRecordsInContainer:(id)arg0 forAccessory:(id)arg1 ;
-(void)processUpdatedRecordsInContainer:(id)arg0 forAccessories:(id)arg1 ;
-(void)processVerificationCertificateRecord:(id)arg0 forContainer:(id)arg1 ;


@end


#endif