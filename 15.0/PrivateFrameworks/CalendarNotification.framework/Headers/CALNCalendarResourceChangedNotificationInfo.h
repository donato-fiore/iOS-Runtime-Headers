// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNCALENDARRESOURCECHANGEDNOTIFICATIONINFO_H
#define CALNCALENDARRESOURCECHANGEDNOTIFICATIONINFO_H

@class EKCalendarResourceChangeNotification, NSDate, NSURL, NSString, NSTimeZone;

#import <Foundation/Foundation.h>


@interface CALNCalendarResourceChangedNotificationInfo : NSObject

@property (readonly, nonatomic) BOOL allDay; // ivar: _allDay
@property (readonly, nonatomic) EKCalendarResourceChangeNotification *calendarNotification; // ivar: _calendarNotification
@property (readonly, nonatomic) unsigned int changeType; // ivar: _changeType
@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL isDelegate; // ivar: _isDelegate
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, copy, nonatomic) NSString *sourceClientIdentifier; // ivar: _sourceClientIdentifier
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (readonly, copy, nonatomic) NSString *sourceTitle; // ivar: _sourceTitle
@property (readonly, copy, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(id)description;
-(id)initWithSourceClientIdentifier:(id)arg0 calendarNotification:(id)arg1 changeType:(unsigned int)arg2 date:(id)arg3 allDay:(BOOL)arg4 timeZone:(id)arg5 expirationDate:(id)arg6 launchURL:(id)arg7 isDelegate:(BOOL)arg8 sourceTitle:(id)arg9 sourceIdentifier:(id)arg10 ;


@end


#endif