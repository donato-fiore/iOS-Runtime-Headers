// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVLFTILEDETAILS_H
#define GEOVLFTILEDETAILS_H

@class PBCodable;
@protocol NSCopying;


#import "GEOVLFUsageTileID.h"

@interface GEOVLFTileDetails : PBCodable <NSCopying>

 {
    GEOVLFUsageTileID *_tileId;
    unsigned int _tileSizeBytes;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasTileId;
@property (nonatomic) BOOL hasTileSizeBytes;
@property (retain, nonatomic) GEOVLFUsageTileID *tileId;
@property (nonatomic) unsigned int tileSizeBytes;


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
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif