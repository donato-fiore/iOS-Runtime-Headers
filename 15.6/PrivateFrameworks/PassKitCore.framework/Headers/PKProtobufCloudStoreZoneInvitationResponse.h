// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFCLOUDSTOREZONEINVITATIONRESPONSE_H
#define PKPROTOBUFCLOUDSTOREZONEINVITATIONRESPONSE_H

@class PBCodable;
@protocol NSCopying;


#import "PKProtobufCloudStoreZoneInvitation.h"

@interface PKProtobufCloudStoreZoneInvitationResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasInvitation;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) PKProtobufCloudStoreZoneInvitation *invitation; // ivar: _invitation
@property (nonatomic) unsigned int status; // ivar: _status
@property (nonatomic) unsigned int version; // ivar: _version


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