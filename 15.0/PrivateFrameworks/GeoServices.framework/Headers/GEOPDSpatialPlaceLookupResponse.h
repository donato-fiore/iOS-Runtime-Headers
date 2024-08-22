// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDSPATIALPLACELOOKUPRESPONSE_H
#define GEOPDSPATIALPLACELOOKUPRESPONSE_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDBounds.h"
#import "GEOLatLng.h"
#import "GEOPDMapsIdentifier.h"

@interface GEOPDSpatialPlaceLookupResponse : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _categorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    GEOPDMapsIdentifier *_placeId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOPDBounds *bounds;
@property (readonly, nonatomic) *int categorys;
@property (readonly, nonatomic) NSUInteger categorysCount;
@property (retain, nonatomic) GEOLatLng *center;
@property (readonly, nonatomic) BOOL hasBounds;
@property (readonly, nonatomic) BOOL hasCenter;
@property (readonly, nonatomic) BOOL hasPlaceId;
@property (retain, nonatomic) GEOPDMapsIdentifier *placeId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)categorysAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsCategorys:(id)arg0 ;
-(int)categoryAtIndex:(NSUInteger)arg0 ;
-(void)addCategory:(int)arg0 ;
-(void)clearCategorys;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif