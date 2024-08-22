// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDHOURS_H
#define GEOPDHOURS_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDHoursThreshold.h"

@interface GEOPDHours : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _days;
    *GEOPDLocalTimeRange _timeRanges;
    NSUInteger _timeRangesCount;
    NSUInteger _timeRangesSpace;
    GEOPDHoursThreshold *_hoursThreshold;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int days;
@property (readonly, nonatomic) NSUInteger daysCount;
@property (readonly, nonatomic) BOOL hasHoursThreshold;
@property (retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property (readonly, nonatomic) *GEOPDLocalTimeRange timeRanges;
@property (readonly, nonatomic) NSUInteger timeRangesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)currentOperatingHoursAvailableForPlaceData:(id)arg0 withTimeZone:(id)arg1 ;
+(BOOL)isValid:(id)arg0 ;
+(BOOL)operatingHoursAvailableForPlaceData:(id)arg0 ;
+(id)_allHoursForPlaceData:(id)arg0 ;
+(id)completeOperatingHoursForPlaceData:(id)arg0 date:(id)arg1 withTimeZone:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)daysAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsDays:(id)arg0 ;
-(int)dayAtIndex:(NSUInteger)arg0 ;
-(struct GEOPDLocalTimeRange )timeRangeAtIndex:(NSUInteger)arg0 ;
-(void)addDay:(int)arg0 ;
-(void)addTimeRange:(struct GEOPDLocalTimeRange )arg0 ;
-(void)clearDays;
-(void)clearTimeRanges;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif