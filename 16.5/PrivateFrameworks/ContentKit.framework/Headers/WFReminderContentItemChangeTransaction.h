// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFREMINDERCONTENTITEMCHANGETRANSACTION_H
#define WFREMINDERCONTENTITEMCHANGETRANSACTION_H

@class REMReminderChangeItem, REMSaveRequest, REMStore;


#import "WFContentItemChangeTransaction.h"

@interface WFReminderContentItemChangeTransaction : WFContentItemChangeTransaction

@property (readonly, nonatomic) REMReminderChangeItem *mutableReminder; // ivar: _mutableReminder
@property (retain, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (readonly, nonatomic) REMStore *store; // ivar: _store


+(void)addImageFiles:(id)arg0 toAttachmentContext:(id)arg1 ;
-(id)initWithContentItem:(id)arg0 ;
-(void)addImageFiles:(id)arg0 ;
-(void)addSubtasks:(id)arg0 ;
-(void)addTags:(id)arg0 ;
-(void)removeAllImageAttachments;
-(void)removeAllSubtasks;
-(void)removeSubtasks:(id)arg0 ;
// -(void)saveWithCompletionHandler:(id)arg0 isNew:(unk)arg1  ;
-(void)updateImageFiles:(id)arg0 ;
-(void)updateList:(id)arg0 ;
-(void)updateSubtasks:(id)arg0 ;
-(void)updateTags:(id)arg0 ;


@end


#endif