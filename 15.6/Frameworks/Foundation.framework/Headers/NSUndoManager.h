// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNDOMANAGER_H
#define NSUNDOMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSUndoManager : NSObject {
    id *_undoStack;
    id *_redoStack;
    NSArray *_runLoopModes;
    NSUInteger _NSUndoManagerPrivate1;
    id *_target;
    id *_proxy;
    *void _NSUndoManagerPrivate2;
    *void _NSUndoManagerPrivate3;
}


@property (readonly) BOOL canRedo;
@property (readonly) BOOL canUndo;
@property (readonly) NSInteger groupingLevel;
@property BOOL groupsByEvent;
@property NSUInteger levelsOfUndo;
@property (readonly) BOOL redoActionIsDiscardable;
@property (readonly, copy) NSString *redoActionName;
@property (readonly, copy) NSString *redoMenuItemTitle;
@property (readonly, getter=isRedoing) BOOL redoing;
@property (copy) NSArray *runLoopModes;
@property (readonly) BOOL undoActionIsDiscardable;
@property (readonly, copy) NSString *undoActionName;
@property (readonly, copy) NSString *undoMenuItemTitle;
@property (readonly, getter=isUndoRegistrationEnabled) BOOL undoRegistrationEnabled;
@property (readonly, getter=isUndoing) BOOL undoing;


+(void)_endTopLevelGroupings;
+(void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)arg0 ;
-(BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)arg0 ;
-(BOOL)_shouldCoalesceTypingForText:(id)arg0 ;
-(id)_methodSignatureForTargetSelector:(SEL)arg0 ;
-(id)_undoStack;
-(id)init;
-(id)prepareWithInvocationTarget:(id)arg0 ;
-(id)redoMenuTitleForUndoActionName:(id)arg0 ;
-(id)undoMenuTitleForUndoActionName:(id)arg0 ;
-(void)__redoCommonDoSingle:(BOOL)arg0 ;
-(void)__redoSingle;
-(void)_cancelAutomaticTopLevelGroupEnding;
-(void)_commitUndoGrouping;
-(void)_delayAutomaticTermination:(CGFloat)arg0 ;
-(void)_forwardTargetInvocation:(id)arg0 ;
-(void)_postCheckpointNotification;
-(void)_prepareEventGrouping;
-(void)_processEndOfEventNotification:(id)arg0 ;
-(void)_registerUndoObject:(id)arg0 ;
-(void)_rollbackUndoGrouping;
-(void)_scheduleAutomaticTopLevelGroupEnding;
-(void)_setGroupIdentifier:(id)arg0 ;
-(void)beginUndoGrouping;
-(void)dealloc;
-(void)disableUndoRegistration;
-(void)enableUndoRegistration;
-(void)endUndoGrouping;
-(void)redo;
-(void)registerUndoWithTarget:(id)arg0 handler:(id)arg1 ;
-(void)registerUndoWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)removeAllActions;
-(void)removeAllActionsWithTarget:(id)arg0 ;
-(void)setActionIsDiscardable:(BOOL)arg0 ;
-(void)setActionName:(id)arg0 ;
-(void)undo;
-(void)undoNestedGroup;


@end


#endif