// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTELOGINRECEIVERAUTHENTICATION_H
#define HMDREMOTELOGINRECEIVERAUTHENTICATION_H

@protocol HMDRemoteLoginReceiverAuthenticationDelegate;


#import "HMDRemoteLoginAuthentication.h"

@interface HMDRemoteLoginReceiverAuthentication : HMDRemoteLoginAuthentication

@property (readonly, weak, nonatomic) NSObject<HMDRemoteLoginReceiverAuthenticationDelegate> *delegate; // ivar: _delegate


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 workQueue:(id)arg2 remoteMessageSender:(id)arg3 delegate:(id)arg4 ;
-(void)_authenticateAccount:(id)arg0 targetedAccountType:(NSUInteger)arg1 ;
-(void)_authenticateForAccountType:(NSUInteger)arg0 usingAuthenticationResults:(id)arg1 completionHandler:(id)arg2 ;
-(void)_authenticateStoreWithAuthenticationResults:(id)arg0 completionHandler:(id)arg1 ;
-(void)_completedAuthenticationRequest:(id)arg0 loggedInAccount:(id)arg1 ;
-(void)_handleAuthenticationResults:(id)arg0 error:(id)arg1 targetedAccountType:(NSUInteger)arg2 ;
-(void)_saveRemoteVerifiedAccount:(id)arg0 completion:(id)arg1 ;


@end


#endif