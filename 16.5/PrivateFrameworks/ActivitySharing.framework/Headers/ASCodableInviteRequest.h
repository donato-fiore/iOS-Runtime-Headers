// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCODABLEINVITEREQUEST_H
#define ASCODABLEINVITEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;


#import "ASCodableActivityDataPreview.h"

@interface ASCodableInviteRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview; // ivar: _activityDataPreview
@property (retain, nonatomic) NSString *handshakeToken; // ivar: _handshakeToken
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (readonly, nonatomic) BOOL hasInviterBuildNumber;
@property (readonly, nonatomic) BOOL hasInviterCallerID;
@property (readonly, nonatomic) BOOL hasInviterCloudKitAddress;
@property (nonatomic) BOOL hasInviterVersion;
@property (retain, nonatomic) NSString *inviterBuildNumber; // ivar: _inviterBuildNumber
@property (retain, nonatomic) NSString *inviterCallerID; // ivar: _inviterCallerID
@property (retain, nonatomic) NSString *inviterCloudKitAddress; // ivar: _inviterCloudKitAddress
@property (nonatomic) unsigned int inviterVersion; // ivar: _inviterVersion


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