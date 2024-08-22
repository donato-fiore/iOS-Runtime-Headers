// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERINVITEREPLYITEM_H
#define CALDAVCALENDARSERVERINVITEREPLYITEM_H

@class CoreDAVItem, NSURL, NSString, CoreDAVItemWithHrefChildItem, CoreDAVHrefItem, CoreDAVLeafItem, CoreDAVItemWithNoChildren;



@interface CalDAVCalendarServerInviteReplyItem : CoreDAVItem

@property (retain, nonatomic) NSURL *acceptedURL; // ivar: _acceptedURL
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL; // ivar: _hostURL
@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href
@property (retain, nonatomic) CoreDAVLeafItem *inReplyTo; // ivar: _inReplyTo
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // ivar: _inviteStatus
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) CoreDAVLeafItem *summary; // ivar: _summary


-(id)copyParseRules;
-(id)init;


@end


#endif