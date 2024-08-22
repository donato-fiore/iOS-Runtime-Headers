// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGININITIATORAUTHENTICATION_H
#define HMDREMOTELOGININITIATORAUTHENTICATION_H

@protocol HMDRemoteLoginInitiatorAuthenticationDelegate;


#import "HMDRemoteLoginAuthentication.h"

@interface HMDRemoteLoginInitiatorAuthentication : HMDRemoteLoginAuthentication

@property (readonly, weak, nonatomic) NSObject<HMDRemoteLoginInitiatorAuthenticationDelegate> *delegate; // ivar: _delegate


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 workQueue:(id)arg2 remoteMessageSender:(id)arg3 delegate:(id)arg4 ;
-(int)loginType;
-(void)_handleAuthenticationResponse:(id)arg0 error:(id)arg1 ;
-(void)authenticate;


@end


#endif