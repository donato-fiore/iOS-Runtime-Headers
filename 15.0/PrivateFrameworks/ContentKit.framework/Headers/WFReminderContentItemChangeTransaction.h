// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREMINDERCONTENTITEMCHANGETRANSACTION_H
#define WFREMINDERCONTENTITEMCHANGETRANSACTION_H

@class REMReminderChangeItem, REMSaveRequest, REMStore;


#import "WFContentItemChangeTransaction.h"

@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) REMReminderChangeItem *mutableReminder; // ivar: _mutableReminder
@property (retain, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)initWithContentItem:(id)arg0 ;
// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;
-(void)updateList:(id)arg0 ;
-(void)updateSubtasks:(id)arg0 ;


@end


#endif