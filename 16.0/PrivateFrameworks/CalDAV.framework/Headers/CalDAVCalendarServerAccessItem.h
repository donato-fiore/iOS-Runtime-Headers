// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARSERVERACCESSITEM_H
#define CALDAVCALENDARSERVERACCESSITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren;



@interface CalDAVCalendarServerAccessItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *accessLevel; // ivar: _accessLevel


-(id)copyParseRules;
-(id)init;
-(id)initWithAccess:(int)arg0 ;


@end


#endif