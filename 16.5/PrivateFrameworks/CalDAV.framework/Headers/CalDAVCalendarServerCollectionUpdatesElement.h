// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERCOLLECTIONUPDATESELEMENT_H
#define CALDAVCALENDARSERVERCOLLECTIONUPDATESELEMENT_H



#import "CalDAVCalendarServerResourceChangeElement.h"

@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement

@property (readonly, nonatomic) int state; // ivar: _state


-(id)copyParseRules;
-(void)setPublish:(id)arg0 ;
-(void)setUnpublish:(id)arg0 ;


@end


#endif