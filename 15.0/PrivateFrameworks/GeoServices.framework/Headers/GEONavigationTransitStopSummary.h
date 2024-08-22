// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEONAVIGATIONTRANSITSTOPSUMMARY_H
#define GEONAVIGATIONTRANSITSTOPSUMMARY_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying>

 {
    GEOLatLng *_coordinate;
    NSUInteger _stopID;
    ? _flags;
}


@property (retain, nonatomic) GEOLatLng *coordinate;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (nonatomic) BOOL hasStopID;
@property (nonatomic) NSUInteger stopID;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithTransitStop:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif