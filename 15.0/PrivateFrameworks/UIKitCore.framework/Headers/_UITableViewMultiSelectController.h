// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABLEVIEWMULTISELECTCONTROLLER_H
#define _UITABLEVIEWMULTISELECTCONTROLLER_H

@class NSString;
@protocol UIMultiSelectInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIMultiSelectInteractionState.h"
#import "UIMultiSelectInteraction.h"
#import "UITableView.h"

@interface _UITableViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>



@property (retain, nonatomic) UIMultiSelectInteractionState *currentSelectionState; // ivar: _currentSelectionState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // ivar: _multiSelectInteraction
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)_isPointInsideEditControl:(struct CGPoint )arg0 ;
-(BOOL)_shouldBeginInteractionAtIndexPath:(id)arg0 ;
-(BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)interaction:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(BOOL)isInMultiSelectMode;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg0 ;
-(BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)arg0 ;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg0 ofType:(NSInteger)arg1 atPoint:(struct CGPoint )arg2 withVelocity:(struct CGPoint )arg3 ;
-(BOOL)supportsKeyboardSelectionExtension;
-(BOOL)supportsMultiSelectInteraction:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ;
-(id)keyCommandsForSelectionExtension;
-(id)targetForKeyCommands;
-(void)_adjustSelectionRangeToIndexPath:(id)arg0 isDeselecting:(BOOL)arg1 ;
-(void)_deselectIndexPaths:(id)arg0 ;
-(void)_endAutoScroll;
-(void)_handleAutoScrollFromPoint:(struct CGPoint )arg0 ;
-(void)_selectIndexPaths:(id)arg0 ;
-(void)_updateSelectedIndexPaths:(id)arg0 ;
-(void)_updateSelectedIndexPathsForCurrentSelection;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg0 ;
-(void)clearSelectionState;
-(void)didCancelMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)didEndMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 appendSelectionAtPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 extendSelectionInDirection:(NSUInteger)arg1 ;
-(void)multiSelectInteraction:(id)arg0 toggleSelectionStateUpToPoint:(struct CGPoint )arg1 ;
-(void)selectedIndexPathsChanged:(id)arg0 ;
-(void)toggleSelectionStateUpToIndexPath:(id)arg0 ;
-(void)uninstallFromTableView;
-(void)willBeginExtendingSelectionAtIndexPath:(id)arg0 ;
-(void)willBeginMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif