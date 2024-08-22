// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICESESSION_H
#define NPKIDVREMOTEDEVICESESSION_H

@class NSString, PKXPCService;
@protocol PKXPCServiceDelegate, NPKIDVRemoteDeviceNotificationManager;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceSession : NSObject <PKXPCServiceDelegate, NPKIDVRemoteDeviceNotificationManager>

 {
    NSString *_deviceID;
    NSUInteger _status;
    PKXPCService *_remoteService;
    os_unfair_lock_s _deviceIDLock;
    os_unfair_lock_s _sessionStatusLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *deviceID;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger status;
@property (readonly) Class superclass;


+(void)sessionForDeviceID:(id)arg0 completion:(id)arg1 ;
-(id)_errorHandlerWithCompletion:(SEL)arg0 ;
-(id)_remoteObjectProxyWithFailureHandler:(id)arg0 ;
-(id)init;
-(void)_confirmRemoteDeviceID:(id)arg0 withCompletion:(id)arg1 ;
-(void)_generateKeyWithType:(NSUInteger)arg0 credentialIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)addNotificationWithType:(NSUInteger)arg0 documentType:(NSUInteger)arg1 issuerName:(id)arg2 completion:(id)arg3 ;
-(void)configureWithPartition:(id)arg0 ackHandler:(id)arg1 ;
-(void)createCredentialInPartition:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)credentialIdentifiersInPartitions:(id)arg0 completion:(id)arg1 ;
-(void)credentialPreflightStatusForType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteCredential:(id)arg0 completion:(id)arg1 ;
-(void)deleteGlobalAuthACLWithCompletion:(id)arg0 ;
-(void)elementsOfCredential:(id)arg0 elementIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)establishPrearmTrust:(id)arg0 completion:(id)arg1 ;
-(void)generateDeviceEncryptionKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)generateKeySigningKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)generatePresentmentKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)invalidateSession;
-(void)nonceForAuthorizationTokenWithCompletion:(id)arg0 ;
-(void)prearmCredentialWithAuthorizationToken:(id)arg0 completion:(id)arg1 ;
-(void)propertiesOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)provisionCredentialWithType:(NSUInteger)arg0 metadata:(id)arg1 policyIdentifier:(id)arg2 credentialIdentifier:(id)arg3 attestations:(id)arg4 completion:(id)arg5 ;
-(void)registerForEvents:(NSUInteger)arg0 withRemoteProcessServiceName:(id)arg1 completion:(id)arg2 ;
-(void)remoteService:(id)arg0 didEstablishConnection:(id)arg1 ;
-(void)remoteService:(id)arg0 didInterruptConnection:(id)arg1 ;
-(void)unregisterFromEvents:(NSUInteger)arg0 withRemoteProcessServiceName:(id)arg1 completion:(id)arg2 ;


@end


#endif