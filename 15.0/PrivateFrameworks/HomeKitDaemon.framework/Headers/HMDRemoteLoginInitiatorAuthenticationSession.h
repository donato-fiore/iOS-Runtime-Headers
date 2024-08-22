// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGININITIATORAUTHENTICATIONSESSION_H
#define HMDREMOTELOGININITIATORAUTHENTICATIONSESSION_H



#import "HMDRemoteLoginInitiatorSession.h"
#import "HMDRemoteLoginInitiatorAuthentication.h"

@interface HMDRemoteLoginInitiatorAuthenticationSession : HMDRemoteLoginInitiatorSession

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) HMDRemoteLoginInitiatorAuthentication *remoteAuthentication; // ivar: _remoteAuthentication


-(id)description;
// -(id)initWithSessionID:(id)arg0 remoteAuthentication:(id)arg1 completion:(id)arg2 home:(unk)arg3  ;
-(void)dealloc;


@end


#endif