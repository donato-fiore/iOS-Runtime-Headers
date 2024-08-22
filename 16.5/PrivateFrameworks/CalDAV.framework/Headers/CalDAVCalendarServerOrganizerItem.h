// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERORGANIZERITEM_H
#define CALDAVCALENDARSERVERORGANIZERITEM_H

@class CoreDAVItem, CoreDAVLeafItem, CoreDAVHrefItem;



@interface CalDAVCalendarServerOrganizerItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVLeafItem *commonName; // ivar: _commonName
@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href


-(id)copyParseRules;
-(id)init;


@end


#endif