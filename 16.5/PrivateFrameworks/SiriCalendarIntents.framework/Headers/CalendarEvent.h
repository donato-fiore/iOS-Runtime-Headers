// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALENDAREVENT_H
#define CALENDAREVENT_H

@class INObject, NSString, CLPlacemark;


#import "EventCalendar.h"
#import "DateComponentsRange.h"

@interface CalendarEvent : INObject

@property (nonatomic) NSInteger availability;
@property (nonatomic, retain) EventCalendar *calendar;
@property (nonatomic, retain) DateComponentsRange *dateTimeRange;
@property (nonatomic, copy) NSString *eventIdentifier;
@property (nonatomic, retain) CLPlacemark *location;
@property (nonatomic) NSInteger status;
@property (nonatomic, copy) NSString *title;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif