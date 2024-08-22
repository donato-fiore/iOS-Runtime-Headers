// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOWIFIQUALITYLOCATIONSEARCH_H
#define GEOWIFIQUALITYLOCATIONSEARCH_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEOWiFiQualityLocationSearch : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLocation *_location;
    NSUInteger _radius;
    NSMutableArray *_tiles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasRadius;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) NSUInteger radius;
@property (retain, nonatomic) NSMutableArray *tiles;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)tilesAtIndex:(NSUInteger)arg0 ;
-(void)addTiles:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearTiles;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif