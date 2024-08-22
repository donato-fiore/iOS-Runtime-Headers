// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSHARE_H
#define CKDPSHARE_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol NSCopying;


#import "CKDPProtectionInfo.h"
#import "CKDPShareIdentifier.h"

@interface CKDPShare : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL anonymousPublicAccess; // ivar: _anonymousPublicAccess
@property (retain, nonatomic) NSString *displayedHostname; // ivar: _displayedHostname
@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (nonatomic) BOOL hasAnonymousPublicAccess;
@property (readonly, nonatomic) BOOL hasDisplayedHostname;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasInvitedPcs;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasParticipantSelfRemovalBehavior;
@property (nonatomic) BOOL hasPublicAccess;
@property (nonatomic) BOOL hasPublisherModel;
@property (nonatomic) BOOL hasPublisherModelType;
@property (readonly, nonatomic) BOOL hasSelfAddedPcs;
@property (readonly, nonatomic) BOOL hasShareId;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (readonly, nonatomic) BOOL hasShortTokenRoutingKey;
@property (retain, nonatomic) NSMutableArray *invitedKeyToRemoves; // ivar: _invitedKeyToRemoves
@property (retain, nonatomic) CKDPProtectionInfo *invitedPcs; // ivar: _invitedPcs
@property (retain, nonatomic) NSString *origin; // ivar: _origin
@property (nonatomic) int participantSelfRemovalBehavior; // ivar: _participantSelfRemovalBehavior
@property (retain, nonatomic) NSMutableArray *participants; // ivar: _participants
@property (retain, nonatomic) NSMutableArray *potentialMatchs; // ivar: _potentialMatchs
@property (nonatomic) int publicAccess; // ivar: _publicAccess
@property (nonatomic) BOOL publisherModel; // ivar: _publisherModel
@property (nonatomic) int publisherModelType; // ivar: _publisherModelType
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs; // ivar: _selfAddedPcs
@property (retain, nonatomic) CKDPShareIdentifier *shareId; // ivar: _shareId
@property (retain, nonatomic) NSData *shortTokenHash; // ivar: _shortTokenHash
@property (retain, nonatomic) NSString *shortTokenRoutingKey; // ivar: _shortTokenRoutingKey


+(Class)invitedKeyToRemoveType;
+(Class)participantType;
+(Class)potentialMatchType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)invitedKeyToRemoveAtIndex:(NSUInteger)arg0 ;
-(id)participantAtIndex:(NSUInteger)arg0 ;
-(id)participantSelfRemovalBehaviorAsString:(int)arg0 ;
-(id)potentialMatchAtIndex:(NSUInteger)arg0 ;
-(id)publicAccessAsString:(int)arg0 ;
-(id)publisherModelTypeAsString:(int)arg0 ;
-(int)StringAsParticipantSelfRemovalBehavior:(id)arg0 ;
-(int)StringAsPublicAccess:(id)arg0 ;
-(int)StringAsPublisherModelType:(id)arg0 ;
-(void)addInvitedKeyToRemove:(id)arg0 ;
-(void)addParticipant:(id)arg0 ;
-(void)addPotentialMatch:(id)arg0 ;
-(void)clearInvitedKeyToRemoves;
-(void)clearParticipants;
-(void)clearPotentialMatchs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif