// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCALENDAREVENTCONTENTITEMCHANGETRANSACTION_H
#define WFCALENDAREVENTCONTENTITEMCHANGETRANSACTION_H

@class EKEvent;


#import "WFCalendarItemContentItemChangeTransaction.h"

@interface WFCalendarEventContentItemChangeTransaction : WFCalendarItemContentItemChangeTransaction

@property (readonly, nonatomic) EKEvent *mutableEvent;


// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;


@end


#endif