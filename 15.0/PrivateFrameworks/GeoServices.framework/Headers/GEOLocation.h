// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOCATION_H
#define GEOLOCATION_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOCoarseLocationMetadata.h"
#import "GEOLatLng.h"

@interface GEOLocation : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCoarseLocationMetadata *_coarseMetadata;
    CGFloat _courseAccuracy;
    CGFloat _course;
    CGFloat _heading;
    CGFloat _horizontalAccuracy;
    GEOLatLng *_latLng;
    GEOLatLng *_rawCoordinate;
    CGFloat _rawCourse;
    CGFloat _speedAccuracy;
    CGFloat _speed;
    CGFloat _timestamp;
    NSUInteger _transitID;
    CGFloat _verticalAccuracy;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _altitude;
    int _courseType;
    int _formOfWay;
    int _levelOrdinal;
    int _matchQuality;
    int _referenceFrame;
    int _roadClass;
    int _transportType;
    int _type;
    BOOL _isMatchedLocation;
    BOOL _isShifted;
    ? _flags;
}


@property (nonatomic) int altitude;
@property (retain, nonatomic) GEOCoarseLocationMetadata *coarseMetadata;
@property (readonly, nonatomic) ? coordinate;
@property (nonatomic) CGFloat course;
@property (nonatomic) CGFloat courseAccuracy;
@property (nonatomic) int courseType;
@property (nonatomic) int formOfWay;
@property (readonly, nonatomic) BOOL hasAccurateCourse;
@property (nonatomic) BOOL hasAltitude;
@property (readonly, nonatomic) BOOL hasCoarseMetadata;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) BOOL hasCourseAccuracy;
@property (nonatomic) BOOL hasCourseType;
@property (nonatomic) BOOL hasFormOfWay;
@property (nonatomic) BOOL hasHeading;
@property (nonatomic) BOOL hasHorizontalAccuracy;
@property (nonatomic) BOOL hasIsMatchedLocation;
@property (nonatomic) BOOL hasIsShifted;
@property (nonatomic) BOOL hasLevelOrdinal;
@property (nonatomic) BOOL hasMatchQuality;
@property (readonly, nonatomic) BOOL hasRawCoordinate;
@property (nonatomic) BOOL hasRawCourse;
@property (nonatomic) BOOL hasReferenceFrame;
@property (nonatomic) BOOL hasRoadClass;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasSpeedAccuracy;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransitID;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) CGFloat heading;
@property (nonatomic) CGFloat horizontalAccuracy;
@property (nonatomic) BOOL isMatchedLocation;
@property (nonatomic) BOOL isShifted;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic) int levelOrdinal;
@property (nonatomic) int matchQuality;
@property (retain, nonatomic) GEOLatLng *rawCoordinate;
@property (nonatomic) CGFloat rawCourse;
@property (nonatomic) int referenceFrame;
@property (nonatomic) int roadClass;
@property (nonatomic) CGFloat speed;
@property (nonatomic) CGFloat speedAccuracy;
@property (nonatomic) CGFloat timestamp;
@property (nonatomic) NSUInteger transitID;
@property (nonatomic) int transportType;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) CGFloat verticalAccuracy;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)courseTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)formOfWayAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithGEOCoordinate:(struct ? )arg0 ;
-(id)initWithGEOCoordinate:(struct ? )arg0 floorOrdinal:(int)arg1 ;
-(id)initWithGEOCoordinate:(struct ? )arg0 isUserLocation:(BOOL)arg1 ;
-(id)initWithGEOCoordinate:(struct ? )arg0 isUserLocation:(BOOL)arg1 floorOrdinal:(int)arg2 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 floorOrdinal:(int)arg2 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 isUserLocation:(BOOL)arg2 floorOrdinal:(int)arg3 ;
-(id)initWithLocation:(id)arg0 ;
-(id)initWithLocation:(id)arg0 floorOrdinal:(int)arg1 ;
-(id)initWithLocation:(id)arg0 isUserLocation:(BOOL)arg1 floorOrdinal:(int)arg2 ;
-(id)jsonRepresentation;
-(id)matchQualityAsString:(int)arg0 ;
-(id)referenceFrameAsString:(int)arg0 ;
-(id)roadClassAsString:(int)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsCourseType:(id)arg0 ;
-(int)StringAsFormOfWay:(id)arg0 ;
-(int)StringAsMatchQuality:(id)arg0 ;
-(int)StringAsReferenceFrame:(id)arg0 ;
-(int)StringAsRoadClass:(id)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)applyCoarseLocationRandomizationWithMaximumDistance:(CGFloat)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearSensitiveFieldsForCoarseLocation;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif