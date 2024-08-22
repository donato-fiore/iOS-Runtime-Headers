// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKREMINDERSTORE_H
#define EKREMINDERSTORE_H

@class NSArray, NSMutableDictionary, NSMutableSet, NSMutableArray, NSString, REMStore;
@protocol EKUpdatedReminderBackingObjectProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EKEventStore.h"

@interface EKReminderStore : NSObject <EKUpdatedReminderBackingObjectProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sources;
    NSMutableDictionary *_cachedConstraints;
    NSArray *_lists;
    NSMutableSet *_newObjectsIDs;
    NSMutableDictionary *_updatedObjects;
    NSMutableSet *_objectIDsToCommit;
    NSMutableDictionary *_deletedObjects;
    NSMutableArray *_objectsToReset;
    NSMutableArray *_remindersNeedingMove;
    NSMutableDictionary *_movedRemindersIDMap;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSMutableDictionary *queryCompletionHandlers;
}


@property (readonly) NSArray *calendars;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak) EKEventStore *eventStore; // ivar: _eventStore
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REMStore *remStore; // ivar: _remStore
@property (readonly) NSArray *sources;
@property (readonly) Class superclass;


+(BOOL)isNotFoundError:(id)arg0 ;
+(Class)frozenClassForReminderClass:(Class)arg0 ;
+(id)log;
+(id)uniqueIdentifierForREMObject:(id)arg0 ;
-(BOOL)_commit:(*id)arg0 error:(*id)arg1 ;
-(BOOL)commit:(*id)arg0 ;
-(BOOL)isSourceManaged:(id)arg0 ;
-(BOOL)removeCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeReminder:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveCalendar:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveObject:(id)arg0 withFrozenObject:(id)arg1 error:(*id)arg2 ;
-(BOOL)saveReminder:(id)arg0 error:(*id)arg1 ;
-(id)_allLists;
-(id)_fetchAndCacheConstraintsForFrozenSource:(id)arg0 ;
-(id)_moveRemindersToNewLists:(id)arg0 error:(*id)arg1 ;
-(id)backingCalendarWithIdentifier:(id)arg0 ;
-(id)backingReminderWithIdentifier:(id)arg0 ;
-(id)cachedConstraintsForSource:(id)arg0 ;
-(id)calendarWithIdentifier:(id)arg0 ;
-(id)completionBlockForFetchRequestToken:(SEL)arg0 remove:(id)arg1 ;
-(id)createNewReminder;
-(id)createNewReminderCalendar;
-(id)defaultCalendarForNewReminders;
-(id)existingUpdatedObject:(id)arg0 ;
-(id)fetchRemindersMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(id)frozenAlarmForREMAlarms:(id)arg0 ;
-(id)frozenCalendarFromCalendar:(id)arg0 error:(*id)arg1 ;
-(id)frozenObjectForReminderObject:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 token:(id)arg1 ;
-(id)newFrozenObjectForReminderObject:(id)arg0 withChanges:(id)arg1 ;
-(id)predicateForCalendarStoreForRemindersInCalendars:(id)arg0 ;
-(id)predicateForCompletedRemindersWithCompletionDateStarting:(id)arg0 ending:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForIncompleteRemindersWithDueDateStarting:(id)arg0 ending:(id)arg1 calendars:(id)arg2 ;
-(id)predicateForRemindersInCalendars:(id)arg0 ;
-(id)reminderWithIdentifier:(id)arg0 ;
-(id)reminderWithUniqueId:(id)arg0 ;
-(id)remindersMatchingPredicate:(id)arg0 ;
-(id)remindersWithExternalIdentifier:(id)arg0 ;
-(id)resetBackingAlarmWithBackingAlarm:(id)arg0 ;
-(id)resetBackingLocationWithBackingLocation:(id)arg0 ;
-(id)sourceWithIdentifier:(id)arg0 ;
-(void)_checkPredicate:(id)arg0 ;
-(void)_loadAccounts;
-(void)_loadAccountsIfNeeded;
-(void)_loadLists;
-(void)_loadListsIfNeeded;
-(void)_reminderCopiedToNewList:(id)arg0 ;
-(void)fillInPath:(id)arg0 usingParents:(id)arg1 ;
-(void)remindersChanged;
-(void)reset;


@end


#endif