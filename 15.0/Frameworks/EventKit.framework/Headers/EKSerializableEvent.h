// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSERIALIZABLEEVENT_H
#define EKSERIALIZABLEEVENT_H

@class NSArray, NSString, NSDate, NSMutableArray, NSTimeZone, NSURL;


#import "EKSerializableObject.h"
#import "EKSerializableStructuredLocation.h"

@interface EKSerializableEvent : EKSerializableObject

@property (retain, nonatomic) NSArray *alarms; // ivar: _alarms
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (copy, nonatomic) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL isAllDay; // ivar: _isAllDay
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (copy, nonatomic) NSString *notes; // ivar: _notes
@property (retain, nonatomic) NSMutableArray *recurrenceRules; // ivar: _recurrenceRules
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) EKSerializableStructuredLocation *structuredLocation; // ivar: _structuredLocation
@property (copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) CGFloat travelTime; // ivar: _travelTime
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)classesForKey;
+(id)serializedProperties;
-(id)createEventInEventStore:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(void)_initAlarms:(id)arg0 ;
-(void)_initAttachments:(id)arg0 ;
-(void)_initAttendees:(id)arg0 ;
-(void)_initRecurrenceRules:(id)arg0 ;


@end


#endif