// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPUSERLOCATIONDETAILS_H
#define GEORPUSERLOCATIONDETAILS_H

@class PBCodable, PBDataReader, NSMutableArray;
@protocol NSCopying;


#import "GEORPTimestamp.h"
#import "GEOLocation.h"

@interface GEORPUserLocationDetails : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPTimestamp *_currentTime;
    GEOLocation *_currentUserLocation;
    NSMutableArray *_deviceHistoricalLocations;
    GEOLocation *_lastKnownRoadLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPTimestamp *currentTime;
@property (retain, nonatomic) GEOLocation *currentUserLocation;
@property (retain, nonatomic) NSMutableArray *deviceHistoricalLocations;
@property (readonly, nonatomic) BOOL hasCurrentTime;
@property (readonly, nonatomic) BOOL hasCurrentUserLocation;
@property (readonly, nonatomic) BOOL hasLastKnownRoadLocation;
@property (retain, nonatomic) GEOLocation *lastKnownRoadLocation;


+(BOOL)isValid:(id)arg0 ;
+(Class)deviceHistoricalLocationType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceHistoricalLocationAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addDeviceHistoricalLocation:(id)arg0 ;
-(void)clearDeviceHistoricalLocations;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif