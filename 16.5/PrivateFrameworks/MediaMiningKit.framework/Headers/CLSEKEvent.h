// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSEKEVENT_H
#define CLSEKEVENT_H

@class NSArray, NSString, NSDate, CLLocation;
@protocol NSCoding;

#import <Foundation/Foundation.h>

#import "CLSEKCalendar.h"
#import "CLSEKParticipant.h"

@interface CLSEKEvent : NSObject <NSCoding>



@property (readonly, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (readonly) NSArray *attendees; // ivar: _attendees
@property (readonly) CLSEKCalendar *calendar; // ivar: _calendar
@property (readonly) NSString *calendarItemIdentifier; // ivar: _calendarItemIdentifier
@property (readonly) CLLocationCoordinate2D coordinate; // ivar: _coordinate
@property (readonly) NSDate *endDate; // ivar: _endDate
@property (readonly) CLLocation *geoLocation;
@property (readonly) BOOL hasAttendees; // ivar: _hasAttendees
@property (readonly) BOOL hasRecurrenceRules; // ivar: _hasRecurrenceRules
@property (readonly) BOOL isBirthday; // ivar: _isBirthday
@property (readonly) BOOL isSuggestedAndAccepted; // ivar: _isSuggestedAndAccepted
@property (readonly) BOOL organizedByMe; // ivar: _organizedByMe
@property (readonly) CLSEKParticipant *selfAttendee; // ivar: _selfAttendee
@property (readonly) NSDate *startDate; // ivar: _startDate
@property (readonly) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif