// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKADATABASECHANNEL_H
#define SKADATABASECHANNEL_H

@class NSData, MPStatusKitOutgoingRatchet, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SKADatabaseChannel : NSObject

@property (readonly, nonatomic) NSData *channelToken; // ivar: _channelToken
@property (readonly, nonatomic) MPStatusKitOutgoingRatchet *currentOutgoingRatchet;
@property (readonly, nonatomic) NSData *currentOutgoingRatchetState; // ivar: _currentOutgoingRatchetState
@property (retain, nonatomic) NSData *dateChannelCreated; // ivar: _dateChannelCreated
@property (readonly, nonatomic, getter=isDecomissioned) BOOL decomissioned; // ivar: _decomissioned
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *invitedUsers; // ivar: _invitedUsers
@property (readonly, nonatomic, getter=isPersonal) BOOL personal; // ivar: _personal
@property (readonly, copy, nonatomic) NSString *statusType; // ivar: _statusType


+(id)logger;
-(id)description;
-(id)initWithChannelToken:(id)arg0 identifier:(id)arg1 personal:(BOOL)arg2 decomissioned:(BOOL)arg3 currentOutgoingRatchetState:(id)arg4 dateCreated:(id)arg5 statusType:(id)arg6 invitedUsers:(id)arg7 ;
-(id)initWithCoreDataChannels:(id)arg0 ;


@end


#endif