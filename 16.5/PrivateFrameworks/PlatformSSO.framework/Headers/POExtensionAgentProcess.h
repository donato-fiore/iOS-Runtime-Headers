// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POEXTENSIONAGENTPROCESS_H
#define POEXTENSIONAGENTPROCESS_H

@class NSXPCConnection, NSMutableDictionary, SOConfigurationHost, NSString, NSMutableArray;
@protocol POServiceLoginManagerProtocol;

#import <Foundation/Foundation.h>

#import "POAgentAuthenticationProcess.h"
#import "POConfigurationManager.h"

@interface POExtensionAgentProcess : NSObject <POServiceLoginManagerProtocol>

 {
    NSXPCConnection *_xpcConnection;
}


@property (retain) NSMutableDictionary *_analytics; // ivar: __analytics
@property (retain) POAgentAuthenticationProcess *agentProcess; // ivar: _agentProcess
@property (copy) id *authenticationCompletion; // ivar: _authenticationCompletion
@property (retain) NSObject *authenticationObserver; // ivar: _authenticationObserver
@property (retain) SOConfigurationHost *configurationHost; // ivar: _configurationHost
@property (retain) POConfigurationManager *configurationManager; // ivar: _configurationManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain) NSMutableArray *keyProxies; // ivar: _keyProxies
@property (readonly) Class superclass;


-(BOOL)isCallerCurrentSSOExtension;
-(BOOL)isURL:(id)arg0 validForProfile:(id)arg1 ;
-(id)bundleIdentiferForXPCConnection:(id)arg0 ;
-(id)identityForKeyType:(NSInteger)arg0 ;
-(id)initWithXPCConnection:(id)arg0 authenticationProcess:(id)arg1 ;
-(id)keyProxyEndpointForKeyType:(NSInteger)arg0 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvent:(id)arg0 forKeyType:(NSInteger)arg1 ;
-(void)attestKey:(NSInteger)arg0 clientDataHash:(id)arg1 completion:(id)arg2 ;
-(void)connectionInvalidated;
-(void)copyDeviceAttestationCertificateWithCompletion:(id)arg0 ;
-(void)deviceRegistrationsNeedsRepairWithCompletion:(id)arg0 ;
-(void)invalidateAllKeyProxies;
-(void)isDeviceRegisteredWithCompletion:(id)arg0 ;
-(void)isUserRegisteredWithCompletion:(id)arg0 ;
-(void)loginConfigurationWithCompletion:(id)arg0 ;
-(void)loginUserNameWithCompletion:(id)arg0 ;
-(void)presentRegistrationViewControllerWithCompletion:(id)arg0 ;
-(void)registrationTokenWithCompletion:(id)arg0 ;
-(void)resetKeysWithCompletion:(id)arg0 ;
-(void)secIdentityProxyEndpointForKeyType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)secKeyProxyEndpointForKeyType:(NSInteger)arg0 completion:(id)arg1 ;
-(void)setCertificateData:(id)arg0 keyType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setLoginConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)setLoginUserName:(id)arg0 completion:(id)arg1 ;
-(void)setRegistrationToken:(id)arg0 completion:(id)arg1 ;
-(void)setSsoTokens:(id)arg0 completion:(id)arg1 ;
-(void)ssoTokensWithCompletion:(id)arg0 ;
-(void)userNeedsReauthenticationWithCompletion:(id)arg0 ;
-(void)userRegistrationsNeedsRepairWithCompletion:(id)arg0 ;


@end


#endif