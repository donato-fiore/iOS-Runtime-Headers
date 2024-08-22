// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSTORAGEROUTEREQUESTSTORAGE_H
#define GEOSTORAGEROUTEREQUESTSTORAGE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOAutomobileOptions.h"
#import "GEOCyclingOptions.h"
#import "GEOStorageResumeRouteHandle.h"
#import "GEOURLRouteHandle.h"
#import "GEOTransitOptions.h"
#import "GEOWalkingOptions.h"

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOAutomobileOptions *_automobileOptions;
    GEOCyclingOptions *_cyclingOptions;
    GEOStorageResumeRouteHandle *_resumeRouteHandleStorage;
    GEOURLRouteHandle *_routeHandle;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _transportType;
    ? _flags;
}


@property (retain, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (retain, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (readonly, nonatomic) BOOL hasResumeRouteHandleStorage;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (nonatomic) BOOL hasTransportType;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (retain, nonatomic) GEOStorageResumeRouteHandle *resumeRouteHandleStorage;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (retain, nonatomic) GEOTransitOptions *transitOptions;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOWalkingOptions *walkingOptions;
@property (retain, nonatomic) NSMutableArray *waypoints;


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
-(id)transportTypeAsString:(int)arg0 ;
-(id)waypointsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)addWaypoints:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearWaypoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif