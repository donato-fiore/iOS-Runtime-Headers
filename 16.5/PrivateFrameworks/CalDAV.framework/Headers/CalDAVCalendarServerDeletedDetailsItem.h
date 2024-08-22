// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERDELETEDDETAILSITEM_H
#define CALDAVCALENDARSERVERDELETEDDETAILSITEM_H

@class CoreDAVItem, NSString, ICSDateValue;



@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem

@property (retain, nonatomic) NSString *componentType; // ivar: _componentType
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hadMoreInstances; // ivar: _hadMoreInstances
@property (retain, nonatomic) ICSDateValue *nextInstance; // ivar: _nextInstance
@property (retain, nonatomic) NSString *summary; // ivar: _summary


-(id)copyParseRules;
-(id)init;


@end


#endif