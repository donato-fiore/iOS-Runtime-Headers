// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOVLDATATILE_H
#define GEOVLDATATILE_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOTileCoordinate.h"

@interface GEOVLDataTile : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _buildIndexs;
    ? _precisionIndexs;
    ? _purposeDenylists;
    GEOTileCoordinate *_coord;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int buildIndexs;
@property (readonly, nonatomic) NSUInteger buildIndexsCount;
@property (retain, nonatomic) GEOTileCoordinate *coord;
@property (readonly, nonatomic) BOOL hasCoord;
@property (readonly, nonatomic) *unsigned int precisionIndexs;
@property (readonly, nonatomic) NSUInteger precisionIndexsCount;
@property (readonly, nonatomic) *int purposeDenylists;
@property (readonly, nonatomic) NSUInteger purposeDenylistsCount;


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
-(id)purposeDenylistsAsString:(int)arg0 ;
-(int)StringAsPurposeDenylists:(id)arg0 ;
-(int)purposeDenylistAtIndex:(NSUInteger)arg0 ;
-(unsigned int)buildIndexAtIndex:(NSUInteger)arg0 ;
-(unsigned int)precisionIndexAtIndex:(NSUInteger)arg0 ;
-(void)addBuildIndex:(unsigned int)arg0 ;
-(void)addPrecisionIndex:(unsigned int)arg0 ;
-(void)addPurposeDenylist:(int)arg0 ;
-(void)clearBuildIndexs;
-(void)clearPrecisionIndexs;
-(void)clearPurposeDenylists;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif