// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUIKEDITINGCONTEXT_H
#define CUIKEDITINGCONTEXT_H

@class NSArray, NSSet;
@protocol CUIKCommitDelegate, CUIKDecisionDelegate, CUIKEditingContextObserver, CUIKUndoDelegate;

#import <Foundation/Foundation.h>

#import "CUIKEditingManager.h"
#import "CUIKEditingContextGroup.h"

@interface CUIKEditingContext : NSObject

@property (weak) NSObject<CUIKCommitDelegate> *commitDelegate; // ivar: _commitDelegate
@property (weak) NSObject<CUIKDecisionDelegate> *decisionDelegate; // ivar: _decisionDelegate
@property (weak) CUIKEditingManager *editingManager; // ivar: _editingManager
@property (weak) CUIKEditingContextGroup *group; // ivar: _group
@property NSUInteger interfaceType; // ivar: _interfaceType
@property BOOL isActive; // ivar: _isActive
@property BOOL isOpen; // ivar: _isOpen
@property (retain) NSArray *objectsBeingEdited; // ivar: _objectsBeingEdited
@property (weak) NSObject<CUIKEditingContextObserver> *observer; // ivar: _observer
@property (retain) NSSet *originalIdentifiersForObjectsBeingEdited; // ivar: _originalIdentifiersForObjectsBeingEdited
@property (retain) NSArray *pendingGroupUpdates; // ivar: _pendingGroupUpdates
@property (retain) NSArray *pendingObserverUpdates; // ivar: _pendingObserverUpdates
@property (weak) NSObject<CUIKUndoDelegate> *undoDelegate; // ivar: _undoDelegate




@end


#endif