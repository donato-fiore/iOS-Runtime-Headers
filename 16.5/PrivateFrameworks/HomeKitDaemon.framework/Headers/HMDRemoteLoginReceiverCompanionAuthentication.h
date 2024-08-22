// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTELOGINRECEIVERCOMPANIONAUTHENTICATION_H
#define HMDREMOTELOGINRECEIVERCOMPANIONAUTHENTICATION_H



#import "HMDRemoteLoginReceiverAuthentication.h"
#import "HMDRemoteLoginCompanionAuthenticationRequest.h"

@interface HMDRemoteLoginReceiverCompanionAuthentication : HMDRemoteLoginReceiverAuthentication

@property (readonly, nonatomic) HMDRemoteLoginCompanionAuthenticationRequest *request; // ivar: _request


+(id)logCategory;
-(id)description;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 workQueue:(id)arg2 remoteMessageSender:(id)arg3 delegate:(id)arg4 request:(id)arg5 ;
-(void)_authenticate;
-(void)_authenticateAccount:(id)arg0 alreadyExists:(BOOL)arg1 withCompanionDevice:(id)arg2 ;
-(void)authenticate;
-(void)dealloc;


@end


#endif