// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCCREDENTIALSTORECLIENT_H
#define DCCREDENTIALSTORECLIENT_H

@class NSString, NSXPCConnection;
@protocol DCCredentialStoreXPCProtocol;

#import <Foundation/Foundation.h>

#import "DCXPCDisconnectionHandler.h"

@interface DCCredentialStoreClient : NSObject <DCCredentialStoreXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) DCXPCDisconnectionHandler *disconnectionHandler; // ivar: _disconnectionHandler
@property (readonly) NSUInteger hash;
@property (retain) NSObject<DCCredentialStoreXPCProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(id)init;
-(void)allElementsOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)associateExternalPresentmentKeyWithCredential:(id)arg0 publicKeyIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)authorizeRemoteKeySigningKeyWithCredential:(id)arg0 remoteKey:(id)arg1 completion:(id)arg2 ;
-(void)checkCompletenessOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)configureWithPartitions:(id)arg0 completion:(id)arg1 ;
-(void)createCredentialInPartition:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)credentialIdentifierForPublicKeyIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)credentialIdentifiersInPartitions:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)deleteCredential:(id)arg0 completion:(id)arg1 ;
-(void)elementsOfCredential:(id)arg0 elementIdentifiers:(id)arg1 completion:(id)arg2 ;
-(void)eraseLegacySEKeySlot:(NSInteger)arg0 completion:(id)arg1 ;
-(void)generateDeviceEncryptionKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)generateKeySigningKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)generatePresentmentKeyForCredential:(id)arg0 completion:(id)arg1 ;
-(void)invalidate;
-(void)occupiedLegacySEKeySlotsWithCompletion:(id)arg0 ;
-(void)payloadsOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)propertiesOfCredential:(id)arg0 completion:(id)arg1 ;
-(void)replacePayloadOfCredential:(id)arg0 withPayload:(id)arg1 format:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)setStateOfCredential:(id)arg0 to:(NSUInteger)arg1 completion:(id)arg2 ;


@end


#endif