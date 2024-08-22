// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAFAMILYSETUPBUDDYMLREQUEST_H
#define FAFAMILYSETUPBUDDYMLREQUEST_H

@class AAFamilyRequest, ACAccount, NSString;



@interface FAFamilySetupBuddyMLRequest : AAFamilyRequest

@property (retain, nonatomic, setter=setiTunesAccount:) ACAccount *iTunesAccount; // ivar: _iTunesAccount
@property (copy, nonatomic) NSString *inviteCode; // ivar: _inviteCode


-(BOOL)isUserInitiated;
-(id)urlRequest;
-(id)urlString;


@end


#endif