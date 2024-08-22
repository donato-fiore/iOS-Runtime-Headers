// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEORPFEEDBACKLAYOUTCONFIGPARAMETERS_H
#define GEORPFEEDBACKLAYOUTCONFIGPARAMETERS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEOLatLng.h"
#import "GEOMapRegion.h"
#import "GEOPDMapsIdentifier.h"

@interface GEORPFeedbackLayoutConfigParameters : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    GEOMapRegion *_mapRegion;
    GEOPDMapsIdentifier *_mapsId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _formType;
    ? _flags;
}


@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) int formType;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasFormType;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasMapsId;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsFormType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif