// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALDAVCALENDARSERVERUSERITEM_H
#define CALDAVCALENDARSERVERUSERITEM_H

@class CoreDAVItem, NSURL, CoreDAVLeafItem, NSString, CoreDAVHrefItem, CoreDAVItemWithNoChildren;


#import "CalDAVCalendarServerAccessItem.h"

@interface CalDAVCalendarServerUserItem : CoreDAVItem

@property (retain, nonatomic) NSURL *acceptedURL; // ivar: _acceptedURL
@property (retain, nonatomic) CalDAVCalendarServerAccessItem *access; // ivar: _access
@property (retain, nonatomic) CoreDAVLeafItem *commonName; // ivar: _commonName
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) CoreDAVHrefItem *href; // ivar: _href
@property (retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // ivar: _inviteStatus
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) CoreDAVLeafItem *summary; // ivar: _summary


-(NSInteger)compare:(id)arg0 ;
-(id)copyParseRules;
-(id)description;
-(id)init;
-(id)initWithHREF:(id)arg0 commonName:(id)arg1 inviteStatus:(int)arg2 access:(int)arg3 ;


@end


#endif