// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWMULTISELECTCONTROLLER_H
#define _UICOLLECTIONVIEWMULTISELECTCONTROLLER_H

@class NSString;
@protocol UIMultiSelectInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UIMultiSelectInteraction.h"
#import "UIMultiSelectInteractionState.h"

@interface _UICollectionViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>

 {
    NSInteger _computedAxisConstraint;
}


@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInMultiselectInteraction) BOOL inMultiselectInteraction;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // ivar: _multiSelectInteraction
@property (retain, nonatomic) UIMultiSelectInteractionState *selectionState; // ivar: _selectionState
@property (readonly) Class superclass;


-(BOOL)_allowsBandSelectionStartingAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_isUsingTableLayoutSPI;
-(BOOL)_point:(struct CGPoint )arg0 liesBeyondFrame:(struct CGRect )arg1 inDirection:(CGFloat)arg2 ;
-(BOOL)_shouldBeginInteractionAtIndexPath:(id)arg0 ;
-(BOOL)_shouldBeginInteractionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)_testTouchPolicyAtPoint:(struct CGPoint )arg0 withVelocity:(struct CGPoint )arg1 ;
-(BOOL)interaction:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(BOOL)isInMultiSelectMode;
-(BOOL)multiSelectInteraction:(id)arg0 shouldStartBandSelectionAtPoint:(struct CGPoint )arg1 ;
-(BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg0 ;
-(BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)arg0 ;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg0 ofType:(NSInteger)arg1 atPoint:(struct CGPoint )arg2 withVelocity:(struct CGPoint )arg3 ;
-(BOOL)supportsKeyboardSelectionExtension;
-(BOOL)supportsMultiSelectInteraction:(id)arg0 ;
-(NSInteger)_hitTestForSystemEditControlAtPoint:(struct CGPoint )arg0 ;
-(NSInteger)axisConstraintAtIndexPath:(id)arg0 ;
-(NSInteger)axisConstraintAtPoint:(struct CGPoint )arg0 ;
-(NSInteger)axisConstraintForSingleFingerPanGestureAtPoint:(struct CGPoint )arg0 ;
-(id)_antecedentIndexPathsForLayoutAttributes:(id)arg0 inDirection:(CGFloat)arg1 ;
-(id)_autoScrollAssistantForIndexPaths:(id)arg0 ;
-(id)_boundingScrollViewForIndexPath:(id)arg0 ;
-(id)_indexPathsWithinRect:(struct CGRect )arg0 ;
-(id)childScrollViewAtLocation:(struct CGPoint )arg0 ;
-(id)indexPathsBetweenIndexPath:(id)arg0 andIndexPath:(id)arg1 ;
-(id)initWithCollectionView:(id)arg0 ;
-(id)keyCommandsForSelectionExtension;
-(id)selectionEndIndexPath;
-(id)selectionStartIndexPath;
-(id)targetForKeyCommands;
-(void)_autoScrollAtIndexPaths:(id)arg0 fromPoint:(struct CGPoint )arg1 ;
-(void)_deselectIndexPaths:(id)arg0 ;
-(void)_extendSelectionToPoint:(struct CGPoint )arg0 ;
-(void)_selectIndexPaths:(id)arg0 ;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg0 ;
-(void)clearSelectionState;
-(void)dealloc;
-(void)didCancelMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)didEndMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 appendSelectionAtPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 extendSelectionInDirection:(NSUInteger)arg1 ;
-(void)multiSelectInteraction:(id)arg0 selectItemsWithinRect:(struct CGRect )arg1 leadingPoint:(struct CGPoint )arg2 ;
-(void)multiSelectInteraction:(id)arg0 toggleSelectionStateUpToPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 toggleSelectionWithinRect:(struct CGRect )arg1 leadingPoint:(struct CGPoint )arg2 ;
-(void)selectedIndexPathsChanged:(id)arg0 ;
-(void)uninstallFromCollectionView;
-(void)updateSelectedIndexPaths:(id)arg0 ;
-(void)willBeginMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif