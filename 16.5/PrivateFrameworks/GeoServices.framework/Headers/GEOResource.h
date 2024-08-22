// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORESOURCE_H
#define GEORESOURCE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOResource : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOTileSetRegion _regions;
    NSUInteger _regionsCount;
    NSUInteger _regionsSpace;
    NSData *_checksum;
    NSString *_filename;
    NSMutableArray *_filters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _alternateResourceURLIndex;
    int _connectionType;
    unsigned int _preferWiFiAllowedStaleThreshold;
    int _resourceType;
    unsigned int _timeToLiveSeconds;
    int _updateMethod;
    int _validationMethod;
    ? _flags;
}


@property (nonatomic) unsigned int alternateResourceURLIndex;
@property (retain, nonatomic) NSData *checksum;
@property (nonatomic) int connectionType;
@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) BOOL hasAlternateResourceURLIndex;
@property (readonly, nonatomic) BOOL hasChecksum;
@property (nonatomic) BOOL hasConnectionType;
@property (readonly, nonatomic) BOOL hasFilename;
@property (nonatomic) BOOL hasPreferWiFiAllowedStaleThreshold;
@property (nonatomic) BOOL hasResourceType;
@property (nonatomic) BOOL hasTimeToLiveSeconds;
@property (nonatomic) BOOL hasUpdateMethod;
@property (nonatomic) BOOL hasValidationMethod;
@property (nonatomic) unsigned int preferWiFiAllowedStaleThreshold;
@property (readonly, nonatomic) *GEOTileSetRegion regions;
@property (readonly, nonatomic) NSUInteger regionsCount;
@property (nonatomic) int resourceType;
@property (nonatomic) unsigned int timeToLiveSeconds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) int updateMethod;
@property (nonatomic) int validationMethod;


+(BOOL)isValid:(id)arg0 ;
+(Class)filterType;
-(BOOL)_geo_isRelevantForScales:(id)arg0 scenarios:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)connectionTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)filterAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)resourceTypeAsString:(int)arg0 ;
-(id)updateMethodAsString:(int)arg0 ;
-(id)validationMethodAsString:(int)arg0 ;
-(int)StringAsConnectionType:(id)arg0 ;
-(int)StringAsResourceType:(id)arg0 ;
-(int)StringAsUpdateMethod:(id)arg0 ;
-(int)StringAsValidationMethod:(id)arg0 ;
-(struct GEOTileSetRegion )regionAtIndex:(NSUInteger)arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)addRegion:(struct GEOTileSetRegion )arg0 ;
-(void)clearFilters;
-(void)clearRegions;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif