// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALDAVCALENDARSERVERCOLLECTIONCHANGESELEMENT_H
#define CALDAVCALENDARSERVERCOLLECTIONCHANGESELEMENT_H



#import "CalDAVCalendarServerResourceChangeElement.h"

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement

@property (nonatomic) NSInteger created; // ivar: _created
@property (nonatomic) NSInteger deleted; // ivar: _deleted
@property (nonatomic) NSInteger updated; // ivar: _updated


-(id)copyParseRules;
-(id)init;


@end


#endif