// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMINCOMINGHOMEINVITATIONDATA_H
#define HMINCOMINGHOMEINVITATIONDATA_H

@class NSString, NSUUID;


#import "HMHomeInvitationData.h"

@interface HMIncomingHomeInvitationData : HMHomeInvitationData {
    os_unfair_lock_s _lock;
}


@property (readonly, copy, nonatomic) NSString *homeName; // ivar: _homeName
@property (readonly, copy, nonatomic) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly, copy, nonatomic) NSString *inviterMergeID; // ivar: _inviterMergeID
@property (copy, nonatomic) NSString *inviterName; // ivar: _inviterName
@property (readonly, copy, nonatomic) NSUUID *inviterUUID; // ivar: _inviterUUID
@property (readonly, nonatomic) NSString *inviterUserID; // ivar: _inviterUserID


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInviterUserID:(id)arg0 invitationIdentifier:(id)arg1 inviterName:(id)arg2 invitationState:(NSInteger)arg3 homeName:(id)arg4 homeUUID:(id)arg5 expiryDate:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif