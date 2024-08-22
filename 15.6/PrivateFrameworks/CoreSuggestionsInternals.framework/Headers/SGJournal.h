// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGJOURNAL_H
#define SGJOURNAL_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SGJournal : NSObject {
    NSMutableArray *_calendarObservers;
    NSMutableArray *_contactsObservers;
    NSMutableArray *_remindersObservers;
    NSMutableArray *_queuedOperations;
    BOOL _observersFrozen;
}




-(BOOL)hasObserver:(id)arg0 ;
-(NSUInteger)_eventBatchOperationSupportedForEntries:(id)arg0 ;
-(id)init;
-(void)_callCalendarObservers:(id)arg0 contactsObservers:(id)arg1 remindersObservers:(id)arg2 withEntry:(id)arg3 ;
-(void)addCalendarObserver:(id)arg0 ;
-(void)addContactsObserver:(id)arg0 ;
-(void)addEntries:(id)arg0 ;
-(void)addEntry:(id)arg0 ;
-(void)addRemindersObserver:(id)arg0 ;
-(void)freezeObservers;
-(void)thawObserversForTesting;


@end


#endif