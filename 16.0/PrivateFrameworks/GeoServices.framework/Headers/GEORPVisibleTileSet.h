// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORPVISIBLETILESET_H
#define GEORPVISIBLETILESET_H

@class PBCodable;
@protocol NSCopying;



@interface GEORPVisibleTileSet : PBCodable <NSCopying>

 {
    *GEORPVisibleTileKey _tileKeys;
    NSUInteger _tileKeysCount;
    NSUInteger _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    ? _flags;
}


@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasStyle;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int style;
@property (readonly, nonatomic) *GEORPVisibleTileKey tileKeys;
@property (readonly, nonatomic) NSUInteger tileKeysCount;


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
-(struct GEORPVisibleTileKey )tileKeyAtIndex:(NSUInteger)arg0 ;
-(void)addTileKey:(struct GEORPVisibleTileKey )arg0 ;
-(void)clearTileKeys;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif