// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILESETUSAGE_H
#define GEOTILESETUSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface GEOTileSetUsage : PBCodable <NSCopying>

 {
    unsigned int _count;
    int _style;
    ? _flags;
}


@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) int style;


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
-(id)styleAsString:(int)arg0 ;
-(int)StringAsStyle:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif