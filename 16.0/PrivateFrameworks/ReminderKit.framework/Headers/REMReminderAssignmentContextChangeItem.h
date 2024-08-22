// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMREMINDERASSIGNMENTCONTEXTCHANGEITEM_H
#define REMREMINDERASSIGNMENTCONTEXTCHANGEITEM_H

@class NSSet, NSMutableSet;

#import <Foundation/Foundation.h>

#import "REMAssignment.h"
#import "REMReminderChangeItem.h"

@interface REMReminderAssignmentContextChangeItem : NSObject

@property (readonly, nonatomic) NSSet *assignments;
@property (readonly, nonatomic) REMAssignment *currentAssignment;
@property (retain, nonatomic) NSMutableSet *mutableAssignments; // ivar: _mutableAssignments
@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem; // ivar: _reminderChangeItem


-(id)addAssignmentWithAssignee:(id)arg0 originator:(id)arg1 status:(NSInteger)arg2 ;
-(id)addAssignmentWithAssigneeID:(id)arg0 originatorID:(id)arg1 status:(NSInteger)arg2 ;
-(id)initWithReminderChangeItem:(id)arg0 ;
-(void)addAssignment:(id)arg0 ;
-(void)removeAllAssignments;
-(void)removeAssignment:(id)arg0 ;


@end


#endif