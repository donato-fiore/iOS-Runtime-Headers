// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVSCHEDULECALENDARTRANSPITEM_H
#define CALDAVSCHEDULECALENDARTRANSPITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren;



@interface CalDAVScheduleCalendarTranspItem : CoreDAVItem

@property (readonly, nonatomic) BOOL isScheduleTransparent;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *transparent; // ivar: _transparent


-(id)copyParseRules;
-(id)init;


@end


#endif