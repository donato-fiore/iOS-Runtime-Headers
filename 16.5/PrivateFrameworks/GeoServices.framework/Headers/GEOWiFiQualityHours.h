// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOWIFIQUALITYHOURS_H
#define GEOWIFIQUALITYHOURS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;



@interface GEOWiFiQualityHours : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _days;
    *GEOWiFiQualityTimeRange _timeRanges;
    NSUInteger _timeRangesCount;
    NSUInteger _timeRangesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *int days;
@property (readonly, nonatomic) NSUInteger daysCount;
@property (readonly, nonatomic) *GEOWiFiQualityTimeRange timeRanges;
@property (readonly, nonatomic) NSUInteger timeRangesCount;


+(BOOL)isValid:(id)arg0 ;
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
-(int)daysAtIndex:(NSUInteger)arg0 ;
-(struct GEOWiFiQualityTimeRange )timeRangesAtIndex:(NSUInteger)arg0 ;
-(void)addDays:(int)arg0 ;
-(void)addTimeRanges:(struct GEOWiFiQualityTimeRange )arg0 ;
-(void)clearDays;
-(void)clearTimeRanges;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif