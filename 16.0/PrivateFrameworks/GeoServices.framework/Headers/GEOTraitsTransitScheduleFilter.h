// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTRAITSTRANSITSCHEDULEFILTER_H
#define GEOTRAITSTRANSITSCHEDULEFILTER_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOTraitsTransitScheduleModeFilter.h"
#import "GEOTraitsTransitScheduleTimeRange.h"

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasHighFrequencyFilter;
@property (readonly, nonatomic) BOOL hasLowFrequencyFilter;
@property (readonly, nonatomic) BOOL hasOperatingHoursRange;
@property (retain, nonatomic) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter;
@property (retain, nonatomic) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter;
@property (retain, nonatomic) GEOTraitsTransitScheduleTimeRange *operatingHoursRange;
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