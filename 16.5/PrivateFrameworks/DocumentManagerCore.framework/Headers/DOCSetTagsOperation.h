// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCSETTAGSOPERATION_H
#define DOCSETTAGSOPERATION_H

@class FPSetTagsOperation, NSString, NSArray;
@protocol DOCUndoableOperation;


#import "DOCUndoManager.h"

@interface DOCSetTagsOperation : FPSetTagsOperation <DOCUndoableOperation>



@property (readonly, nonatomic) NSString *actionNameForUndoing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *oldTagsLists; // ivar: _oldTagsLists
@property (readonly) Class superclass;
@property (readonly, nonatomic) DOCUndoManager *undoManager; // ivar: _undoManager
@property (readonly, nonatomic) NSArray *updatedTagsLists; // ivar: _updatedTagsLists


-(id)currentItems;
-(id)currentTagsLists;
-(id)initWithItems:(id)arg0 tagsLists:(id)arg1 isUndoable:(BOOL)arg2 shouldClearUndoStack:(BOOL)arg3 undoManager:(id)arg4 ;
-(id)itemIDsFromItems:(id)arg0 ;
-(id)itemsFromItemIDs:(id)arg0 ;
-(id)operationForRedoing;
-(id)operationForUndoing;
-(id)operationItemIDs;
-(id)tagsListsFromItems:(id)arg0 ;
-(void)clearUndoStack;
-(void)registerUndo;


@end


#endif