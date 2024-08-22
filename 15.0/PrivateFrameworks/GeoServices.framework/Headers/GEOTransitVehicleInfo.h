// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITVEHICLEINFO_H
#define GEOTRANSITVEHICLEINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOTransitVehicleTime.h"

@interface GEOTransitVehicleInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _clusteredRouteLineArtworkIndexs;
    GEOTransitVehicleTime *_arrivalTime;
    GEOTransitVehicleTime *_departureTime;
    NSUInteger _tripMuid;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _departureFrequencyMax;
    unsigned int _departureFrequencyMin;
    unsigned int _lineIndex;
    int _pickupDropoffType;
    unsigned int _routeLineArtworkIndex;
    ? _flags;
}


@property (retain, nonatomic) GEOTransitVehicleTime *arrivalTime;
@property (readonly, nonatomic) *unsigned int clusteredRouteLineArtworkIndexs;
@property (readonly, nonatomic) NSUInteger clusteredRouteLineArtworkIndexsCount;
@property (nonatomic) unsigned int departureFrequencyMax;
@property (nonatomic) unsigned int departureFrequencyMin;
@property (retain, nonatomic) GEOTransitVehicleTime *departureTime;
@property (readonly, nonatomic) BOOL hasArrivalTime;
@property (nonatomic) BOOL hasDepartureFrequencyMax;
@property (nonatomic) BOOL hasDepartureFrequencyMin;
@property (readonly, nonatomic) BOOL hasDepartureTime;
@property (nonatomic) BOOL hasLineIndex;
@property (nonatomic) BOOL hasPickupDropoffType;
@property (nonatomic) BOOL hasRouteLineArtworkIndex;
@property (nonatomic) BOOL hasTripMuid;
@property (readonly, nonatomic) BOOL hasVehicleNumber;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic) int pickupDropoffType;
@property (nonatomic) unsigned int routeLineArtworkIndex;
@property (nonatomic) NSUInteger tripMuid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSString *vehicleNumber;


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
-(id)pickupDropoffTypeAsString:(int)arg0 ;
-(int)StringAsPickupDropoffType:(id)arg0 ;
-(unsigned int)clusteredRouteLineArtworkIndexAtIndex:(NSUInteger)arg0 ;
-(void)addClusteredRouteLineArtworkIndex:(unsigned int)arg0 ;
-(void)clearClusteredRouteLineArtworkIndexs;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif