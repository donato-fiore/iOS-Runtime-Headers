// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKEDITINGCONTEXT_H
#define CUIKEDITINGCONTEXT_H

@class NSArray, EKEventStore, NSString, NSError, NSSet;
@protocol EKChangeListenerDelegate, CUIKCommitDelegate, CUIKDecisionDelegate, CUIKEditingContextObserver, CUIKUndoDelegate;

#import <Foundation/Foundation.h>

#import "CUIKEditingManager.h"
#import "CUIKEditingContextGroup.h"

@interface CUIKEditingContext : NSObject <EKChangeListenerDelegate>

 {
    NSArray *_objectsBeingEdited;
    EKEventStore *_eventStore;
}


@property (weak) NSObject<CUIKCommitDelegate> *commitDelegate; // ivar: _commitDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<CUIKDecisionDelegate> *decisionDelegate; // ivar: _decisionDelegate
@property (readonly, copy) NSString *description;
@property (weak) CUIKEditingManager *editingManager; // ivar: _editingManager
@property (retain) NSError *error; // ivar: _error
@property (weak) CUIKEditingContextGroup *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property NSUInteger interfaceType; // ivar: _interfaceType
@property BOOL isActive; // ivar: _isActive
@property BOOL isOpen; // ivar: _isOpen
@property (retain) NSArray *objectsBeingEdited;
@property (weak) NSObject<CUIKEditingContextObserver> *observer; // ivar: _observer
@property (retain) NSSet *originalIdentifiersForObjectsBeingEdited; // ivar: _originalIdentifiersForObjectsBeingEdited
@property (retain) NSArray *pendingGroupUpdates; // ivar: _pendingGroupUpdates
@property (retain) NSArray *pendingObserverUpdates; // ivar: _pendingObserverUpdates
@property (readonly) Class superclass;
@property (weak) NSObject<CUIKUndoDelegate> *undoDelegate; // ivar: _undoDelegate


+(NSInteger)spanFromSpanDecision:(NSUInteger)arg0 ;
+(NSUInteger)spanDecisionFromSpan:(NSInteger)arg0 ;
-(BOOL)_allObjectsAreCalendars;
-(BOOL)_allObjectsAreEvents;
-(BOOL)_allObjectsAreItems;
-(BOOL)_deleteIsUndoable;
-(BOOL)_earlyCommitDecisionSpecified;
-(BOOL)_hasChangesRequiringSpanAllAndSpanIsThis;
-(BOOL)_hasChangesToSave;
-(BOOL)_prepareForCommitWithDecision:(NSUInteger)arg0 shouldClose:(*BOOL)arg1 ;
-(BOOL)_requestEarlyCommitDecisionAtSaveTimeForAction:(NSUInteger)arg0 ;
-(BOOL)_requestSaveAndSpanDecisionIfNeededForAction:(NSUInteger)arg0 ;
-(BOOL)_requestSaveDecisionIfNeededForAction:(NSUInteger)arg0 diffSummary:(id)arg1 ;
-(BOOL)_requestSpanDecisionIfNeededForAction:(NSUInteger)arg0 diffSummary:(id)arg1 ;
-(BOOL)_saveActionIsDecline;
-(BOOL)_savePartialChangeAndPostNotification:(BOOL)arg0 ;
-(BOOL)_shouldSilentlyTransitionToSpanAllAfterSave;
-(BOOL)_spanDecisionSpecified;
-(BOOL)addAllObjects;
-(BOOL)deleteAllObjects;
-(BOOL)hasUpdatePriority;
-(BOOL)performUndoableOperation:(id)arg0 ;
-(BOOL)saveCompleteChange;
-(BOOL)saveCompleteChange:(*id)arg0 ;
-(BOOL)saveCompleteChangeWithImpliedCommitDecision:(*id)arg0 ;
-(BOOL)savePartialChange;
-(BOOL)shouldResetUndoStack;
-(NSInteger)_currentSpan;
-(NSUInteger)_actionToCommit;
-(NSUInteger)_currentSpanDecision;
-(NSUInteger)_earlyCommitDecision;
-(NSUInteger)_requestCommitDecisionIfNeededForAction:(NSUInteger)arg0 ;
-(id)_diffSummarySinceLastSave;
-(id)_eventStore;
-(id)changeUserInfoForObjects:(id)arg0 ;
-(id)initWithObjects:(id)arg0 interfaceType:(NSUInteger)arg1 observer:(id)arg2 ;
-(id)trackedObjects;
-(void)_cancelCurrentSave;
-(void)_clearLiveChanges;
-(void)_doManualDelete;
-(void)_markAsActive;
-(void)_markAsClosed;
-(void)_markAsInactive;
-(void)_markAsOpen;
-(void)_revert;
-(void)_revert:(BOOL)arg0 ;
-(void)_setAllObjectsToDontNotify;
-(void)_specifyEarlyCommitDecision:(NSUInteger)arg0 ;
-(void)_specifySpanDecision:(NSUInteger)arg0 ;
-(void)_unspecifyEarlyCommitDecision;
-(void)_unspecifySpanDecision;
-(void)addOriginalIdentifiersForObjectsBeingEdited:(id)arg0 ;
-(void)createAutoBugCapture;
-(void)notifyObservers;
-(void)postLiveEditNotificationForEditedObjects;
-(void)revert;
-(void)trackedObjectsDidRevert:(id)arg0 ;
-(void)trackedObjectsDidUpdate:(id)arg0 ;


@end


#endif