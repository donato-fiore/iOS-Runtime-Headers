// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSHAREDNAVROUTEINFO_H
#define GEOSHAREDNAVROUTEINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOSharedNavRouteInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _coordinates;
    ? _trafficColorOffsets;
    ? _trafficColors;
    NSMutableArray *_chargingStations;
    NSMutableArray *_routingPathLegs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *chargingStations;
@property (readonly, nonatomic) *CGFloat coordinates;
@property (readonly, nonatomic) NSUInteger coordinatesCount;
@property (retain, nonatomic) NSMutableArray *routingPathLegs;
@property (readonly, nonatomic) *unsigned int trafficColorOffsets;
@property (readonly, nonatomic) NSUInteger trafficColorOffsetsCount;
@property (readonly, nonatomic) *unsigned int trafficColors;
@property (readonly, nonatomic) NSUInteger trafficColorsCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)routingPathLegType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)coordinatesAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)chargingStationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)routingPathLegAtIndex:(NSUInteger)arg0 ;
-(unsigned int)trafficColorAtIndex:(NSUInteger)arg0 ;
-(unsigned int)trafficColorOffsetAtIndex:(NSUInteger)arg0 ;
-(void)addChargingStations:(id)arg0 ;
-(void)addCoordinates:(CGFloat)arg0 ;
-(void)addRoutingPathLeg:(id)arg0 ;
-(void)addTrafficColor:(unsigned int)arg0 ;
-(void)addTrafficColorOffset:(unsigned int)arg0 ;
-(void)clearChargingStations;
-(void)clearCoordinates;
-(void)clearRoutingPathLegs;
-(void)clearTrafficColorOffsets;
-(void)clearTrafficColors;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif