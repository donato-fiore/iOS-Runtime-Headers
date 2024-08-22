// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMOUTGOINGHOMEINVITATION_H
#define HMOUTGOINGHOMEINVITATION_H

@class NSArray, NSDictionary;


#import "HMHomeInvitation.h"
#import "HMMutableArray.h"
#import "HMUser.h"

@interface HMOutgoingHomeInvitation : HMHomeInvitation {
    HMMutableArray *_accessoryInvitations;
}


@property (readonly, nonatomic) NSArray *accessoryInvitations;
@property (readonly, copy) NSDictionary *appleSharingDict;
@property (readonly, nonatomic) HMUser *invitee; // ivar: _invitee


+(BOOL)supportsSecureCoding;
+(id)homeInvitationsFromData:(id)arg0 home:(id)arg1 ;
+(id)homeInvitationsFromEncodedData:(id)arg0 home:(id)arg1 ;
-(BOOL)_mergeWithNewAccessoryInvitations:(id)arg0 ;
-(BOOL)_mergeWithNewObject:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInvitationData:(id)arg0 home:(id)arg1 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_cancelInviteWithCompletionHandler:(id)arg0 ;
-(void)_unconfigure;
-(void)_unconfigureContext;
-(void)cancelInviteWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif