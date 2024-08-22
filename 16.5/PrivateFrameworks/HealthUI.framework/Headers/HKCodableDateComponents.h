// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLEDATECOMPONENTS_H
#define HKCODABLEDATECOMPONENTS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HKCodableDateComponents : PBCodable <NSCopying>

 {
    APPLE_180 _has;
}


@property (retain, nonatomic) NSString *calendar; // ivar: _calendar
@property (nonatomic) NSInteger day; // ivar: _day
@property (nonatomic) NSInteger era; // ivar: _era
@property (readonly, nonatomic) BOOL hasCalendar;
@property (nonatomic) BOOL hasDay;
@property (nonatomic) BOOL hasEra;
@property (nonatomic) BOOL hasHour;
@property (nonatomic) BOOL hasMinute;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) BOOL hasNanosecond;
@property (nonatomic) BOOL hasQuarter;
@property (nonatomic) BOOL hasSecond;
@property (readonly, nonatomic) BOOL hasTimeZone;
@property (nonatomic) BOOL hasWeekOfMonth;
@property (nonatomic) BOOL hasWeekOfYear;
@property (nonatomic) BOOL hasWeekday;
@property (nonatomic) BOOL hasWeekdayOrdinal;
@property (nonatomic) BOOL hasYear;
@property (nonatomic) BOOL hasYearForWeekOfYear;
@property (nonatomic) NSInteger hour; // ivar: _hour
@property (nonatomic) NSInteger minute; // ivar: _minute
@property (nonatomic) NSInteger month; // ivar: _month
@property (nonatomic) NSInteger nanosecond; // ivar: _nanosecond
@property (nonatomic) NSInteger quarter; // ivar: _quarter
@property (nonatomic) NSInteger second; // ivar: _second
@property (retain, nonatomic) NSString *timeZone; // ivar: _timeZone
@property (nonatomic) NSInteger weekOfMonth; // ivar: _weekOfMonth
@property (nonatomic) NSInteger weekOfYear; // ivar: _weekOfYear
@property (nonatomic) NSInteger weekday; // ivar: _weekday
@property (nonatomic) NSInteger weekdayOrdinal; // ivar: _weekdayOrdinal
@property (nonatomic) NSInteger year; // ivar: _year
@property (nonatomic) NSInteger yearForWeekOfYear; // ivar: _yearForWeekOfYear


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif