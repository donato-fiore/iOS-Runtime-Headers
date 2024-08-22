// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLESHARINGSETUPMETADATA_H
#define HDCODABLESHARINGSETUPMETADATA_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface HDCodableSharingSetupMetadata : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasOwnerCloudKitEmailAddress;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (readonly, nonatomic) BOOL hasShareParticipant;
@property (readonly, nonatomic) BOOL hasSourceProfileIdentifier;
@property (readonly, nonatomic) BOOL hasSyncCircleIdentifier;
@property (retain, nonatomic) NSMutableArray *invitationTokens; // ivar: _invitationTokens
@property (retain, nonatomic) NSString *ownerCloudKitEmailAddress; // ivar: _ownerCloudKitEmailAddress
@property (retain, nonatomic) NSData *ownerParticipant; // ivar: _ownerParticipant
@property (retain, nonatomic) NSData *shareParticipant; // ivar: _shareParticipant
@property (retain, nonatomic) NSData *sourceProfileIdentifier; // ivar: _sourceProfileIdentifier
@property (retain, nonatomic) NSString *syncCircleIdentifier; // ivar: _syncCircleIdentifier


+(Class)invitationTokenType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)invitationTokenAtIndex:(NSUInteger)arg0 ;
-(void)addInvitationToken:(id)arg0 ;
-(void)clearInvitationTokens;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif