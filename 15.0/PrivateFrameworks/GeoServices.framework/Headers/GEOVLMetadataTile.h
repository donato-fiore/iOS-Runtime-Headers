// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOVLMETADATATILE_H
#define GEOVLMETADATATILE_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOTileCoordinate.h"

@interface GEOVLMetadataTile : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _purposeDenylists;
    NSMutableArray *_builds;
    GEOTileCoordinate *_coord;
    NSMutableArray *_precisions;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *builds;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (readonly, nonatomic) BOOL hasCoord;
@property (retain, nonatomic) NSMutableArray *precisions;
@property (readonly, nonatomic) *int purposeDenylists;
@property (readonly, nonatomic) NSUInteger purposeDenylistsCount;
@property (retain, nonatomic) NSMutableArray *tiles;


+(BOOL)isValid:(id)arg0 ;
+(Class)buildType;
+(Class)precisionType;
+(Class)tileType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)buildAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)precisionAtIndex:(NSUInteger)arg0 ;
-(id)purposeDenylistsAsString:(int)arg0 ;
-(id)tileAtIndex:(NSUInteger)arg0 ;
-(int)StringAsPurposeDenylists:(id)arg0 ;
-(int)purposeDenylistAtIndex:(NSUInteger)arg0 ;
-(void)addBuild:(id)arg0 ;
-(void)addPrecision:(id)arg0 ;
-(void)addPurposeDenylist:(int)arg0 ;
-(void)addTile:(id)arg0 ;
-(void)clearBuilds;
-(void)clearPrecisions;
-(void)clearPurposeDenylists;
-(void)clearTiles;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif