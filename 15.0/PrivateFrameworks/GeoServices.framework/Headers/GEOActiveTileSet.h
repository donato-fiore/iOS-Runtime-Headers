// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOACTIVETILESET_H
#define GEOACTIVETILESET_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOActiveTileSet : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOTileSetRegion _availableTiles;
    NSUInteger _availableTilesCount;
    NSUInteger _availableTilesSpace;
    NSString *_baseURL;
    NSMutableArray *_countryRegionAllowlists;
    NSMutableArray *_deviceSKUAllowlists;
    NSString *_localizationURL;
    NSMutableArray *_sentinelTiles;
    NSMutableArray *_supportedLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _checksumType;
    int _requestStyle;
    int _scale;
    int _size;
    int _style;
    unsigned int _timeToLiveSeconds;
    int _updateBehavior;
    unsigned int _version;
    BOOL _useAuthProxy;
    ? _flags;
}


@property (readonly, nonatomic) *GEOTileSetRegion availableTiles;
@property (readonly, nonatomic) NSUInteger availableTilesCount;
@property (retain, nonatomic) NSString *baseURL;
@property (nonatomic) int checksumType;
@property (retain, nonatomic) NSMutableArray *countryRegionAllowlists;
@property (retain, nonatomic) NSMutableArray *deviceSKUAllowlists;
@property (readonly, nonatomic) BOOL hasBaseURL;
@property (nonatomic) BOOL hasChecksumType;
@property (readonly, nonatomic) BOOL hasLocalizationURL;
@property (nonatomic) BOOL hasRequestStyle;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) BOOL hasUpdateBehavior;
@property (nonatomic) BOOL hasUseAuthProxy;
@property (retain, nonatomic) NSString *localizationURL;
@property (nonatomic) int requestStyle;
@property (nonatomic) int scale;
@property (retain, nonatomic) NSMutableArray *sentinelTiles;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (retain, nonatomic) NSMutableArray *supportedLanguages;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int updateBehavior;
@property (nonatomic) BOOL useAuthProxy;
@property (nonatomic) unsigned int version;


+(BOOL)isValid:(id)arg0 ;
+(Class)countryRegionAllowlistType;
+(Class)deviceSKUAllowlistType;
+(Class)sentinelTileType;
+(Class)supportedLanguageType;
+(id)buildDisputedBordersQueryItemsForCountry:(id)arg0 region:(id)arg1 ;
-(BOOL)isAvailableForTileKey:(struct _GEOTileKey *)arg0 ;
-(BOOL)isDisputedBordersAllowlistedForCountry:(id)arg0 region:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentTileSet:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bestCountryRegionAllowlistMatchForCountry:(id)arg0 region:(id)arg1 ;
-(id)bestLanguageWithOverrideLocale:(id)arg0 ;
-(id)checksumTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)countryRegionAllowlistAtIndex:(NSUInteger)arg0 ;
-(id)dataForGenericTileType:(int)arg0 configuration:(id)arg1 ;
-(id)description;
-(id)deviceSKUAllowlistAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)disputedBordersQueryItemsForCountry:(id)arg0 region:(id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)requestStyleAsString:(int)arg0 ;
-(id)scaleAsString:(int)arg0 ;
-(id)sentinelTileAtIndex:(NSUInteger)arg0 ;
-(id)sizeAsString:(int)arg0 ;
-(id)styleAsString:(int)arg0 ;
-(id)supportedLanguageAtIndex:(NSUInteger)arg0 ;
-(id)updateBehaviorAsString:(int)arg0 ;
-(int)StringAsChecksumType:(id)arg0 ;
-(int)StringAsRequestStyle:(id)arg0 ;
-(int)StringAsScale:(id)arg0 ;
-(int)StringAsSize:(id)arg0 ;
-(int)StringAsStyle:(id)arg0 ;
-(int)StringAsUpdateBehavior:(id)arg0 ;
-(struct GEOTileSetRegion )availableTilesAtIndex:(NSUInteger)arg0 ;
-(unsigned int)largestZoomLevelLEQ:(unsigned int)arg0 inRect:(struct ? )arg1 ;
-(unsigned int)maximumZoomLevelForMapPoint:(struct ? )arg0 ;
-(unsigned int)maximumZoomLevelInRect:(struct ? )arg0 ;
-(unsigned int)minimumZoomLevelForMapPoint:(struct ? )arg0 ;
-(unsigned int)minimumZoomLevelInRect:(struct ? )arg0 ;
-(void)_resetBestLanguage;
-(void)addAvailableTiles:(struct GEOTileSetRegion )arg0 ;
-(void)addCountryRegionAllowlist:(id)arg0 ;
-(void)addDeviceSKUAllowlist:(id)arg0 ;
-(void)addSentinelTile:(id)arg0 ;
-(void)addSupportedLanguage:(id)arg0 ;
-(void)clearAvailableTiles;
-(void)clearCountryRegionAllowlists;
-(void)clearDeviceSKUAllowlists;
-(void)clearSentinelTiles;
-(void)clearSupportedLanguages;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif