// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERINVITEITEM_H
#define CALDAVCALENDARSERVERINVITEITEM_H

@class CoreDAVItem, NSMutableSet;



@interface CalDAVCalendarServerInviteItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *users; // ivar: _users


-(id)copyParseRules;
-(id)init;
-(id)initWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(void)addUser:(id)arg0 ;


@end


#endif