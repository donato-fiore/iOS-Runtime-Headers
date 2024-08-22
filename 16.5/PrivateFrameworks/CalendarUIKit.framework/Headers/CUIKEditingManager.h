// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKEDITINGMANAGER_H
#define CUIKEDITINGMANAGER_H

@class NSMutableDictionary, EKChangeListener, NSMutableSet, EKEventStore;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CUIKEditingManager : NSObject

@property (retain) NSMutableDictionary *changeHistory; // ivar: _changeHistory
@property (retain) EKChangeListener *changeListener; // ivar: _changeListener
@property (retain) NSMutableDictionary *changedObjectMap; // ivar: _changedObjectMap
@property (retain) NSMutableSet *editingContextGroups; // ivar: _editingContextGroups
@property (weak) EKEventStore *eventStore; // ivar: _eventStore
@property (retain) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)_changesExistForObject:(id)arg0 ;
-(BOOL)_closeEditingContext:(id)arg0 forceCommit:(BOOL)arg1 forceDontCommit:(BOOL)arg2 shouldClose:(*BOOL)arg3 ;
-(BOOL)_commitChangesForContext:(id)arg0 forceCommit:(BOOL)arg1 shouldClose:(*BOOL)arg2 ;
-(BOOL)_objectsSupportEditingContexts:(id)arg0 ;
-(BOOL)closeEditingContext:(id)arg0 ;
-(BOOL)closeEditingContext:(id)arg0 shouldClose:(*BOOL)arg1 ;
-(BOOL)closeEditingContextAndCommitChanges:(id)arg0 ;
-(BOOL)closeEditingContextWithoutCommittingChanges:(id)arg0 ;
-(BOOL)commitChangesFromEditingContextWithoutClosing:(id)arg0 ;
-(id)_allOpenEditingContexts;
-(id)_liveEditedObjectsMatchingPredicate:(id)arg0 notInSet:(id)arg1 ;
-(id)_objectsWithLiveEdits:(id)arg0 matchingPredicate:(id)arg1 ;
-(id)_openEditingContextWithObjects:(id)arg0 interfaceType:(NSUInteger)arg1 observer:(id)arg2 ;
-(id)changedObjectsCopy;
-(id)eventWithIdentifier:(id)arg0 ;
-(id)eventsMatchingPredicate:(id)arg0 ;
-(id)eventsWithExternalIdentifier:(id)arg0 ;
-(id)eventsWithIdentifiers:(id)arg0 ;
-(id)initWithEventStore:(id)arg0 ;
-(id)openEditingContextWithObject:(id)arg0 interfaceType:(NSUInteger)arg1 ;
-(id)openEditingContextWithObject:(id)arg0 interfaceType:(NSUInteger)arg1 observer:(id)arg2 ;
-(id)openEditingContextWithObjects:(id)arg0 interfaceType:(NSUInteger)arg1 ;
-(id)openEditingContextWithObjects:(id)arg0 interfaceType:(NSUInteger)arg1 observer:(id)arg2 ;
-(id)remindersMatchingPredicate:(id)arg0 ;
-(id)remindersWithExternalIdentifier:(id)arg0 ;
-(void)_addContextToNewOrExistingGroup:(id)arg0 ;
-(void)applyLiveChangesToObject:(id)arg0 ;
-(void)applyLiveChangesToObjects:(id)arg0 ;
-(void)clearAllLiveChanges;
-(void)clearLiveChangesForObjects:(id)arg0 ;
-(void)fetchEventsMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(void)fetchRemindersMatchingPredicate:(id)arg0 completion:(id)arg1 ;
-(void)partialSaveObject:(id)arg0 ;


@end


#endif