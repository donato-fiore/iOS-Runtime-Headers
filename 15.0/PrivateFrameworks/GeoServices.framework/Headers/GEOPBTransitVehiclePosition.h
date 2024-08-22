// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPBTRANSITVEHICLEPOSITION_H
#define GEOPBTRANSITVEHICLEPOSITION_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSDate;
@protocol GEOTransitVehiclePosition, NSCopying, GEOTransitArtworkDataSource;


#import "GEOPBTransitArtwork.h"
#import "GEOLatLng.h"
#import "GEOPBTransitShield.h"
#import "GEOStyleAttributes.h"

@interface GEOPBTransitVehiclePosition : PBCodable <GEOTransitVehiclePosition, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPBTransitArtwork *_artwork;
    NSString *_color;
    NSString *_directionName;
    NSString *_headsign;
    GEOLatLng *_latLng;
    GEOPBTransitShield *_modeShield;
    GEOStyleAttributes *_styleAttributes;
    NSUInteger _time;
    NSUInteger _tripId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    float _bearing;
    float _speed;
    ? _flags;
}


@property (retain, nonatomic) GEOPBTransitArtwork *artwork;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkDataSource;
@property (nonatomic) float bearing;
@property (retain, nonatomic) NSString *color;
@property (readonly, copy, nonatomic) NSString *colorHexString;
@property (readonly, nonatomic) ? coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *direction;
@property (retain, nonatomic) NSString *directionName;
@property (readonly, nonatomic) BOOL hasArtwork;
@property (nonatomic) BOOL hasBearing;
@property (readonly, nonatomic) BOOL hasColor;
@property (readonly, nonatomic) BOOL hasDirectionName;
@property (readonly, nonatomic) BOOL hasHeadsign;
@property (readonly, nonatomic) BOOL hasLatLng;
@property (readonly, nonatomic) BOOL hasModeShield;
@property (nonatomic) BOOL hasSpeed;
@property (readonly, nonatomic) BOOL hasStyleAttributes;
@property (nonatomic) BOOL hasTime;
@property (nonatomic) BOOL hasTripId;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat heading;
@property (readonly, copy, nonatomic) NSString *headsign;
@property (retain, nonatomic) NSString *headsign;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (retain, nonatomic) GEOPBTransitShield *modeShield;
@property (nonatomic) float speed;
@property (retain, nonatomic) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger time;
@property (readonly, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) NSUInteger tripID;
@property (nonatomic) NSUInteger tripId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(id)transitVehiclePositionForPlaceData:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif