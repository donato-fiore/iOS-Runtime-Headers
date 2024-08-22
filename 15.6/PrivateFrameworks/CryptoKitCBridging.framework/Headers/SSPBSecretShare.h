// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPBSECRETSHARE_H
#define SSPBSECRETSHARE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface SSPBSecretShare : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *associatedData; // ivar: _associatedData
@property (retain, nonatomic) NSData *ciphertext; // ivar: _ciphertext
@property (readonly, nonatomic) BOOL hasAssociatedData;
@property (nonatomic) BOOL hasThreshold;
@property (retain, nonatomic) NSData *iv; // ivar: _iv
@property (nonatomic) unsigned int shareX; // ivar: _shareX
@property (retain, nonatomic) NSData *shareY; // ivar: _shareY
@property (retain, nonatomic) NSData *tag; // ivar: _tag
@property (nonatomic) unsigned int threshold; // ivar: _threshold
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