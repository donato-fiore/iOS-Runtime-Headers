// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCYCLINGOPTIONS_H
#define GEOCYCLINGOPTIONS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOCyclingUserPreferences.h"
#import "GEOCyclingVehicleSpecifications.h"

@interface GEOCyclingOptions : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCyclingUserPreferences *_cyclingUserPreferences;
    GEOCyclingVehicleSpecifications *_cyclingVehicleSpecifications;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOCyclingUserPreferences *cyclingUserPreferences;
@property (retain, nonatomic) GEOCyclingVehicleSpecifications *cyclingVehicleSpecifications;
@property (readonly, nonatomic) BOOL hasCyclingUserPreferences;
@property (readonly, nonatomic) BOOL hasCyclingVehicleSpecifications;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


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
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif