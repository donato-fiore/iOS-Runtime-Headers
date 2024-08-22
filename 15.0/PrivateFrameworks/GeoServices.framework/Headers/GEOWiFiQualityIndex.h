// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOWIFIQUALITYINDEX_H
#define GEOWIFIQUALITYINDEX_H

@class PBCodable;
@protocol NSCopying;



@interface GEOWiFiQualityIndex : PBCodable <NSCopying>

 {
    int _type;
    unsigned int _value;
    ? _flags;
}


@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int type;
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
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif