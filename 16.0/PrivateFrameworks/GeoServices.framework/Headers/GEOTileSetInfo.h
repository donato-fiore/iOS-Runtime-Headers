// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTILESETINFO_H
#define GEOTILESETINFO_H

@class PBCodable;
@protocol NSCopying;



@interface GEOTileSetInfo : PBCodable <NSCopying>

 {
    unsigned int _count;
    int _style;
    unsigned int _uncertainty;
    unsigned int _zoom;
    ? _flags;
}


@property (nonatomic) unsigned int count;
@property (nonatomic) BOOL hasCount;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) BOOL hasUncertainty;
@property (nonatomic) BOOL hasZoom;
@property (nonatomic) int style;
@property (nonatomic) unsigned int uncertainty;
@property (nonatomic) unsigned int zoom;


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