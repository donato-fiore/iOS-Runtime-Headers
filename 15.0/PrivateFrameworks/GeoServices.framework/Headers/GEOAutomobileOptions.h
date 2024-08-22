// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOAUTOMOBILEOPTIONS_H
#define GEOAUTOMOBILEOPTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOUserPreferences.h"
#import "GEOVehicleSpecifications.h"

@interface GEOAutomobileOptions : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOUserPreferences *_userPreferences;
    GEOVehicleSpecifications *_vehicleSpecifications;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _trafficType;
    BOOL _includeHistoricTravelTime;
    BOOL _includeStaticTravelTime;
    ? _flags;
}


@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL hasIncludeStaticTravelTime;
@property (nonatomic) BOOL hasTrafficType;
@property (readonly, nonatomic) BOOL hasUserPreferences;
@property (readonly, nonatomic) BOOL hasVehicleSpecifications;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL includeStaticTravelTime;
@property (nonatomic) int trafficType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) GEOUserPreferences *userPreferences;
@property (retain, nonatomic) GEOVehicleSpecifications *vehicleSpecifications;


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
-(id)trafficTypeAsString:(int)arg0 ;
-(int)StringAsTrafficType:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif