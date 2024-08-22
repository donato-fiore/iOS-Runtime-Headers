// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKIDVREMOTEDEVICESESSIONSERVER_H
#define NPKIDVREMOTEDEVICESESSIONSERVER_H

@class PDXPCService, NSSet, NSString;
@protocol NPKIDVRemoteDeviceServiceSessionServerProtocol;


#import "NPKIDVRemoteDeviceServiceEventsCoordinator.h"
#import "NPKIDVRemoteDeviceConnectionCoordinator.h"
#import "NPKBiometricPassPreflightManager.h"

@interface NPKIDVRemoteDeviceSessionServer : PDXPCService <NPKIDVRemoteDeviceServiceSessionServerProtocol>

 {
    NPKIDVRemoteDeviceServiceEventsCoordinator *_eventsCoordinator;
    NPKIDVRemoteDeviceConnectionCoordinator *_connectionCoordinator;
    NPKBiometricPassPreflightManager *_preflightManager;
    NSSet *_partitions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_checkCredentialProvisioningEntitlement;
-(id)_checkCredentialStoreBiometricsEntitlement;
-(id)_checkCredentialStoreEntitlementWithPartition:(id)arg0 ;
-(id)initWithConnection:(id)arg0 eventsCoordinator:(id)arg1 connectionCoordinator:(id)arg2 preflightManager:(id)arg3 ;
-(void)addNotificationWithType:(NSUInteger)arg0 documentType:(NSUInteger)arg1 issuerName:(id)arg2 completion:(id)arg3 ;
-(void)configureWithPartition:(id)arg0 ackHandler:(id)arg1 ;
-(void)confirmRemoteDeviceID:(id)arg0 withCompletion:(id)arg1 ;
-(void)createCredentialInPartition:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)credentialIdentifiersInPartitions:(id)arg0 completion:(id)arg1 ;
-(void)credentialPreflightStatusForType:(NSUInteger)arg0 minOSVersion:(id)arg1 completion:(id)arg2 ;
-(void)deleteCredential:(id)arg0 completion:(id)arg1 ;
-(void)deleteGlobalAuthACLWithCompletion:(id)arg0 ;
-(void)establishPrearmTrust:(id)arg0 completion:(id)arg1 ;
-(void)establishPrearmTrustV2:(id)arg0 completion:(id)arg1 ;
-(void)generateKeyWithType:(NSUInteger)arg0 credentialIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)generatePresentmentKeysForCredential:(id)arg0 numKeys:(NSInteger)arg1 completion:(id)arg2 ;
-(void)getCASDCertificateWithCompletion:(id)arg0 ;
-(void)nonceForAuthorizationTokenWithCompletion:(id)arg0 ;
-(void)pairedWatchSEIDWithCompletion:(id)arg0 ;
-(void)prearmCredentialWithAuthorizationToken:(id)arg0 completion:(id)arg1 ;
-(void)propertiesOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)provisionCredentialWithType:(NSUInteger)arg0 metadata:(id)arg1 policyIdentifier:(id)arg2 credentialIdentifier:(id)arg3 attestations:(id)arg4 completion:(id)arg5 ;
-(void)registerForEvents:(NSUInteger)arg0 withRemoteProcessServiceName:(id)arg1 completion:(id)arg2 ;
-(void)unregisterFromEvents:(NSUInteger)arg0 withRemoteProcessServiceName:(id)arg1 completion:(id)arg2 ;


@end


#endif