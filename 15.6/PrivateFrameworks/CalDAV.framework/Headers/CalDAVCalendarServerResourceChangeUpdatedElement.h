// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVCALENDARSERVERRESOURCECHANGEUPDATEDELEMENT_H
#define CALDAVCALENDARSERVERRESOURCECHANGEUPDATEDELEMENT_H

@class NSMutableSet, CoreDAVItem;


#import "CalDAVCalendarServerResourceChangeElement.h"

@interface CalDAVCalendarServerResourceChangeUpdatedElement : CalDAVCalendarServerResourceChangeElement

@property (retain, nonatomic) NSMutableSet *calendarChanges; // ivar: _calendarChanges
@property (nonatomic) BOOL content; // ivar: _content
@property (retain, nonatomic) CoreDAVItem *prop; // ivar: _prop


-(id)copyParseRules;
-(id)init;
-(void)addCalendarChange:(id)arg0 ;
-(void)addContentItem:(id)arg0 ;


@end


#endif