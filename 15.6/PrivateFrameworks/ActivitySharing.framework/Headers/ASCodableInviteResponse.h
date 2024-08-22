// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCODABLEINVITERESPONSE_H
#define ASCODABLEINVITERESPONSE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ASCodableActivityDataPreview.h"
#import "ASCodableShareLocations.h"

@interface ASCodableInviteResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // ivar: _activityDataPreview
@property (retain, nonatomic) NSString *handshakeToken; // ivar: _handshakeToken
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (readonly, nonatomic) BOOL hasInviteeBuildNumber;
@property (readonly, nonatomic) BOOL hasInviteeCloudKitAddress;
@property (readonly, nonatomic) BOOL hasInviteeShareLocations;
@property (nonatomic) BOOL hasInviteeVersion;
@property (nonatomic) BOOL hasResponseCode;
@property (retain, nonatomic) NSString *inviteeBuildNumber; // ivar: _inviteeBuildNumber
@property (retain, nonatomic) NSString *inviteeCloudKitAddress; // ivar: _inviteeCloudKitAddress
@property (retain, nonatomic) ASCodableShareLocations *inviteeShareLocations; // ivar: _inviteeShareLocations
@property (nonatomic) unsigned int inviteeVersion; // ivar: _inviteeVersion
@property (nonatomic) int responseCode; // ivar: _responseCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif