// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFSUBCREDENTIALINVITATIONMESSAGE_H
#define PKPROTOBUFSUBCREDENTIALINVITATIONMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface PKProtobufSubcredentialInvitationMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *dataString; // ivar: _dataString
@property (readonly, nonatomic) BOOL hasDataString;
@property (readonly, nonatomic) BOOL hasPassThumbnailImage;
@property (readonly, nonatomic) BOOL hasPhoneInvitation;
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasWatchInvitation;
@property (retain, nonatomic) NSData *passThumbnailImage; // ivar: _passThumbnailImage
@property (retain, nonatomic) NSString *phoneInvitation; // ivar: _phoneInvitation
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) NSString *watchInvitation; // ivar: _watchInvitation


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif