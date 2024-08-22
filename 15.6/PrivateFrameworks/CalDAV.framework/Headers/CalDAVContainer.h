// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCONTAINER_H
#define CALDAVCONTAINER_H

@class CoreDAVContainer, NSString, NSSet, NSURL, ICSDuration, NSTimeZone;



@interface CalDAVContainer : CoreDAVContainer

@property (retain, nonatomic) NSString *alarms; // ivar: _alarms
@property (nonatomic) BOOL autoprovisioned; // ivar: _autoprovisioned
@property (retain, nonatomic) NSString *calendarColor; // ivar: _calendarColor
@property (retain, nonatomic) NSString *calendarDescription; // ivar: _calendarDescription
@property (retain, nonatomic) NSString *calendarOrder; // ivar: _calendarOrder
@property (nonatomic) BOOL canBePublished; // ivar: _canBePublished
@property (nonatomic) BOOL canBeShared; // ivar: _canBeShared
@property (retain, nonatomic) NSString *ctag; // ivar: _ctag
@property (retain, nonatomic) NSString *defaultAllDayAlarms; // ivar: _defaultAllDayAlarms
@property (retain, nonatomic) NSString *defaultTimedAlarms; // ivar: _defaultTimedAlarms
@property (retain, nonatomic) NSSet *freeBusySet; // ivar: _freeBusySet
@property (readonly, nonatomic) BOOL isCalendar;
@property (readonly, nonatomic) BOOL isEventContainer;
@property (readonly, nonatomic) BOOL isFamilyCalendar;
@property (readonly, nonatomic) BOOL isJournalContainer;
@property (nonatomic) BOOL isMarkedImmutableSharees; // ivar: _isMarkedImmutableSharees
@property (nonatomic) BOOL isMarkedUndeletable; // ivar: _isMarkedUndeletable
@property (readonly, nonatomic) BOOL isNotification;
@property (readonly, nonatomic) BOOL isPollContainer;
@property (readonly, nonatomic) BOOL isScheduleInbox;
@property (readonly, nonatomic) BOOL isScheduleOutbox;
@property (nonatomic) BOOL isScheduleTransparent; // ivar: _isScheduleTransparent
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedOwner;
@property (readonly, nonatomic) BOOL isSubscribed;
@property (readonly, nonatomic) BOOL isTaskContainer;
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSString *locationCode; // ivar: _locationCode
@property (nonatomic) NSInteger maxAttendees; // ivar: _maxAttendees
@property (nonatomic) BOOL overrideSupportsFreebusy; // ivar: _overrideSupportsFreebusy
@property (retain, nonatomic) NSURL *prePublishURL; // ivar: _prePublishURL
@property (retain, nonatomic) NSURL *publishURL; // ivar: _publishURL
@property (retain, nonatomic) NSURL *scheduleDefaultCalendarURL; // ivar: _scheduleDefaultCalendarURL
@property (retain, nonatomic) NSSet *sharees; // ivar: _sharees
@property (retain, nonatomic) NSURL *source; // ivar: _source
@property (retain, nonatomic) ICSDuration *subscribedRefreshRate; // ivar: _subscribedRefreshRate
@property (nonatomic) BOOL subscribedStripAlarms; // ivar: _subscribedStripAlarms
@property (nonatomic) BOOL subscribedStripAttachments; // ivar: _subscribedStripAttachments
@property (nonatomic) BOOL subscribedStripTodos; // ivar: _subscribedStripTodos
@property (retain, nonatomic) NSSet *supportedCalendarComponentSet; // ivar: _supportedCalendarComponentSet
@property (retain, nonatomic) NSString *supportedCalendarComponentSets; // ivar: _supportedCalendarComponentSets
@property (readonly, nonatomic) BOOL supportsFreebusy;
@property (retain, nonatomic) NSString *symbolicColorName; // ivar: _symbolicColorName
@property (retain, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


+(id)copyPropertyMappingsForParser;
-(BOOL)_isComponentSupportedForString:(id)arg0 ;
-(id)description;
-(void)applyParsedProperties:(id)arg0 ;
-(void)postProcessWithResponseHeaders:(id)arg0 ;


@end


#endif