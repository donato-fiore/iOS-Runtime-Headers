// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKUSERACTIVITYNEWEVENT_H
#define CUIKUSERACTIVITYNEWEVENT_H

@class NSDate, NSString, NSTimeZone, NSURL;


#import "CUIKUserActivity.h"

@interface CUIKUserActivityNewEvent : CUIKUserActivity

@property BOOL allDay; // ivar: _allDay
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSString *location; // ivar: _location
@property (retain) NSString *notes; // ivar: _notes
@property (retain) NSDate *startDate; // ivar: _startDate
@property (retain) NSTimeZone *timeZone; // ivar: _timeZone
@property (retain) NSString *title; // ivar: _title
@property (retain) NSURL *url; // ivar: _url


-(id)dictionary;
-(id)eventWithEventStore:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif