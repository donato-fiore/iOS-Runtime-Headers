// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUIKUNDOMANAGER_H
#define CUIKUNDOMANAGER_H

@class NSUndoManager, NSString, NSError, NSMutableDictionary;
@protocol CUIKUndoDelegate, CUIKCommitDelegate, CUIKDecisionDelegate;


#import "CUIKUndoableEditor.h"

@interface CUIKUndoManager : NSUndoManager <CUIKUndoDelegate>



@property (retain, nonatomic) NSObject<CUIKCommitDelegate> *commitDelegate; // ivar: _commitDelegate
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<CUIKDecisionDelegate> *decisionDelegate; // ivar: _decisionDelegate
@property (readonly, copy) NSString *description;
@property BOOL disableUndoForOrganizerScheduling; // ivar: _disableUndoForOrganizerScheduling
@property (copy, nonatomic) id *editingManagerProvider; // ivar: _editingManagerProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *lastError; // ivar: _lastError
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForRevert; // ivar: _specificIdentifierMapForRevert
@property (retain, nonatomic) NSMutableDictionary *specificIdentifierMapForUndo; // ivar: _specificIdentifierMapForUndo
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *undeletedObjectMap; // ivar: _undeletedObjectMap
@property (retain, nonatomic) CUIKUndoableEditor *undoableEditor; // ivar: _undoableEditor


+(id)operationForAction:(NSUInteger)arg0 context:(id)arg1 ;
-(id)init;
-(id)objectToSaveForRevertingChangeToObject:(id)arg0 ;
-(id)objectToSaveForUndoingChangeToObject:(id)arg0 ;
-(void)_clearUndeletedObjects;
-(void)_registerUndeletedObject:(id)arg0 withOriginalObjectID:(id)arg1 ;
-(void)clearUndoOperations;
-(void)handleUndoForOperation:(id)arg0 ;
-(void)objectWithSpecificIdentifierWasReverted:(id)arg0 ;
-(void)removeAllActions;
-(void)setRevertObject:(id)arg0 forSpecificIdentifier:(id)arg1 ;
-(void)setUndoObject:(id)arg0 forSpecificIdentifier:(id)arg1 ;
-(void)undoOperation:(id)arg0 ;


@end


#endif