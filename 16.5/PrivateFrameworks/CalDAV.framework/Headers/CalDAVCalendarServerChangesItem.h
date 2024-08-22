// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERCHANGESITEM_H
#define CALDAVCALENDARSERVERCHANGESITEM_H

@class CoreDAVItem, NSMutableSet;



@interface CalDAVCalendarServerChangesItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *changedProperties; // ivar: _changedProperties


-(id)copyParseRules;
-(id)init;
-(id)initWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(void)addChangedProperty:(id)arg0 ;


@end


#endif