// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCCODABLESHAREDSUMMARYPARTICIPANTRECORD_H
#define HDCLOUDSYNCCODABLESHAREDSUMMARYPARTICIPANTRECORD_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface HDCloudSyncCodableSharedSummaryParticipantRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *allContactIdentifiers; // ivar: _allContactIdentifiers
@property (retain, nonatomic) NSString *authorizationRecordIdentifier; // ivar: _authorizationRecordIdentifier
@property (retain, nonatomic) NSString *cloudKitIdentifier; // ivar: _cloudKitIdentifier
@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (nonatomic) CGFloat entryAcceptanceDate; // ivar: _entryAcceptanceDate
@property (nonatomic) CGFloat entryInvitationDate; // ivar: _entryInvitationDate
@property (nonatomic) CGFloat entryModificationDate; // ivar: _entryModificationDate
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) BOOL hasAuthorizationRecordIdentifier;
@property (readonly, nonatomic) BOOL hasCloudKitIdentifier;
@property (readonly, nonatomic) BOOL hasContactIdentifier;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) BOOL hasEntryAcceptanceDate;
@property (nonatomic) BOOL hasEntryInvitationDate;
@property (nonatomic) BOOL hasEntryModificationDate;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasInvitationUUID;
@property (readonly, nonatomic) BOOL hasLastName;
@property (nonatomic) BOOL hasNotificationStatus;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (readonly, nonatomic) BOOL hasSetupMetadata;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUserWheelchairMode;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *invitationUUID; // ivar: _invitationUUID
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) NSInteger notificationStatus; // ivar: _notificationStatus
@property (retain, nonatomic) NSData *ownerParticipant; // ivar: _ownerParticipant
@property (retain, nonatomic) NSData *setupMetadata; // ivar: _setupMetadata
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) NSInteger userWheelchairMode; // ivar: _userWheelchairMode
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allContactIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAllContactIdentifiers:(id)arg0 ;
-(void)clearAllContactIdentifiers;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif