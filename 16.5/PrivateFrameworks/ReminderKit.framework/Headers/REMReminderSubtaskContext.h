// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDERSUBTASKCONTEXT_H
#define REMREMINDERSUBTASKCONTEXT_H


#import <Foundation/Foundation.h>

#import "REMReminder.h"

@interface REMReminderSubtaskContext : NSObject

@property (readonly, nonatomic) REMReminder *parentReminder;
@property (retain, nonatomic) REMReminder *reminder; // ivar: _reminder


-(BOOL)hasSubtasksWithError:(*id)arg0 ;
-(id)fetchObjectIDsOfCompletedSubtasksWithError:(*id)arg0 ;
-(id)fetchObjectIDsOfUnsupportedSubtasksWithError:(*id)arg0 ;
-(id)fetchRemindersForMovingWithError:(*id)arg0 ;
-(id)fetchRemindersWithError:(*id)arg0 ;
-(id)initWithReminder:(id)arg0 ;


@end


#endif