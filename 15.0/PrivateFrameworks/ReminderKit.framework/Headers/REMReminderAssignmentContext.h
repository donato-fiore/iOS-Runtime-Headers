// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMREMINDERASSIGNMENTCONTEXT_H
#define REMREMINDERASSIGNMENTCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "REMAssignment.h"
#import "REMReminder.h"

@interface REMReminderAssignmentContext : NSObject

@property (readonly, nonatomic) NSSet *assignments;
@property (readonly, nonatomic) REMAssignment *currentAssignment;
@property (weak, nonatomic) REMReminder *reminder; // ivar: _reminder


-(id)initWithReminder:(id)arg0 ;


@end


#endif