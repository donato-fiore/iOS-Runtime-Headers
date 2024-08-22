// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOWAYPOINTTYPED_H
#define GEOWAYPOINTTYPED_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOWaypointUUID.h"
#import "GEOWaypointID.h"
#import "GEOWaypointLocation.h"
#import "GEOWaypointNameProperties.h"
#import "GEOWaypointPlace.h"

@interface GEOWaypointTyped : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOWaypointUUID *_uniqueWaypointId;
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointNameProperties *_waypointNameProperties;
    GEOWaypointPlace *_waypointPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _waypointStatus;
    int _waypointType;
    BOOL _isCurrentLocation;
    BOOL _isLocationOfInterest;
    ? _flags;
}


@property (nonatomic) BOOL hasIsCurrentLocation;
@property (nonatomic) BOOL hasIsLocationOfInterest;
@property (readonly, nonatomic) BOOL hasUniqueWaypointId;
@property (readonly, nonatomic) BOOL hasWaypointId;
@property (readonly, nonatomic) BOOL hasWaypointLocation;
@property (readonly, nonatomic) BOOL hasWaypointNameProperties;
@property (readonly, nonatomic) BOOL hasWaypointPlace;
@property (nonatomic) BOOL hasWaypointStatus;
@property (nonatomic) BOOL hasWaypointType;
@property (nonatomic) BOOL isCurrentLocation;
@property (nonatomic) BOOL isLocationOfInterest;
@property (retain, nonatomic) GEOWaypointUUID *uniqueWaypointId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOWaypointID *waypointId;
@property (retain, nonatomic) GEOWaypointLocation *waypointLocation;
@property (retain, nonatomic) GEOWaypointNameProperties *waypointNameProperties;
@property (retain, nonatomic) GEOWaypointPlace *waypointPlace;
@property (nonatomic) int waypointStatus;
@property (nonatomic) int waypointType;


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
-(id)locationForWaypoint;
-(id)waypointStatusAsString:(int)arg0 ;
-(id)waypointTypeAsString:(int)arg0 ;
-(int)StringAsWaypointStatus:(id)arg0 ;
-(int)StringAsWaypointType:(id)arg0 ;
-(void)clearLocations;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif