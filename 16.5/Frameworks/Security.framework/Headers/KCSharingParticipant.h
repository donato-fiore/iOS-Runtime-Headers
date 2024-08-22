// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KCSHARINGPARTICIPANT_H
#define KCSHARINGPARTICIPANT_H

@class NSDictionary, NSString, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "KCSharingParticipant.h"

@interface KCSharingParticipant : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSInteger inviteStatus; // ivar: _inviteStatus
@property (readonly, weak, nonatomic) KCSharingParticipant *invitedBy; // ivar: _invitedBy
@property (readonly, nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (readonly, nonatomic) BOOL isOwner;
@property (readonly, copy, nonatomic) NSString *longDescription;
@property (readonly, copy, nonatomic) NSString *participantID; // ivar: _participantID
@property (nonatomic) NSInteger permissionLevel; // ivar: _permissionLevel
@property (readonly, nonatomic) NSData *sharingInvitationData; // ivar: _sharingInvitationData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHandle:(id)arg0 permissionLevel:(NSInteger)arg1 ;
-(id)initWithParticipantID:(id)arg0 handle:(id)arg1 permissionLevel:(NSInteger)arg2 isCurrentUser:(BOOL)arg3 inviteStatus:(NSInteger)arg4 sharingInvitationData:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif