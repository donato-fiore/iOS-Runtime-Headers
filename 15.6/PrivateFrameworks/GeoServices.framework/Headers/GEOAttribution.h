// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOATTRIBUTION_H
#define GEOATTRIBUTION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;



@interface GEOAttribution : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    *GEOTileSetRegion _regions;
    NSUInteger _regionsCount;
    NSUInteger _regionsSpace;
    NSString *_badgeChecksum;
    NSString *_badge;
    NSString *_logoChecksum;
    NSString *_logo;
    NSString *_name;
    NSMutableArray *_resources;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    unsigned int _linkDisplayStringIndex;
    ? _flags;
}


@property (retain, nonatomic) NSString *badge;
@property (retain, nonatomic) NSString *badgeChecksum;
@property (nonatomic) unsigned int dataSet;
@property (readonly, nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) BOOL hasBadgeChecksum;
@property (nonatomic) BOOL hasDataSet;
@property (nonatomic) BOOL hasLinkDisplayStringIndex;
@property (readonly, nonatomic) BOOL hasLogo;
@property (readonly, nonatomic) BOOL hasLogoChecksum;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasUrl;
@property (nonatomic) unsigned int linkDisplayStringIndex;
@property (retain, nonatomic) NSString *logo;
@property (retain, nonatomic) NSString *logoChecksum;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) *GEOTileSetRegion regions;
@property (readonly, nonatomic) NSUInteger regionsCount;
@property (retain, nonatomic) NSMutableArray *resources;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *url;


+(BOOL)isValid:(id)arg0 ;
+(Class)resourceType;
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
-(id)resourceAtIndex:(NSUInteger)arg0 ;
-(struct GEOTileSetRegion )regionAtIndex:(NSUInteger)arg0 ;
-(void)addRegion:(struct GEOTileSetRegion )arg0 ;
-(void)addResource:(id)arg0 ;
-(void)clearRegions;
-(void)clearResources;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif