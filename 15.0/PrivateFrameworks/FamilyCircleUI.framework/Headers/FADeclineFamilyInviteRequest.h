// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FADECLINEFAMILYINVITEREQUEST_H
#define FADECLINEFAMILYINVITEREQUEST_H

@class AAFamilyRequest, NSString;



@interface FADeclineFamilyInviteRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *inviteCode; // ivar: _inviteCode


-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;


@end


#endif