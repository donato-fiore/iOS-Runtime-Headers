// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCALENDAREVENTCONTENTITEMCHANGETRANSACTION_H
#define WFCALENDAREVENTCONTENTITEMCHANGETRANSACTION_H

@class EKEvent;


#import "WFContentItemChangeTransaction.h"

@interface WFCalendarEventContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) EKEvent *mutableEvent; // ivar: _mutableEvent


-(id)initWithContentItem:(id)arg0 ;
// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;


@end


#endif