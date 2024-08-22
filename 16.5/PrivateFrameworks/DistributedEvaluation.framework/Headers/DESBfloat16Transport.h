// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESBFLOAT16TRANSPORT_H
#define DESBFLOAT16TRANSPORT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface DESBfloat16Transport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int count; // ivar: _count
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) BOOL hasCount;
@property (readonly, nonatomic) BOOL hasData;


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