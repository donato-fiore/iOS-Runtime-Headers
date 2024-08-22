// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCALENDARITEMCONTENTITEMCHANGETRANSACTION_H
#define WFCALENDARITEMCONTENTITEMCHANGETRANSACTION_H

@class EKCalendarItem;


#import "WFContentItemChangeTransaction.h"

@interface WFCalendarItemContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKCalendarItem *mutableEvent; // ivar: _mutableEvent


-(id)initWithOriginalContentItem:(id)arg0 mutableEvent:(id)arg1 ;


@end


#endif