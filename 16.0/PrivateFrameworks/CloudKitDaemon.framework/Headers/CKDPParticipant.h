// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPPARTICIPANT_H
#define CKDPPARTICIPANT_H

@class PBCodable, CKDPDate, CKDPIdentifier, NSData;
@protocol NSCopying;


#import "CKDPContactInformation.h"
#import "CKDPProtectionInfo.h"

@interface CKDPParticipant : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger acceptTimestamp; // ivar: _acceptTimestamp
@property (nonatomic) BOOL acceptedInProcess; // ivar: _acceptedInProcess
@property (retain, nonatomic) CKDPDate *acceptedTimestampDate; // ivar: _acceptedTimestampDate
@property (retain, nonatomic) CKDPContactInformation *contactInformation; // ivar: _contactInformation
@property (nonatomic) BOOL createdInProcess; // ivar: _createdInProcess
@property (nonatomic) BOOL hasAcceptTimestamp;
@property (nonatomic) BOOL hasAcceptedInProcess;
@property (readonly, nonatomic) BOOL hasAcceptedTimestampDate;
@property (readonly, nonatomic) BOOL hasContactInformation;
@property (nonatomic) BOOL hasCreatedInProcess;
@property (readonly, nonatomic) BOOL hasInviteTimestampDate;
@property (readonly, nonatomic) BOOL hasInviterId;
@property (nonatomic) BOOL hasIsAnonymousInvitedParticipant;
@property (nonatomic) BOOL hasIsInNetwork;
@property (nonatomic) BOOL hasIsOrgUser;
@property (nonatomic) BOOL hasKeyHealth;
@property (nonatomic) BOOL hasOutOfNetworkKeyType;
@property (readonly, nonatomic) BOOL hasOutOfNetworkPrivateKey;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) BOOL hasPermission;
@property (readonly, nonatomic) BOOL hasProtectionInfo;
@property (readonly, nonatomic) BOOL hasProtectionInfoPublicKey;
@property (readonly, nonatomic) BOOL hasPublicKey;
@property (nonatomic) BOOL hasPublicKeyVersion;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasUserId;
@property (retain, nonatomic) CKDPDate *inviteTimestampDate; // ivar: _inviteTimestampDate
@property (retain, nonatomic) CKDPIdentifier *inviterId; // ivar: _inviterId
@property (nonatomic) BOOL isAnonymousInvitedParticipant; // ivar: _isAnonymousInvitedParticipant
@property (nonatomic) BOOL isInNetwork; // ivar: _isInNetwork
@property (nonatomic) BOOL isOrgUser; // ivar: _isOrgUser
@property (nonatomic) int keyHealth; // ivar: _keyHealth
@property (nonatomic) int outOfNetworkKeyType; // ivar: _outOfNetworkKeyType
@property (retain, nonatomic) NSData *outOfNetworkPrivateKey; // ivar: _outOfNetworkPrivateKey
@property (retain, nonatomic) CKDPIdentifier *participantId; // ivar: _participantId
@property (nonatomic) int participantType; // ivar: _participantType
@property (nonatomic) int permission; // ivar: _permission
@property (retain, nonatomic) CKDPProtectionInfo *protectionInfo; // ivar: _protectionInfo
@property (retain, nonatomic) NSData *protectionInfoPublicKey; // ivar: _protectionInfoPublicKey
@property (retain, nonatomic) CKDPProtectionInfo *publicKey; // ivar: _publicKey
@property (nonatomic) int publicKeyVersion; // ivar: _publicKeyVersion
@property (nonatomic) int state; // ivar: _state
@property (retain, nonatomic) CKDPIdentifier *userId; // ivar: _userId


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyHealthAsString:(int)arg0 ;
-(id)participantTypeAsString:(int)arg0 ;
-(id)permissionAsString:(int)arg0 ;
-(id)stateAsString:(int)arg0 ;
-(int)StringAsKeyHealth:(id)arg0 ;
-(int)StringAsParticipantType:(id)arg0 ;
-(int)StringAsPermission:(id)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif