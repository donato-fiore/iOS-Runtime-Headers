// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARRESOURCECHANGENOTIFICATION_H
#define EKCALENDARRESOURCECHANGENOTIFICATION_H

@class NSString, NSNumber, NSDate;


#import "EKCalendarNotification.h"

@interface EKCalendarResourceChangeNotification : EKCalendarNotification

@property (nonatomic) BOOL allDay; // ivar: _allDay
@property (retain, nonatomic) NSString *calendarName; // ivar: _calendarName
@property (nonatomic) unsigned int changeType; // ivar: _changeType
@property (retain, nonatomic) NSNumber *createCount; // ivar: _createCount
@property (nonatomic) BOOL dateChanged; // ivar: _dateChanged
@property (retain, nonatomic) NSNumber *deleteCount; // ivar: _deleteCount
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSString *eventID; // ivar: _eventID
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (nonatomic) BOOL locationChanged; // ivar: _locationChanged
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSDate *startDateForNextOccurrence; // ivar: _startDateForNextOccurrence
@property (nonatomic) BOOL timeChanged; // ivar: _timeChanged
@property (nonatomic) BOOL titleChanged; // ivar: _titleChanged
@property (retain, nonatomic) NSNumber *updateCount; // ivar: _updateCount


-(BOOL)needsAlert;
-(id)initWithType:(NSInteger)arg0 ;
-(id)resourceChangeFromEventStore:(id)arg0 ;


@end


#endif