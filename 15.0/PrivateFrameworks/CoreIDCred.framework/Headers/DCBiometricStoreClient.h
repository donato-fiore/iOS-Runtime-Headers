// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DCBIOMETRICSTORECLIENT_H
#define DCBIOMETRICSTORECLIENT_H

@class NSString, NSXPCConnection;
@protocol DCBiometricStoreXPCProtocol;

#import <Foundation/Foundation.h>

#import "DCXPCDisconnectionHandler.h"

@interface DCBiometricStoreClient : NSObject <DCBiometricStoreXPCProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) DCXPCDisconnectionHandler *disconnectionHandler; // ivar: _disconnectionHandler
@property (readonly) NSUInteger hash;
@property (retain) NSObject<DCBiometricStoreXPCProtocol> *remoteObjectProxy; // ivar: _remoteObjectProxy
@property (retain) NSXPCConnection *serverConnection; // ivar: _serverConnection
@property (readonly) Class superclass;


-(id)init;
-(void)bioBindingUnboundACL:(id)arg0 ;
-(void)dealloc;
-(void)deleteGlobalAuthACLWithCompletion:(id)arg0 ;
-(void)establishPrearmTrust:(id)arg0 completion:(id)arg1 ;
-(void)generatePhoneTokenWithNonce:(id)arg0 keyBlob:(id)arg1 pairingID:(id)arg2 completion:(id)arg3 ;
-(void)generatePrearmTrustCertificateWithNonce:(id)arg0 pairingID:(id)arg1 completion:(id)arg2 ;
-(void)globalAuthACLTemplateUUIDsWithCompletion:(id)arg0 ;
-(void)globalAuthACLWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)nonceForAuthorizationTokenWithCompletion:(id)arg0 ;
-(void)passcodeBindingUnboundACL:(id)arg0 ;
-(void)prearmCredentialWithAuthorizationToken:(id)arg0 completion:(id)arg1 ;
-(void)revokeCredentialAuthorizationToken:(id)arg0 ;
-(void)setGlobalAuthACL:(id)arg0 ofType:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)setModifiedGlobalAuthACL:(id)arg0 externalizedLAContext:(id)arg1 completion:(id)arg2 ;


@end


#endif