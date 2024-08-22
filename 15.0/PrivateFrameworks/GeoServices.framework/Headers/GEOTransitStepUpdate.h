// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITSTEPUPDATE_H
#define GEOTRANSITSTEPUPDATE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSData;
@protocol NSCopying;


#import "GEOTransitBoardingInfo.h"
#import "GEOInstructionSet.h"
#import "GEOTransitScheduleInfo.h"
#import "GEOTransitVehiclePositionInfo.h"

@interface GEOTransitStepUpdate : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitBoardingInfo *_boardingInfo;
    GEOInstructionSet *_instructions;
    GEOTransitScheduleInfo *_scheduleInfo;
    NSData *_updateIdentifier;
    GEOTransitVehiclePositionInfo *_vehiclePositionInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOTransitBoardingInfo *boardingInfo;
@property (readonly, nonatomic) BOOL hasBoardingInfo;
@property (readonly, nonatomic) BOOL hasInstructions;
@property (readonly, nonatomic) BOOL hasScheduleInfo;
@property (readonly, nonatomic) BOOL hasUpdateIdentifier;
@property (readonly, nonatomic) BOOL hasVehiclePositionInfo;
@property (retain, nonatomic) GEOInstructionSet *instructions;
@property (retain, nonatomic) GEOTransitScheduleInfo *scheduleInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (retain, nonatomic) NSData *updateIdentifier;
@property (retain, nonatomic) GEOTransitVehiclePositionInfo *vehiclePositionInfo;


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