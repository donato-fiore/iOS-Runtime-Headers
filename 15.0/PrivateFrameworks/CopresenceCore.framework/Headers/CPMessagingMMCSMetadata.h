// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGINGMMCSMETADATA_H
#define CPMESSAGINGMMCSMETADATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CPMessagingMMCSMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *encryptionKey; // ivar: _encryptionKey
@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (readonly, nonatomic) BOOL hasOwnerID;
@property (readonly, nonatomic) BOOL hasSignature;
@property (readonly, nonatomic) BOOL hasTransferUUID;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *ownerID; // ivar: _ownerID
@property (retain, nonatomic) NSData *signature; // ivar: _signature
@property (retain, nonatomic) NSString *transferUUID; // ivar: _transferUUID
@property (retain, nonatomic) NSString *url; // ivar: _url


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