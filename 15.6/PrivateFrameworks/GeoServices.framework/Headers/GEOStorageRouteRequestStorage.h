// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSTORAGEROUTEREQUESTSTORAGE_H
#define GEOSTORAGEROUTEREQUESTSTORAGE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;


#import "GEOURLRouteHandle.h"

@interface GEOStorageRouteRequestStorage : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOURLRouteHandle *_routeHandle;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _transportType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (nonatomic) BOOL hasTransportType;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
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