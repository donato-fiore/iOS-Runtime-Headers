// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMDISPLAYDATE_H
#define REMDISPLAYDATE_H

@class NSDate, NSTimeZone;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMDisplayDate : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 allDay:(BOOL)arg1 timeZone:(id)arg2 ;
-(id)initWithDueDateComponents:(id)arg0 alarms:(id)arg1 ;
-(id)initWithFloatingDateComponents:(id)arg0 nonFloatingDateComponents:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif