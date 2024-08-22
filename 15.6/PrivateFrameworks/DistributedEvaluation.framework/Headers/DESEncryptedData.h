// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESENCRYPTEDDATA_H
#define DESENCRYPTEDDATA_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface DESEncryptedData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *algorithm; // ivar: _algorithm
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (readonly, nonatomic) BOOL hasAlgorithm;
@property (readonly, nonatomic) BOOL hasEncryptedKey;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) int version; // ivar: _version


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