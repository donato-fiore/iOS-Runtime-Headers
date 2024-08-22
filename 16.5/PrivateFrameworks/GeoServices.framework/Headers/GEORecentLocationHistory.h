// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORECENTLOCATIONHISTORY_H
#define GEORECENTLOCATIONHISTORY_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData, NSMutableArray;
@protocol NSCopying;


#import "GEOLatLngE7.h"

@interface GEORecentLocationHistory : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _relativeDistanceToDestinations;
    GEOLatLngE7 *_baseLocation;
    NSUInteger _baseTimestamp;
    NSData *_encodedDistancesToDestination;
    NSData *_encodedLats;
    NSData *_encodedLngs;
    NSMutableArray *_relativeLocations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _baseDistanceToDestination;
    unsigned int _latlngCount;
    unsigned int _timeResolution;
    ? _flags;
}


@property (nonatomic) unsigned int baseDistanceToDestination;
@property (retain, nonatomic) GEOLatLngE7 *baseLocation;
@property (nonatomic) NSUInteger baseTimestamp;
@property (retain, nonatomic) NSData *encodedDistancesToDestination;
@property (retain, nonatomic) NSData *encodedLats;
@property (retain, nonatomic) NSData *encodedLngs;
@property (nonatomic) BOOL hasBaseDistanceToDestination;
@property (readonly, nonatomic) BOOL hasBaseLocation;
@property (nonatomic) BOOL hasBaseTimestamp;
@property (readonly, nonatomic) BOOL hasEncodedDistancesToDestination;
@property (readonly, nonatomic) BOOL hasEncodedLats;
@property (readonly, nonatomic) BOOL hasEncodedLngs;
@property (nonatomic) BOOL hasLatlngCount;
@property (nonatomic) BOOL hasTimeResolution;
@property (nonatomic) unsigned int latlngCount;
@property (readonly, nonatomic) *int relativeDistanceToDestinations;
@property (readonly, nonatomic) NSUInteger relativeDistanceToDestinationsCount;
@property (retain, nonatomic) NSMutableArray *relativeLocations;
@property (nonatomic) unsigned int timeResolution;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(id)relativeLocationsAtIndex:(NSUInteger)arg0 ;
-(int)relativeDistanceToDestinationAtIndex:(NSUInteger)arg0 ;
-(void)addRelativeDistanceToDestination:(int)arg0 ;
-(void)addRelativeLocations:(id)arg0 ;
-(void)clearRelativeDistanceToDestinations;
-(void)clearRelativeLocations;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif