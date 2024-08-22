// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAINVITEFAMILYMEMBERREQUEST_H
#define FAINVITEFAMILYMEMBERREQUEST_H

@class NSString;


#import "FAFamilyRequest.h"

@interface FAInviteFamilyMemberRequest : FAFamilyRequest

@property (copy, nonatomic) NSString *inviteeCompositeName; // ivar: _inviteeCompositeName
@property (copy, nonatomic) NSString *inviteeEmail; // ivar: _inviteeEmail
@property (copy, nonatomic) NSString *inviteeShortName; // ivar: _inviteeShortName


-(BOOL)isUserInitiated;
-(id)_endpoint;
-(id)_queryString;


@end


#endif