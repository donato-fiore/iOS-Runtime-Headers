// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMFSCHEDULE_H
#define FMFSCHEDULE_H

@class NSCalendar, NSDictionary, NSString, NSTimeZone;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FMFSchedule : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSCalendar *_gregorian; // ivar: _gregorian
@property (nonatomic) NSInteger daysOfWeek; // ivar: _daysOfWeek
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (nonatomic) NSUInteger endHour; // ivar: _endHour
@property (nonatomic) NSUInteger endMin; // ivar: _endMin
@property (readonly, nonatomic) NSString *localizedDaysOfWeekString;
@property (readonly, nonatomic) NSString *localizedEndTimeString;
@property (readonly, nonatomic) NSString *localizedStartTimeString;
@property (nonatomic) NSUInteger spanDays; // ivar: _spanDays
@property (nonatomic) NSUInteger startHour; // ivar: _startHour
@property (nonatomic) NSUInteger startMin; // ivar: _startMin
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (readonly) NSString *validityError;


+(BOOL)supportsSecureCoding;
+(id)_dateFromHour:(NSUInteger)arg0 andMinute:(NSUInteger)arg1 ;
+(id)_dayStringForDayOfWeek:(NSInteger)arg0 ;
+(id)_stringForDaysOfWeek:(NSInteger)arg0 ;
+(id)firstDateFromDates:(id)arg0 order:(NSInteger)arg1 ;
+(id)localizedDaysOfWeekStringFor:(NSInteger)arg0 ;
+(id)localizedTimeStringForHour:(NSUInteger)arg0 andMinute:(NSUInteger)arg1 ;
+(id)localizedTimeStringForHour:(NSUInteger)arg0 andMinute:(NSUInteger)arg1 timeStyle:(NSUInteger)arg2 ;
+(void)_enumerateDaysOfWeekInFMFDaysOfWeek:(NSInteger)arg0 callback:(id)arg1 ;
-(BOOL)isCurrentAt:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_endDateForStartDate:(id)arg0 ;
-(id)_nextStartDateOnDayOfWeek:(NSInteger)arg0 from:(id)arg1 options:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)nextStartDateFrom:(id)arg0 options:(NSUInteger)arg1 ;
-(id)nextStartOrEndDateFrom:(id)arg0 ;
-(id)previousStartDateFrom:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif