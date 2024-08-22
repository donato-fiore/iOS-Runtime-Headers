// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERNOTIFICATIONTYPEITEM_H
#define CALDAVCALENDARSERVERNOTIFICATIONTYPEITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren;



@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteNotification; // ivar: _inviteNotification
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteReply; // ivar: _inviteReply
@property (readonly, nonatomic) BOOL isInviteNotification;
@property (readonly, nonatomic) BOOL isInviteReply;
@property (readonly, nonatomic) BOOL isResourceChanged;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *resourceChanged; // ivar: _resourceChanged


-(BOOL)notificationNameIn:(id)arg0 ;
-(BOOL)notificationNameMatches:(id)arg0 ;
-(id)copyParseRules;
-(id)description;


@end


#endif