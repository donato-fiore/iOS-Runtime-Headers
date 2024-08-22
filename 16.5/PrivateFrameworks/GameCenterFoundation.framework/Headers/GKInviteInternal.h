// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKINVITEINTERNAL_H
#define GKINVITEINTERNAL_H

@class NSString, NSNumber, NSDictionary, NSData;


#import "GKInternalRepresentation.h"
#import "GKPlayerInternal.h"

@interface GKInviteInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (nonatomic) NSNumber *declineReason; // ivar: _declineReason
@property (retain, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (retain, nonatomic) NSString *inviteID; // ivar: _inviteID
@property (nonatomic) BOOL isMessageBasedInvite; // ivar: _isMessageBasedInvite
@property (readonly, nonatomic) BOOL isNearby;
@property (retain, nonatomic) NSDictionary *localizableMessage; // ivar: _localizableMessage
@property (nonatomic) NSUInteger matchType; // ivar: _matchType
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *participantID; // ivar: _participantID
@property (retain, nonatomic) NSData *peerBlob; // ivar: _peerBlob
@property (retain, nonatomic) NSString *peerID; // ivar: _peerID
@property (retain, nonatomic) NSData *peerNATIP; // ivar: _peerNATIP
@property (nonatomic) NSInteger peerNATType; // ivar: _peerNATType
@property (retain, nonatomic) NSData *peerPushToken; // ivar: _peerPushToken
@property (retain, nonatomic) GKPlayerInternal *player; // ivar: _player
@property (nonatomic) unsigned int playerAttributes; // ivar: _playerAttributes
@property (nonatomic) NSUInteger playerGroup; // ivar: _playerGroup
@property (retain, nonatomic) NSString *rid; // ivar: _rid
@property (retain, nonatomic) NSData *sessionToken; // ivar: _sessionToken
@property (nonatomic) unsigned char version; // ivar: _version


+(id)inviteFromNearbyPlayer:(id)arg0 participantID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 connectionData:(id)arg4 ;
+(id)inviteWithBulletin:(id)arg0 ;
+(id)nearbyInviteIDForPlayerID:(id)arg0 deviceID:(id)arg1 bundleID:(id)arg2 ;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)descriptionSubstitutionMap;
-(id)init;


@end


#endif