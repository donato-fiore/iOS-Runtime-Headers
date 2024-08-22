// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POSERVICELOGINMANAGERCONNECTION_H
#define POSERVICELOGINMANAGERCONNECTION_H

@class NSString, NSXPCConnection;
@protocol POServiceLoginManagerProtocol;

#import <Foundation/Foundation.h>


@interface POServiceLoginManagerConnection : NSObject <POServiceLoginManagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)xpcQueue;
-(BOOL)_connectToService;
-(id)init;
-(void)attestKey:(NSInteger)arg0 clientDataHash:(id)arg1 completion:(id)arg2 ;
-(void)copyDeviceAttestationCertificateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deviceRegistrationsNeedsRepairWithCompletion:(id)arg0 ;
-(void)invalidate;
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