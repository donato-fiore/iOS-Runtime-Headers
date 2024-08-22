// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMINCOMINGHOMEINVITATION_H
#define HMINCOMINGHOMEINVITATION_H

@class NSString, NSUUID;


#import "HMHomeInvitation.h"
#import "HMHomeManager.h"
#import "HMUser.h"

@interface HMIncomingHomeInvitation : HMHomeInvitation

@property (weak, nonatomic) HMHomeManager *homeManager; // ivar: _homeManager
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) HMUser *inviter; // ivar: _inviter


+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromData:(id)arg0 homeManager:(id)arg1 ;
+(id)homeInvitationsFromEncodedData:(id)arg0 homeManager:(id)arg1 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(BOOL)isForPKSharingMessageInvitationWithAppleSharingDict:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationData:(id)arg0 homeManager:(id)arg1 ;
-(void)__configureWithContext:(id)arg0 homeManager:(id)arg1 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)acceptInviteWithCompletionHandler:(id)arg0 ;
-(void)acceptInviteWithPresenceAuthStatus:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)cancelInviteWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)ignoreInviteWithCompletionHandler:(id)arg0 ;
-(void)reportJunkInviteWithCompletionHandler:(id)arg0 ;


@end


#endif