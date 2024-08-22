// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDAREVENTINVITATIONNOTIFICATION_H
#define EKCALENDAREVENTINVITATIONNOTIFICATION_H

@class NSArray, NSDate, NSString, NSTimeZone;
@protocol NSCopying;


#import "EKCalendarNotification.h"
#import "EKCalendarEventInvitationNotificationAttendee.h"
#import "EKRecurrenceRule.h"

@interface EKCalendarEventInvitationNotification : EKCalendarNotification <NSCopying>



@property (nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (nonatomic) BOOL attendeeReplyChanged; // ivar: _attendeeReplyChanged
@property (retain, nonatomic) NSArray *attendees; // ivar: _attendees
@property (nonatomic) BOOL couldBeJunk;
@property (nonatomic) BOOL dateChanged; // ivar: _dateChanged
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *expandedProposedTimeAttendee; // ivar: _expandedProposedTimeAttendee
@property (readonly, nonatomic) NSString *invitedBy; // ivar: _invitedBy
@property (nonatomic) BOOL isForReReply; // ivar: _isForReReply
@property (nonatomic) BOOL isLocationDecline; // ivar: _isLocationDecline
@property (retain, nonatomic) NSString *location; // ivar: _location
@property (nonatomic) BOOL locationChanged; // ivar: _locationChanged
@property (retain, nonatomic) EKCalendarEventInvitationNotificationAttendee *owner; // ivar: _owner
@property (nonatomic) NSInteger participationStatus; // ivar: _participationStatus
@property (retain, nonatomic) NSDate *participationStatusModifiedDate; // ivar: _participationStatusModifiedDate
@property (retain, nonatomic) EKRecurrenceRule *recurrenceRule; // ivar: _recurrenceRule
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (retain, nonatomic) NSDate *startDateForNextOccurrence; // ivar: _startDateForNextOccurrence
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) BOOL timeChanged; // ivar: _timeChanged
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone
@property (nonatomic) BOOL titleChanged; // ivar: _titleChanged
@property (nonatomic) BOOL videoConferenceChanged; // ivar: _videoConferenceChanged


-(BOOL)acknowledgeWithEventStore:(id)arg0 error:(*id)arg1 ;
-(BOOL)hasRecurrenceRules;
-(BOOL)isInvitation;
-(BOOL)isProposedNewTime;
-(BOOL)needsReply;
-(BOOL)proposedStartDateIsInFutureForAttendee:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventFromEventStore:(id)arg0 ;
-(id)initWithEvent:(id)arg0 ;
-(id)nearestProposedTime;


@end


#endif