// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAUPDATEFAMILYINVITESTATUSREQUEST_H
#define FAUPDATEFAMILYINVITESTATUSREQUEST_H

@class NSString, NSURL;


#import "FAFamilyCircleRequest.h"

@interface FAUpdateFamilyInviteStatusRequest : FAFamilyCircleRequest

@property (readonly, copy) NSString *inviteCode; // ivar: _inviteCode
@property (readonly) NSInteger inviteStatus; // ivar: _inviteStatus
@property (readonly, copy) NSURL *requestUrl; // ivar: _requestUrl


-(id)initWithInviteCode:(id)arg0 inviteStatus:(NSInteger)arg1 requestUrl:(id)arg2 ;
-(void)startRequestWithCompletionHandler:(id)arg0 ;


@end


#endif