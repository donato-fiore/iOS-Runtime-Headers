// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKIDVREMOTEDEVICECONNECTIONCOORDINATOR_H
#define NPKIDVREMOTEDEVICECONNECTIONCOORDINATOR_H

@class IDSService, NSMutableDictionary, NSHashTable, NSString;
@protocol IDSServiceDelegate, NPKIDVRemoteDeviceNotificationManager, NPKIDVRemoteDeviceCredentialStorageCoordinatorProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKIDVRemoteDeviceConnectionCoordinator : NSObject <IDSServiceDelegate, NPKIDVRemoteDeviceNotificationManager, NPKIDVRemoteDeviceCredentialStorageCoordinatorProtocol>

 {
    IDSService *_remoteDeviceIDSService;
    NSObject<OS_dispatch_queue> *_IDSMessagesQueue;
    NSMutableDictionary *_outstandingRequestItems;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_outstandingRequestItemWithCompletion:(id)arg0 errorHandler:(id)arg1 ;
-(id)_safeQueue_outstandingRequestItemForIDSProtobuf:(id)arg0 ;
-(id)_safeQueue_outstandingRequestItemForIDSProtobuf:(id)arg0 remove:(BOOL)arg1 ;
-(id)_safeQueue_outstandingRequestItemWithMessageIdentifier:(id)arg0 remove:(BOOL)arg1 ;
-(id)init;
-(void)_inQueue_teardownCurrentRemoteDeviceConnection;
-(void)_safeQueue_resetCleanupTimerForOutstandingRequestItemWithMessageIdentifier:(id)arg0 ;
-(void)_sendRequest:(id)arg0 withType:(unsigned short)arg1 priority:(NSInteger)arg2 queueIdentifier:(id)arg3 requestItem:(id)arg4 ;
-(void)_sendRequest:(id)arg0 withType:(unsigned short)arg1 queueIdentifier:(id)arg2 requestItem:(id)arg3 ;
-(void)addNotificationResponse:(id)arg0 ;
-(void)addNotificationWithType:(NSUInteger)arg0 documentType:(NSUInteger)arg1 issuerName:(id)arg2 completion:(id)arg3 ;
-(void)addObserver:(id)arg0 ;
-(void)createCredentialInPartition:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)createCredentialResponse:(id)arg0 ;
-(void)credentialIdentifiersInPartitions:(id)arg0 completion:(id)arg1 ;
-(void)deleteCredential:(id)arg0 withConfiguredPartitions:(id)arg1 completion:(id)arg2 ;
-(void)deleteCredentialResponse:(id)arg0 ;
-(void)deleteGlobalAuthACLResponse:(id)arg0 ;
-(void)deleteGlobalAuthACLWithCompletion:(id)arg0 ;
-(void)establishPrearmTrust:(id)arg0 completion:(id)arg1 ;
-(void)establishPrearmTrustResponse:(id)arg0 ;
-(void)fetchPartitionsCredentialIdentifiersResponse:(id)arg0 ;
-(void)fetchPropertiesOfCredentialResponse:(id)arg0 ;
-(void)generateCredentialSigningKeyResponse:(id)arg0 ;
-(void)generateKeyWithType:(NSUInteger)arg0 credentialIdentifier:(id)arg1 withConfiguredPartitions:(id)arg2 completion:(id)arg3 ;
-(void)handleHeartbeats:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)handlePrearmStatusUpdate:(id)arg0 service:(id)arg1 account:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)nonceForAuthorizationTokenResponse:(id)arg0 ;
-(void)nonceForAuthorizationTokenWithCompletion:(id)arg0 ;
-(void)prearmCredentialWithAuthorizationToken:(id)arg0 completion:(id)arg1 ;
-(void)prearmCredentialWithAuthorizationTokenResponse:(id)arg0 ;
-(void)propertiesOfCredential:(id)arg0 withConfiguredPartitions:(id)arg1 completion:(id)arg2 ;
-(void)provisionCredentialResponse:(id)arg0 ;
-(void)provisionCredentialWithType:(NSUInteger)arg0 metadata:(id)arg1 policyIdentifier:(id)arg2 credentialIdentifier:(id)arg3 attestations:(id)arg4 completion:(id)arg5 ;
-(void)removeObserver:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)service:(id)arg0 account:(id)arg1 incomingUnhandledProtobuf:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 activeAccountsChanged:(id)arg1 ;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)startCurrentRemoteDeviceConnection;
-(void)teardownCurrentRemoteDeviceConnection;


@end


#endif