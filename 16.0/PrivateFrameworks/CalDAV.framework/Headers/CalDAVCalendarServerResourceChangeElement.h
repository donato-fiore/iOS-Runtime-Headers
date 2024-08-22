// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALDAVCALENDARSERVERRESOURCECHANGEELEMENT_H
#define CALDAVCALENDARSERVERRESOURCECHANGEELEMENT_H

@class CoreDAVItemWithHrefChildItem, NSURL;


#import "CalDAVUpdateOwnerItem.h"

@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem

@property (retain, nonatomic) CalDAVUpdateOwnerItem *changedBy; // ivar: _changedBy
@property (readonly, nonatomic) NSURL *fullHrefURL;


-(id)copyParseRules;
-(id)init;


@end


#endif