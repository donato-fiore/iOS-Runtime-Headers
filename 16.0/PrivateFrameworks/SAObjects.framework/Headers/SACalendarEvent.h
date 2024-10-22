// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SACALENDAREVENT_H
#define SACALENDAREVENT_H

@class NSArray, NSURL, NSDate, NSNumber, NSString;


#import "SADomainObject.h"

@interface SACalendarEvent : SADomainObject

@property (copy, nonatomic) NSArray *alerts;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSArray *attendees;
@property (copy, nonatomic) NSURL *calendarId;
@property (copy, nonatomic) NSURL *calendarPunchoutURI;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *includeRecurrences;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSNumber *readOnly;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSString *selfParticipantStatus;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *title;


+(id)event;
+(id)eventWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif