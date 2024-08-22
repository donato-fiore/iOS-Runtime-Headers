// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOATTRIBUTE_H
#define GEOATTRIBUTE_H

@class PBCodable, PBUnknownFields;
@protocol NSCopying;



@interface GEOAttribute : PBCodable <NSCopying>

 {
    PBUnknownFields *_unknownFields;
    int _key;
    unsigned int _value;
    ? _flags;
}


@property (nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int key;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int value;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)keyAsString:(int)arg0 ;
-(int)StringAsKey:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif