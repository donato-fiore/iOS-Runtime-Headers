// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLESUMMARYSHARINGENTRY_H
#define HDCODABLESUMMARYSHARINGENTRY_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "HDCodableSharingSetupMetadata.h"

@interface HDCodableSummarySharingEntry : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *allContactIdentifiers; // ivar: _allContactIdentifiers
@property (retain, nonatomic) NSMutableArray *authorizationCategories; // ivar: _authorizationCategories
@property (retain, nonatomic) NSString *cloudKitIdentifier; // ivar: _cloudKitIdentifier
@property (nonatomic) CGFloat dateAccepted; // ivar: _dateAccepted
@property (nonatomic) CGFloat dateInvited; // ivar: _dateInvited
@property (nonatomic) CGFloat dateModified; // ivar: _dateModified
@property (nonatomic) int direction; // ivar: _direction
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, nonatomic) BOOL hasCloudKitIdentifier;
@property (nonatomic) BOOL hasDateAccepted;
@property (nonatomic) BOOL hasDateInvited;
@property (nonatomic) BOOL hasDateModified;
@property (nonatomic) BOOL hasDirection;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (readonly, nonatomic) BOOL hasInvitationUUID;
@property (readonly, nonatomic) BOOL hasLastName;
@property (nonatomic) BOOL hasNotificationStatus;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (readonly, nonatomic) BOOL hasPrimaryContactIdentifier;
@property (readonly, nonatomic) BOOL hasSharingSetupMetadata;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUserWheelchairMode;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *invitationUUID; // ivar: _invitationUUID
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (nonatomic) int notificationStatus; // ivar: _notificationStatus
@property (retain, nonatomic) NSData *ownerParticipant; // ivar: _ownerParticipant
@property (retain, nonatomic) NSString *primaryContactIdentifier; // ivar: _primaryContactIdentifier
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations; // ivar: _sharingAuthorizations
@property (retain, nonatomic) HDCodableSharingSetupMetadata *sharingSetupMetadata; // ivar: _sharingSetupMetadata
@property (nonatomic) int status; // ivar: _status
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) int userWheelchairMode; // ivar: _userWheelchairMode
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualFirstName:(id)arg0 lastName:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)allContactIdentifiersAtIndex:(NSUInteger)arg0 ;
-(id)authorizationCategoriesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)directionAsString:(int)arg0 ;
-(id)initWithUUID:(id)arg0 invitationUUID:(id)arg1 cloudKitIdentifier:(id)arg2 primaryContactIdentifier:(id)arg3 allContactIdentifiers:(id)arg4 firstName:(id)arg5 lastName:(id)arg6 sharingAuthorizations:(id)arg7 userWheelchairMode:(NSInteger)arg8 type:(NSInteger)arg9 direction:(NSUInteger)arg10 status:(NSInteger)arg11 notificationStatus:(NSInteger)arg12 dateModified:(id)arg13 dateInvited:(id)arg14 dateAccepted:(id)arg15 setupMetadata:(id)arg16 ownerParticipant:(id)arg17 ;
-(id)notificationStatusAsString:(int)arg0 ;
-(id)shareOwnerParticipant;
-(id)sharingAuthorizationsAtIndex:(NSUInteger)arg0 ;
-(id)sharingEntry;
-(id)sharingRecipientIdentifier;
-(id)statusAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(id)userWheelchairModeAsString:(int)arg0 ;
-(int)StringAsDirection:(id)arg0 ;
-(int)StringAsNotificationStatus:(id)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(int)StringAsUserWheelchairMode:(id)arg0 ;
-(void)addAllContactIdentifiers:(id)arg0 ;
-(void)addAuthorizationCategories:(id)arg0 ;
-(void)addSharingAuthorizations:(id)arg0 ;
-(void)clearAllContactIdentifiers;
-(void)clearAuthorizationCategories;
-(void)clearSharingAuthorizations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif