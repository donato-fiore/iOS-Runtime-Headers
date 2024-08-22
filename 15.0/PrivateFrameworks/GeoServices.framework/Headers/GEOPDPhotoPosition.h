// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDPHOTOPOSITION_H
#define GEOPDPHOTOPOSITION_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEOPDGroundDataBuild.h"
#import "GEOTileCoordinate.h"
#import "GEOPDGeographicCoordinate.h"
#import "GEOPDOrientedPosition.h"
#import "GEOPDRigMetrics.h"
#import "GEOPDOrientedTilePosition.h"

@interface GEOPDPhotoPosition : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _cameraMetadataIndexs;
    GEOPDGroundDataBuild *_build;
    NSMutableArray *_cameraMetadatas;
    NSUInteger _imageryTimestamp;
    NSUInteger _imdataId;
    GEOTileCoordinate *_parentTile;
    GEOPDGeographicCoordinate *_positionGeo;
    GEOPDOrientedPosition *_position;
    GEOPDRigMetrics *_rigMetrics;
    GEOPDOrientedTilePosition *_tilePosition;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _buildTableIndex;
    int _revision;
    ? _flags;
}


@property (retain, nonatomic) GEOPDGroundDataBuild *build;
@property (nonatomic) unsigned int buildTableIndex;
@property (readonly, nonatomic) *unsigned int cameraMetadataIndexs;
@property (readonly, nonatomic) NSUInteger cameraMetadataIndexsCount;
@property (retain, nonatomic) NSMutableArray *cameraMetadatas;
@property (readonly, nonatomic) BOOL hasBuild;
@property (nonatomic) BOOL hasBuildTableIndex;
@property (nonatomic) BOOL hasImageryTimestamp;
@property (nonatomic) BOOL hasImdataId;
@property (readonly, nonatomic) BOOL hasParentTile;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasPositionGeo;
@property (nonatomic) BOOL hasRevision;
@property (readonly, nonatomic) BOOL hasRigMetrics;
@property (readonly, nonatomic) BOOL hasTilePosition;
@property (nonatomic) NSUInteger imageryTimestamp;
@property (nonatomic) NSUInteger imdataId;
@property (retain, nonatomic) GEOTileCoordinate *parentTile;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (retain, nonatomic) GEOPDGeographicCoordinate *positionGeo;
@property (nonatomic) int revision;
@property (retain, nonatomic) GEOPDRigMetrics *rigMetrics;
@property (retain, nonatomic) GEOPDOrientedTilePosition *tilePosition;


+(BOOL)isValid:(id)arg0 ;
+(Class)cameraMetadataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)cameraMetadataAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)cameraMetadataIndexAtIndex:(NSUInteger)arg0 ;
-(void)addCameraMetadata:(id)arg0 ;
-(void)addCameraMetadataIndex:(unsigned int)arg0 ;
-(void)clearCameraMetadataIndexs;
-(void)clearCameraMetadatas;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif