// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRECORDSTABLEURL_H
#define CKDPRECORDSTABLEURL_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface CKDPRecordStableUrl : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *displayedHostname; // ivar: _displayedHostname
@property (retain, nonatomic) NSData *encryptedPublicSharingKey; // ivar: _encryptedPublicSharingKey
@property (readonly, nonatomic) BOOL hasDisplayedHostname;
@property (readonly, nonatomic) BOOL hasEncryptedPublicSharingKey;
@property (readonly, nonatomic) BOOL hasProtectedFullToken;
@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (retain, nonatomic) NSData *protectedFullToken; // ivar: _protectedFullToken
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey
@property (retain, nonatomic) NSData *shortTokenHash; // ivar: _shortTokenHash


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