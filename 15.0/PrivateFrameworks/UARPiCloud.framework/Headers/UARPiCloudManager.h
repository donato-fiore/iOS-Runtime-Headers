// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UARPICLOUDMANAGER_H
#define UARPICLOUDMANAGER_H

@protocol UARPiCloudManagerDelegate, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "UARPiCloudContainer.h"

@interface UARPiCloudManager : NSObject

@property (readonly) UARPiCloudContainer *container; // ivar: _container
@property (readonly) NSObject<UARPiCloudManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) NSObject<OS_dispatch_queue> *recordProcessingQueue; // ivar: _recordProcessingQueue


-(BOOL)fetchVerificationCertificateInContainer:(id)arg0 ;
-(BOOL)processCHIPAccessoriesRecord:(id)arg0 inZone:(id)arg1 ;
-(BOOL)validateSignatureForUARPAccessoryRecord:(id)arg0 inContainer:(id)arg1 ;
-(NSInteger)fetchRemoteDatabaseChangesInContainer:(id)arg0 completion:(id)arg1 ;
-(id)calculateDigestFromCHIPAccessoriesRecord:(id)arg0 ;
-(id)calculateDigestFromUARPAccessoryRecord:(id)arg0 ;
-(id)filterInterestedZonesInContainer:(id)arg0 forAccessories:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 containerID:(id)arg1 ;
-(struct __SecKey *)copyPublicKeyForVerificationCertificateData:(id)arg0 policy:(struct __SecPolicy *)arg1 ;
-(struct __SecKey *)copyPublicKeyFromCertificateID:(id)arg0 ;
-(void)fetchZoneChangesInContainer:(id)arg0 forAccessories:(id)arg1 ;
-(void)handleRemoteFetchRequestForAccessories:(id)arg0 ;
-(void)handleRemoteFetchRequestForCHIPAccessoriesMetadataInZone:(id)arg0 ;
-(void)handleRemoteFetchRequestSyncForCHIPAccessoriesMetadata:(*id)arg0 inZone:(id)arg1 ;
-(void)performRemoteFetchForAccessories:(id)arg0 ;
-(void)performRemoteFetchForCHIPVerificationCertificateSync;
-(void)performRemoteFetchForSupportedAccessoriesMetadataInZone:(id)arg0 ;
-(void)processCHIPAccessoriesRecords:(id)arg0 inZone:(id)arg1 ;
-(void)processCKRecord:(id)arg0 inContainer:(id)arg1 forAccessory:(id)arg2 ;
-(void)processRecordsInContainer:(id)arg0 forAccessory:(id)arg1 ;
-(void)processUpdatedRecordsInContainer:(id)arg0 forAccessories:(id)arg1 ;
-(void)processVerificationCertificateRecord:(id)arg0 forContainer:(id)arg1 ;


@end


#endif