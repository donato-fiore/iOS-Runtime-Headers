// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARSERVERREPLYITEM_H
#define CALDAVCALENDARSERVERREPLYITEM_H

@class CoreDAVLeafItem;


#import "CalDAVItemWithRecurrenceChildren.h"

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren

@property (retain, nonatomic) CoreDAVLeafItem *attendee; // ivar: _attendee


-(id)copyParseRules;


@end


#endif