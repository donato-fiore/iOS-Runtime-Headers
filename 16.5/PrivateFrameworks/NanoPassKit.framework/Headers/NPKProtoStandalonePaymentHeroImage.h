// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEPAYMENTHEROIMAGE_H
#define NPKPROTOSTANDALONEPAYMENTHEROIMAGE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentHeroImage : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasImageData;
@property (readonly, nonatomic) BOOL hasImageHash;
@property (readonly, nonatomic) BOOL hasImageURL;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSData *imageData; // ivar: _imageData
@property (retain, nonatomic) NSString *imageHash; // ivar: _imageHash
@property (retain, nonatomic) NSString *imageURL; // ivar: _imageURL


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