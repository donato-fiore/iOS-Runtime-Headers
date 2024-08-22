// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTELOGININITIATORPROXYAUTHENTICATION_H
#define HMDREMOTELOGININITIATORPROXYAUTHENTICATION_H

@class NSDictionary;


#import "HMDRemoteLoginInitiatorAuthentication.h"

@interface HMDRemoteLoginInitiatorProxyAuthentication : HMDRemoteLoginInitiatorAuthentication

@property (readonly, nonatomic) NSDictionary *authResults; // ivar: _authResults


+(id)logCategory;
-(id)description;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 workQueue:(id)arg2 remoteMessageSender:(id)arg3 delegate:(id)arg4 authResults:(id)arg5 ;
-(int)loginType;
-(void)_authenticate;
-(void)authenticate;
-(void)dealloc;


@end


#endif