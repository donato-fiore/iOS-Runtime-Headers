// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOTILEGROUP_H
#define GEOTILEGROUP_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;



@interface GEOTileGroup : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _attributionIndexs;
    ? _fontIndexs;
    *GEOTileSetRegion _hybridUnavailableRegions;
    NSUInteger _hybridUnavailableRegionsCount;
    NSUInteger _hybridUnavailableRegionsSpace;
    ? _iconIndexs;
    *GEORegionalResourceIndex _regionalResourceIndexs;
    NSUInteger _regionalResourceIndexsCount;
    NSUInteger _regionalResourceIndexsSpace;
    ? _resourceIndexs;
    ? _styleSheetIndexs;
    ? _textureIndexs;
    *GEOVersionedTileSet _tileSets;
    NSUInteger _tileSetsCount;
    NSUInteger _tileSetsSpace;
    ? _xmlIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _muninVersionIndex;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int attributionIndexs;
@property (readonly, nonatomic) NSUInteger attributionIndexsCount;
@property (readonly, nonatomic) *unsigned int fontIndexs;
@property (readonly, nonatomic) NSUInteger fontIndexsCount;
@property (nonatomic) BOOL hasMuninVersionIndex;
@property (readonly, nonatomic) *GEOTileSetRegion hybridUnavailableRegions;
@property (readonly, nonatomic) NSUInteger hybridUnavailableRegionsCount;
@property (readonly, nonatomic) *unsigned int iconIndexs;
@property (readonly, nonatomic) NSUInteger iconIndexsCount;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) unsigned int muninVersionIndex;
@property (readonly, nonatomic) *GEORegionalResourceIndex regionalResourceIndexs;
@property (readonly, nonatomic) NSUInteger regionalResourceIndexsCount;
@property (readonly, nonatomic) *unsigned int resourceIndexs;
@property (readonly, nonatomic) NSUInteger resourceIndexsCount;
@property (readonly, nonatomic) *unsigned int styleSheetIndexs;
@property (readonly, nonatomic) NSUInteger styleSheetIndexsCount;
@property (readonly, nonatomic) *unsigned int textureIndexs;
@property (readonly, nonatomic) NSUInteger textureIndexsCount;
@property (readonly, nonatomic) *GEOVersionedTileSet tileSets;
@property (readonly, nonatomic) NSUInteger tileSetsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) *unsigned int xmlIndexs;
@property (readonly, nonatomic) NSUInteger xmlIndexsCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(struct GEORegionalResourceIndex )regionalResourceIndexAtIndex:(NSUInteger)arg0 ;
-(struct GEOTileSetRegion )hybridUnavailableRegionAtIndex:(NSUInteger)arg0 ;
-(struct GEOVersionedTileSet )tileSetAtIndex:(NSUInteger)arg0 ;
-(unsigned int)attributionIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)fontIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)iconIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)resourceIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)styleSheetIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)textureIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)xmlIndexAtIndex:(NSUInteger)arg0 ;
-(void)addAttributionIndex:(unsigned int)arg0 ;
-(void)addFontIndex:(unsigned int)arg0 ;
-(void)addHybridUnavailableRegion:(struct GEOTileSetRegion )arg0 ;
-(void)addIconIndex:(unsigned int)arg0 ;
-(void)addRegionalResourceIndex:(struct GEORegionalResourceIndex )arg0 ;
-(void)addResourceIndex:(unsigned int)arg0 ;
-(void)addStyleSheetIndex:(unsigned int)arg0 ;
-(void)addTextureIndex:(unsigned int)arg0 ;
-(void)addTileSet:(struct GEOVersionedTileSet )arg0 ;
-(void)addXmlIndex:(unsigned int)arg0 ;
-(void)clearAttributionIndexs;
-(void)clearFontIndexs;
-(void)clearHybridUnavailableRegions;
-(void)clearIconIndexs;
-(void)clearRegionalResourceIndexs;
-(void)clearResourceIndexs;
-(void)clearStyleSheetIndexs;
-(void)clearTextureIndexs;
-(void)clearTileSets;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearXmlIndexs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif