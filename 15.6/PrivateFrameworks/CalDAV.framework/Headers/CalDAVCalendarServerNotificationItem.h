// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARSERVERNOTIFICATIONITEM_H
#define CALDAVCALENDARSERVERNOTIFICATIONITEM_H

@class CoreDAVItem, CoreDAVLeafItem;



@interface CalDAVCalendarServerNotificationItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItem *content; // ivar: _content
@property (retain, nonatomic) CoreDAVLeafItem *dtstamp; // ivar: _dtstamp


-(id)copyParseRules;
-(id)init;


@end


#endif