// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARSERVERSCHEDULECHANGESITEM_H
#define CALDAVCALENDARSERVERSCHEDULECHANGESITEM_H

@class CoreDAVItem, CoreDAVLeafItem;


#import "CalDAVCalendarServerActionItem.h"

@interface CalDAVCalendarServerScheduleChangesItem : CoreDAVItem

@property (retain, nonatomic) CalDAVCalendarServerActionItem *action; // ivar: _action
@property (retain, nonatomic) CoreDAVLeafItem *dtstamp; // ivar: _dtstamp


-(id)copyParseRules;
-(id)init;


@end


#endif