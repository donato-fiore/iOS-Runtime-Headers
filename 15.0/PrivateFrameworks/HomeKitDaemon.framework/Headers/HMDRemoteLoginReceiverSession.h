// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGINRECEIVERSESSION_H
#define HMDREMOTELOGINRECEIVERSESSION_H

@class HMFObject, NSString;


#import "HMDRemoteLoginAuthentication.h"

@interface HMDRemoteLoginReceiverSession : HMFObject

@property (readonly, nonatomic) id *completion; // ivar: _completion
@property (readonly, nonatomic) HMDRemoteLoginAuthentication *remoteAuthentication; // ivar: _remoteAuthentication
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID


-(id)description;
-(id)initWithSessionID:(id)arg0 remoteAuthentication:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;


@end


#endif