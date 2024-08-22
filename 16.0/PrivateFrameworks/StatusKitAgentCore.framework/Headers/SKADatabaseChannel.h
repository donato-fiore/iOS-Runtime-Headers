// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKADATABASECHANNEL_H
#define SKADATABASECHANNEL_H

@class NSData, MPStatusKitOutgoingRatchet, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SKADatabaseChannel : NSObject

@property (readonly, nonatomic) NSData *channelToken; // ivar: _channelToken
@property (readonly, nonatomic) NSInteger channelType; // ivar: _channelType
@property (readonly, nonatomic) MPStatusKitOutgoingRatchet *currentOutgoingRatchet;
@property (readonly, nonatomic) NSData *currentOutgoingRatchetState; // ivar: _currentOutgoingRatchetState
@property (retain, nonatomic) NSData *dateChannelCreated; // ivar: _dateChannelCreated
@property (readonly, nonatomic, getter=isDecomissioned) BOOL decomissioned; // ivar: _decomissioned
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *invitedUsers; // ivar: _invitedUsers
@property (readonly, nonatomic, getter=isPersonal) BOOL personal; // ivar: _personal
@property (readonly, copy, nonatomic) NSString *presenceIdentifier; // ivar: _presenceIdentifier
@property (readonly, nonatomic) NSData *presenceMembershipKey; // ivar: _presenceMembershipKey
@property (readonly, nonatomic) NSData *presencePeerKey; // ivar: _presencePeerKey
@property (readonly, nonatomic) NSData *presenceServerKey; // ivar: _presenceServerKey
@property (readonly, copy, nonatomic) NSString *statusType; // ivar: _statusType


+(id)logger;
-(id)description;
-(id)initWithChannelToken:(id)arg0 channelType:(NSInteger)arg1 identifier:(id)arg2 personal:(BOOL)arg3 decomissioned:(BOOL)arg4 currentOutgoingRatchetState:(id)arg5 dateCreated:(id)arg6 statusType:(id)arg7 presenceIdentifier:(id)arg8 invitedUsers:(id)arg9 presenceServerKey:(id)arg10 presencePeerKey:(id)arg11 presenceMembershipKey:(id)arg12 ;
-(id)initWithCoreDataChannels:(id)arg0 ;


@end


#endif