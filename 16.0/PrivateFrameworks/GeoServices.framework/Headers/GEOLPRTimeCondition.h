// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLPRTIMECONDITION_H
#define GEOLPRTIMECONDITION_H

@class PBCodable, PBDataReader;
@protocol NSCopying;



@interface GEOLPRTimeCondition : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    ? _dayOfMonths;
    ? _dayOfWeeks;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (readonly, nonatomic) *unsigned int dayOfMonths;
@property (readonly, nonatomic) NSUInteger dayOfMonthsCount;
@property (readonly, nonatomic) *int dayOfWeeks;
@property (readonly, nonatomic) NSUInteger dayOfWeeksCount;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dayOfWeeksAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsDayOfWeeks:(id)arg0 ;
-(int)dayOfWeekAtIndex:(NSUInteger)arg0 ;
-(unsigned int)dayOfMonthAtIndex:(NSUInteger)arg0 ;
-(void)addDayOfMonth:(unsigned int)arg0 ;
-(void)addDayOfWeek:(int)arg0 ;
-(void)clearDayOfMonths;
-(void)clearDayOfWeeks;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif