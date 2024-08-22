// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDINCOMINGHOMEINVITATION_H
#define HMDINCOMINGHOMEINVITATION_H

@class NSDictionary, NSString, NSUUID, HMFPairingIdentity;


#import "HMDHomeInvitation.h"
#import "HMDAccount.h"

@interface HMDIncomingHomeInvitation : HMDHomeInvitation

@property (readonly, nonatomic) NSDictionary *bulletinContext;
@property (readonly, copy, nonatomic) NSString *homeName;
@property (readonly, copy, nonatomic) NSUUID *homeUUID;
@property (readonly) HMDAccount *inviterAccount; // ivar: _inviterAccount
@property (readonly, copy) HMFPairingIdentity *inviterIdentity; // ivar: _inviterIdentity
@property (readonly, copy, nonatomic) NSString *inviterMergeID; // ivar: _inviterMergeID
@property (readonly, copy, nonatomic) NSString *inviterUserID;


+(BOOL)supportsSecureCoding;
-(BOOL)refreshDisplayName;
-(id)describeWithFormat;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInviterAccount:(id)arg0 invitationIdentifier:(id)arg1 invitationState:(NSInteger)arg2 homeName:(id)arg3 homeUUID:(id)arg4 inviterIdentity:(id)arg5 expiryDate:(id)arg6 ;
-(id)initWithInviterAccount:(id)arg0 invitationIdentifier:(id)arg1 invitationState:(NSInteger)arg2 homeName:(id)arg3 homeUUID:(id)arg4 inviterIdentity:(id)arg5 inviterMergeID:(id)arg6 expiryDate:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif