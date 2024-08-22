// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERSUBTASKCONTEXTCHANGEITEM_H
#define REMREMINDERSUBTASKCONTEXTCHANGEITEM_H


#import <Foundation/Foundation.h>

#import "REMReminderChangeItem.h"

@interface REMReminderSubtaskContextChangeItem : NSObject

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // ivar: _reminderChangeItem


-(id)_listChangeItem;
-(id)initWithReminderChangeItem:(id)arg0 ;
-(void)addReminderChangeItem:(id)arg0 ;
-(void)insertReminderChangeItem:(id)arg0 afterReminderChangeItem:(id)arg1 ;
-(void)insertReminderChangeItem:(id)arg0 beforeReminderChangeItem:(id)arg1 ;
-(void)undeleteSubtaskWithID:(id)arg0 usingUndo:(id)arg1 ;


@end


#endif