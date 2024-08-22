// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITDECODERDATA_H
#define GEOTRANSITDECODERDATA_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray;
@protocol NSCopying;



@interface GEOTransitDecoderData : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_accessPoints;
    NSMutableArray *_artworks;
    NSMutableArray *_halls;
    NSMutableArray *_lines;
    NSMutableArray *_stations;
    NSMutableArray *_steps;
    NSMutableArray *_stops;
    NSMutableArray *_systems;
    NSMutableArray *_transitIncidentMessages;
    NSMutableArray *_transitIncidents;
    NSMutableArray *_walkings;
    NSMutableArray *_zilchPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (retain, nonatomic) NSMutableArray *artworks;
@property (retain, nonatomic) NSMutableArray *halls;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSMutableArray *stations;
@property (retain, nonatomic) NSMutableArray *steps;
@property (retain, nonatomic) NSMutableArray *stops;
@property (retain, nonatomic) NSMutableArray *systems;
@property (retain, nonatomic) NSMutableArray *transitIncidentMessages;
@property (retain, nonatomic) NSMutableArray *transitIncidents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSMutableArray *walkings;
@property (retain, nonatomic) NSMutableArray *zilchPoints;


+(BOOL)isValid:(id)arg0 ;
+(Class)accessPointType;
+(Class)artworkType;
+(Class)hallType;
+(Class)lineType;
+(Class)stationType;
+(Class)stepType;
+(Class)stopType;
+(Class)systemType;
+(Class)transitIncidentMessageType;
+(Class)transitIncidentType;
+(Class)walkingType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)accessPointAtIndex:(NSUInteger)arg0 ;
-(id)artworkAtIndex:(NSUInteger)arg0 ;
-(id)artworkFromIndices:(*unsigned int)arg0 count:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)hallAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)lineAtIndex:(NSUInteger)arg0 ;
-(id)stationAtIndex:(NSUInteger)arg0 ;
-(id)stepAtIndex:(NSUInteger)arg0 ;
-(id)stopAtIndex:(NSUInteger)arg0 ;
-(id)systemAtIndex:(NSUInteger)arg0 ;
-(id)transitIncidentAtIndex:(NSUInteger)arg0 ;
-(id)transitIncidentMessageAtIndex:(NSUInteger)arg0 ;
-(id)walkingAtIndex:(NSUInteger)arg0 ;
-(id)zilchPointsAtIndex:(NSUInteger)arg0 ;
-(void)addAccessPoint:(id)arg0 ;
-(void)addArtwork:(id)arg0 ;
-(void)addHall:(id)arg0 ;
-(void)addLine:(id)arg0 ;
-(void)addStation:(id)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)addStop:(id)arg0 ;
-(void)addSystem:(id)arg0 ;
-(void)addTransitIncident:(id)arg0 ;
-(void)addTransitIncidentMessage:(id)arg0 ;
-(void)addWalking:(id)arg0 ;
-(void)addZilchPoints:(id)arg0 ;
-(void)clearAccessPoints;
-(void)clearArtworks;
-(void)clearHalls;
-(void)clearLines;
-(void)clearStations;
-(void)clearSteps;
-(void)clearStops;
-(void)clearSystems;
-(void)clearTransitIncidentMessages;
-(void)clearTransitIncidents;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)clearWalkings;
-(void)clearZilchPoints;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif