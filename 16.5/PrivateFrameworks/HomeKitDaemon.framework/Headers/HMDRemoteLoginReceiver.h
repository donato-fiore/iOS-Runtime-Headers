// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTELOGINRECEIVER_H
#define HMDREMOTELOGINRECEIVER_H

@class NSString;
@protocol HMDRemoteLoginReceiverAuthenticationDelegate;


#import "HMDRemoteLoginBase.h"
#import "HMDRemoteLoginReceiverSession.h"

@interface HMDRemoteLoginReceiver : HMDRemoteLoginBase <HMDRemoteLoginReceiverAuthenticationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // ivar: _loginSession
@property (readonly) Class superclass;


+(id)logCategory;
-(void)_auditLoggedInAccountFor:(id)arg0 ;
-(void)_authenticate:(id)arg0 message:(id)arg1 ;
-(void)_callCompletion:(id)arg0 ;
-(void)_handleACAccountDidChangeNotification:(id)arg0 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg0 ;
-(void)_handleProxyAuthenticationRequest:(id)arg0 ;
-(void)_handleProxyDeviceRequest:(id)arg0 ;
-(void)_handleSignoutRequest:(id)arg0 ;
-(void)auditLoggedInAccount;
-(void)auditLoggedInAccountFor:(id)arg0 ;
-(void)configureWithWorkQueue:(id)arg0 messageDispatcher:(id)arg1 ;
-(void)didCompleteAuthentication:(id)arg0 response:(id)arg1 ;
-(void)registerForMessages;
-(void)registerForNotifications;


@end


#endif