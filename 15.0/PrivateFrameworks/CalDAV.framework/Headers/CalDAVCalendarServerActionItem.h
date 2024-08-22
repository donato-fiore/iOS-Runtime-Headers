// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCALENDARSERVERACTIONITEM_H
#define CALDAVCALENDARSERVERACTIONITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren;


#import "CalDAVCalendarServerCancelItem.h"
#import "CalDAVCalendarServerReplyItem.h"
#import "CalDAVCalendarServerUpdateItem.h"

@interface CalDAVCalendarServerActionItem : CoreDAVItem

@property (retain, nonatomic) CalDAVCalendarServerCancelItem *cancel; // ivar: _cancel
@property (retain, nonatomic) CoreDAVItemWithNoChildren *create; // ivar: _create
@property (retain, nonatomic) CalDAVCalendarServerReplyItem *reply; // ivar: _reply
@property (retain, nonatomic) CalDAVCalendarServerUpdateItem *update; // ivar: _update


-(id)copyParseRules;
-(id)init;


@end


#endif