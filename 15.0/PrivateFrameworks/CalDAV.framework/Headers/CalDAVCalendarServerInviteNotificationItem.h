// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCALENDARSERVERINVITENOTIFICATIONITEM_H
#define CALDAVCALENDARSERVERINVITENOTIFICATIONITEM_H

@class CoreDAVItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem, CoreDAVHrefItem, CoreDAVLeafItem;


#import "CalDAVCalendarServerAccessItem.h"
#import "CalDAVCalendarServerOrganizerItem.h"
#import "CalDAVSupportedCalendarComponentSet.h"

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem

@property (retain, nonatomic) CalDAVCalendarServerAccessItem *access; // ivar: _access
@property (retain, nonatomic) CoreDAVItemWithNoChildren *calendarPublic; // ivar: _calendarPublic
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL; // ivar: _hostURL
@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // ivar: _inviteStatus
@property (retain, nonatomic) CalDAVCalendarServerOrganizerItem *organizer; // ivar: _organizer
@property (retain, nonatomic) CoreDAVLeafItem *summary; // ivar: _summary
@property (retain, nonatomic) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet; // ivar: _supportedCalendarComponentSet
@property (retain, nonatomic) CoreDAVLeafItem *uid; // ivar: _uid


-(BOOL)isComponentSupportedForString:(id)arg0 ;
-(id)copyParseRules;
-(id)init;
-(id)initForReplyWithUID:(id)arg0 href:(id)arg1 hostURL:(id)arg2 summary:(id)arg3 ;


@end


#endif