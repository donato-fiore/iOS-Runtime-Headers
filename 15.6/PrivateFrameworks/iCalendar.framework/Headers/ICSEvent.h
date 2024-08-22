// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSEVENT_H
#define ICSEVENT_H

@class NSArray, NSString, NSURL;


#import "ICSCalendarItem.h"
#import "ICSDate.h"
#import "ICSDuration.h"
#import "ICSUserAddress.h"
#import "ICSStructuredLocation.h"
#import "ICSTravelAdvisoryBehavior.h"
#import "ICSTravelDuration.h"

@interface ICSEvent : ICSCalendarItem

@property (retain) NSArray *attach;
@property (retain) NSArray *attendee;
@property int classification;
@property (retain) NSArray *conferences;
@property (retain) ICSDate *created;
@property (retain) NSString *description;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) NSArray *exdate;
@property (retain) NSArray *exrule;
@property BOOL forcedAllDay;
@property (readonly) BOOL isAllDay;
@property (retain) ICSDate *last_modified;
@property (retain) NSString *location;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSArray *rdate;
@property (retain) ICSDate *recurrence_id;
@property (retain) NSArray *rrule;
@property NSUInteger sequence;
@property int status;
@property (retain) NSString *summary;
@property (nonatomic) int transp;
@property (retain) NSString *uid;
@property (retain) NSURL *url;
@property (nonatomic) BOOL x_apple_dontschedule;
@property (retain) NSString *x_apple_dropbox;
@property (retain) ICSStructuredLocation *x_apple_end_location;
@property (nonatomic) int x_apple_ews_busystatus;
@property (retain) NSString *x_apple_ews_changekey;
@property (retain) NSString *x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation;
@property (retain) NSString *x_apple_ews_permission;
@property BOOL x_apple_ignore_on_restore;
@property (nonatomic) BOOL x_apple_needs_reply;
@property (retain) ICSStructuredLocation *x_apple_structured_location;
@property (retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior;
@property (retain) ICSTravelDuration *x_apple_travel_duration;
@property (retain) ICSStructuredLocation *x_apple_travel_start;
@property (retain, nonatomic) NSArray *x_calendarserver_attendee_comment;
@property (retain, nonatomic) NSString *x_calendarserver_private_comment;
@property (nonatomic) BOOL x_wr_itipalreadysent;
@property (nonatomic) BOOL x_wr_itipstatusattendeeml;
@property (nonatomic) BOOL x_wr_itipstatusml;
@property (nonatomic) BOOL x_wr_rsvpneeded;


+(id)name;
-(BOOL)isDefaultAlarmDeleted;
-(BOOL)validate:(*id)arg0 ;
-(id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg0 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg0 ;
-(void)fixAttendeeComments;
-(void)fixComponent;


@end


#endif