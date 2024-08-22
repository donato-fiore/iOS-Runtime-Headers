// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTPBROUNDING_H
#define PPTPBROUNDING_H

@class PBCodable;
@protocol NSCopying;



@interface PPTPBRounding : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int type; // ivar: _type
@property (nonatomic) NSUInteger value; // ivar: _value


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