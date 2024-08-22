// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUCONVERSATIONACTIVITYSESSIONCONTAINER_H
#define TUCONVERSATIONACTIVITYSESSIONCONTAINER_H

@class NSUUID, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TUHandle.h"
#import "TUConversationMember.h"
#import "TUConversationVirtualParticipantConfig.h"

@interface TUConversationActivitySessionContainer : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (copy, nonatomic) NSSet *activeRemoteParticipants; // ivar: _activeRemoteParticipants
@property (copy, nonatomic) NSSet *activitySessions; // ivar: _activitySessions
@property (retain, nonatomic) NSUUID *groupUUID; // ivar: _groupUUID
@property (retain, nonatomic) TUHandle *initiator; // ivar: _initiator
@property (retain, nonatomic) TUConversationMember *localMember; // ivar: _localMember
@property (nonatomic) NSUInteger localParticipantIdentifier; // ivar: _localParticipantIdentifier
@property (copy, nonatomic) NSSet *remoteMembers; // ivar: _remoteMembers
@property (nonatomic) NSInteger state; // ivar: _state
@property (copy, nonatomic) TUConversationVirtualParticipantConfig *virtualParticipantConfig; // ivar: _virtualParticipantConfig
@property (copy, nonatomic) NSSet *virtualParticipants; // ivar: _virtualParticipants


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif