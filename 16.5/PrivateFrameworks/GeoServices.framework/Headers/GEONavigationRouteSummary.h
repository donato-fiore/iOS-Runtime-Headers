// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEONAVIGATIONROUTESUMMARY_H
#define GEONAVIGATIONROUTESUMMARY_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOComposedWaypoint.h"

@interface GEONavigationRouteSummary : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_destinationName;
    GEOComposedWaypoint *_destination;
    GEOComposedWaypoint *_origin;
    CGFloat _travelTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _transportType;
    ? _flags;
}


@property (retain, nonatomic) GEOComposedWaypoint *destination;
@property (retain, nonatomic) NSString *destinationName;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTime;
@property (retain, nonatomic) GEOComposedWaypoint *origin;
@property (nonatomic) int transportType;
@property (nonatomic) CGFloat travelTime;


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
-(id)initWithRoute:(id)arg0 destinationName:(id)arg1 ;
-(id)jsonRepresentation;
-(id)transportTypeAsString:(int)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)setRoute:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif