// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCALENDARSERVERRECURRENCEITEM_H
#define CALDAVCALENDARSERVERRECURRENCEITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;


#import "CalDAVCalendarServerChangesItem.h"

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem

@property (retain, nonatomic) CalDAVCalendarServerChangesItem *changes; // ivar: _changes
@property (readonly, nonatomic) BOOL isMaster;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *master; // ivar: _master
@property (retain, nonatomic) CoreDAVLeafItem *recurrenceID; // ivar: _recurrenceID


-(id)copyParseRules;
-(id)init;


@end


#endif