// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGININITIATOR_H
#define HMDREMOTELOGININITIATOR_H

@class NSString;
@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;


#import "HMDRemoteLoginBase.h"
#import "HMDRemoteLoginAnisetteDataProviderBridge.h"
#import "HMDRemoteLoginInitiatorSession.h"
#import "HMDRemoteLoginMessageSender.h"

@interface HMDRemoteLoginInitiator : HMDRemoteLoginBase <HMDRemoteLoginInitiatorAuthenticationDelegate>



@property (retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge; // ivar: _anisetteProviderBridge
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession; // ivar: _loginSession
@property (retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // ivar: _remoteMessageSender
@property (readonly) Class superclass;


+(BOOL)hasMessageReceiverChildren;
+(id)logCategory;
-(id)initWithUUID:(id)arg0 accessory:(id)arg1 remoteLoginHandler:(id)arg2 ;
-(id)messageReceiverChildren;
-(void)_callCompletion:(id)arg0 loggedInAccount:(id)arg1 authSession:(id)arg2 ;
-(void)_companionLoginWithSessionID:(id)arg0 account:(id)arg1 remoteDevice:(id)arg2 completion:(id)arg3 ;
-(void)_handleProxyDeviceResponse:(id)arg0 error:(id)arg1 message:(id)arg2 ;
-(void)_handleRemoteLoginCompanionAuthentication:(id)arg0 ;
-(void)_handleRemoteLoginProxiedDevice:(id)arg0 ;
-(void)_handleRemoteLoginProxyAuthentication:(id)arg0 ;
-(void)_handleRemoteLoginSignout:(id)arg0 ;
-(void)_handleSignoutResponse:(id)arg0 error:(id)arg1 message:(id)arg2 ;
-(void)_proxyLoginWithSessionID:(id)arg0 authResults:(id)arg1 remoteDevice:(id)arg2 completion:(id)arg3 ;
-(void)_resetCurrentSession:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)didCompleteAuthentication:(id)arg0 error:(id)arg1 loggedInAccount:(id)arg2 ;
-(void)registerForMessages;


@end


#endif