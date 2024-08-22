// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPBTRANSITACCESSPOINT_H
#define GEOPBTRANSITACCESSPOINT_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSMutableArray;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOPBTransitAccessPoint : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_entranceNameDisplayString;
    NSMutableArray *_entranceZoomNames;
    NSString *_exitNameDisplayString;
    NSMutableArray *_exitZoomNames;
    GEOLatLng *_location;
    NSUInteger _muid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _accessPointIndex;
    unsigned int _stationIndex;
    ? _flags;
}


@property (nonatomic) unsigned int accessPointIndex;
@property (retain, nonatomic) NSString *entranceNameDisplayString;
@property (retain, nonatomic) NSMutableArray *entranceZoomNames;
@property (retain, nonatomic) NSString *exitNameDisplayString;
@property (retain, nonatomic) NSMutableArray *exitZoomNames;
@property (nonatomic) BOOL hasAccessPointIndex;
@property (readonly, nonatomic) BOOL hasEntranceNameDisplayString;
@property (readonly, nonatomic) BOOL hasExitNameDisplayString;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMuid;
@property (nonatomic) BOOL hasStationIndex;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) unsigned int stationIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)entranceZoomNameType;
+(Class)exitZoomNameType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)bestEntranceName;
-(id)bestEntranceNameWithLocale:(*id)arg0 ;
-(id)bestExitName;
-(id)bestExitNameWithLocale:(*id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entranceZoomNameAtIndex:(NSUInteger)arg0 ;
-(id)exitZoomNameAtIndex:(NSUInteger)arg0 ;
-(id)identifier;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addEntranceZoomName:(id)arg0 ;
-(void)addExitZoomName:(id)arg0 ;
-(void)clearEntranceZoomNames;
-(void)clearExitZoomNames;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif