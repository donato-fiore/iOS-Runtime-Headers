// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVRESOURCETYPEITEM_H
#define CALDAVRESOURCETYPEITEM_H

@class CoreDAVResourceTypeItem, CoreDAVItemWithNoChildren;



@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendar; // ivar: _calendar
@property (retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar; // ivar: _isFamilyCalendar
@property (retain, nonatomic) CoreDAVItemWithNoChildren *notification; // ivar: _notification
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox; // ivar: _scheduleInbox
@property (retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox; // ivar: _scheduleOutbox
@property (retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner; // ivar: _sharedOwner
@property (retain, nonatomic) CoreDAVItemWithNoChildren *subscribed; // ivar: _subscribed


-(id)copyParseRules;
-(void)write:(id)arg0 ;


@end


#endif