// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTRANSITBOARDINGINFOENTRY_H
#define GEOTRANSITBOARDINGINFOENTRY_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOFormattedString.h"
#import "GEOTransitListTimeInstruction.h"
#import "GEOTransitExitPlanInfo.h"
#import "GEOTransitOccupancyInfo.h"

@interface GEOTransitBoardingInfoEntry : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_alternativeText;
    GEOTransitListTimeInstruction *_alternativeTimeInstruction;
    GEOTransitExitPlanInfo *_exitPlanInfoOverride;
    GEOFormattedString *_mainText;
    GEOTransitListTimeInstruction *_mainTimeInstruction;
    GEOTransitOccupancyInfo *_occupancyInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    unsigned int _expectedDepartureTime;
    BOOL _clearExitPlanInfo;
    ? _flags;
}


@property (retain, nonatomic) GEOFormattedString *alternativeText;
@property (retain, nonatomic) GEOTransitListTimeInstruction *alternativeTimeInstruction;
@property (nonatomic) BOOL clearExitPlanInfo;
@property (retain, nonatomic) GEOTransitExitPlanInfo *exitPlanInfoOverride;
@property (nonatomic) unsigned int expectedDepartureTime;
@property (readonly, nonatomic) BOOL hasAlternativeText;
@property (readonly, nonatomic) BOOL hasAlternativeTimeInstruction;
@property (nonatomic) BOOL hasClearExitPlanInfo;
@property (readonly, nonatomic) BOOL hasExitPlanInfoOverride;
@property (nonatomic) BOOL hasExpectedDepartureTime;
@property (readonly, nonatomic) BOOL hasMainText;
@property (readonly, nonatomic) BOOL hasMainTimeInstruction;
@property (readonly, nonatomic) BOOL hasOccupancyInfo;
@property (retain, nonatomic) GEOFormattedString *mainText;
@property (retain, nonatomic) GEOTransitListTimeInstruction *mainTimeInstruction;
@property (retain, nonatomic) GEOTransitOccupancyInfo *occupancyInfo;
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