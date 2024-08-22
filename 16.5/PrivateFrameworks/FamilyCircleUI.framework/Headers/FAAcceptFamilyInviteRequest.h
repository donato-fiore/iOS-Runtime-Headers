// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAACCEPTFAMILYINVITEREQUEST_H
#define FAACCEPTFAMILYINVITEREQUEST_H

@class AAFamilyRequest, NSString;



@interface FAAcceptFamilyInviteRequest : AAFamilyRequest

@property (copy, nonatomic) NSString *inviteCode; // ivar: _inviteCode


-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;


@end


#endif