// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSDATECOMPONENTS_H
#define NSDATECOMPONENTS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSCalendar.h"
#import "NSDate.h"
#import "NSTimeZone.h"

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>



@property (copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *date;
@property NSInteger day;
@property NSInteger era;
@property NSInteger hour;
@property (getter=isLeapMonth) BOOL leapMonth;
@property NSInteger minute;
@property NSInteger month;
@property NSInteger nanosecond;
@property NSInteger quarter;
@property NSInteger second;
@property (copy) NSTimeZone *timeZone;
@property (readonly, getter=isValidDate) BOOL validDate;
@property NSInteger weekOfMonth;
@property NSInteger weekOfYear;
@property NSInteger weekday;
@property NSInteger weekdayOrdinal;
@property NSInteger year;
@property NSInteger yearForWeekOfYear;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidDateInCalendar:(id)arg0 ;
-(NSInteger)valueForComponent:(NSUInteger)arg0 ;
-(NSInteger)week;
-(NSUInteger)hash;
-(id)_initWithCFDateComponents:(struct __CFDateComponents *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(NSInteger)arg0 forComponent:(NSUInteger)arg1 ;
-(void)setWeek:(NSInteger)arg0 ;


@end


#endif