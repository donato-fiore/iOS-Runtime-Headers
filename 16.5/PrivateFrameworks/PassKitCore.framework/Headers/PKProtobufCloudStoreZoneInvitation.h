// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPROTOBUFCLOUDSTOREZONEINVITATION_H
#define PKPROTOBUFCLOUDSTOREZONEINVITATION_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PKProtobufCloudStoreZoneInvitation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (nonatomic) CGFloat dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) BOOL hasContainerIdentifier;
@property (nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) BOOL hasShareInvitationToken;
@property (readonly, nonatomic) BOOL hasShareURL;
@property (readonly, nonatomic) BOOL hasZoneName;
@property (retain, nonatomic) NSData *shareInvitationToken; // ivar: _shareInvitationToken
@property (retain, nonatomic) NSString *shareURL; // ivar: _shareURL
@property (nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) NSString *zoneName; // ivar: _zoneName


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