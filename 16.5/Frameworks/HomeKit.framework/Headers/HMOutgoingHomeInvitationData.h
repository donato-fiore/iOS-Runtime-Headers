// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMOUTGOINGHOMEINVITATIONDATA_H
#define HMOUTGOINGHOMEINVITATIONDATA_H

@class NSString, NSUUID;


#import "HMHomeInvitationData.h"

@interface HMOutgoingHomeInvitationData : HMHomeInvitationData {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSString *inviteeName; // ivar: _inviteeName
@property (readonly, copy, nonatomic) NSUUID *inviteeUUID; // ivar: _inviteeUUID
@property (readonly, copy, nonatomic) NSString *inviteeUserID; // ivar: _inviteeUserID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 inviteeUserID:(id)arg1 inviteeName:(id)arg2 invitationState:(NSInteger)arg3 expiryDate:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif