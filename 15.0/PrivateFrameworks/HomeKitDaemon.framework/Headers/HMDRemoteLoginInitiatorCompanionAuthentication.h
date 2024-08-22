// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGININITIATORCOMPANIONAUTHENTICATION_H
#define HMDREMOTELOGININITIATORCOMPANIONAUTHENTICATION_H

@class ACAccount;


#import "HMDRemoteLoginInitiatorAuthentication.h"

@interface HMDRemoteLoginInitiatorCompanionAuthentication : HMDRemoteLoginInitiatorAuthentication

@property (readonly, nonatomic) ACAccount *account; // ivar: _account


+(id)logCategory;
-(id)description;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 workQueue:(id)arg2 remoteMessageSender:(id)arg3 delegate:(id)arg4 account:(id)arg5 ;
-(int)loginType;
-(void)_authenticate;
-(void)authenticate;
-(void)dealloc;


@end


#endif