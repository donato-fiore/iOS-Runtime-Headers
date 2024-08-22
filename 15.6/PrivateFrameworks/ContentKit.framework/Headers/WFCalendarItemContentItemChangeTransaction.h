// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCALENDARITEMCONTENTITEMCHANGETRANSACTION_H
#define WFCALENDARITEMCONTENTITEMCHANGETRANSACTION_H

@class EKEventStore, EKCalendarItem;


#import "WFContentItemChangeTransaction.h"

@interface WFCalendarItemContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) EKCalendarItem *mutableEvent; // ivar: _mutableEvent


-(id)initWithContentItem:(id)arg0 eventStore:(id)arg1 ;
-(void)addAttachments:(id)arg0 ;
-(void)removeAllAttachments;
-(void)updateAttachments:(id)arg0 ;


@end


#endif