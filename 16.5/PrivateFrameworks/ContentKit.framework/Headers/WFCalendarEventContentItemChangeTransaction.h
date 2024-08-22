// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCALENDAREVENTCONTENTITEMCHANGETRANSACTION_H
#define WFCALENDAREVENTCONTENTITEMCHANGETRANSACTION_H

@class EKEventStore, EKEvent;


#import "WFContentItemChangeTransaction.h"

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly, nonatomic) EKEvent *mutableEvent; // ivar: _mutableEvent


-(id)initWithContentItem:(id)arg0 eventStore:(id)arg1 ;
-(void)addAttachments:(id)arg0 ;
-(void)removeAllAttachments;
// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;
-(void)updateAttachments:(id)arg0 ;


@end


#endif