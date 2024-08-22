// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSWIPESELECTIONMANAGER_H
#define PXSWIPESELECTIONMANAGER_H

@class NSString, NSArray, UIMultiSelectInteraction, UIScrollView;
@protocol PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver, UIMultiSelectInteractionDelegate, PXSwipeSelectionManagerDelegate;

#import <Foundation/Foundation.h>

#import "PXUIAutoScroller.h"
#import "PXIndexPathSet.h"
#import "PXSectionedSelectionManager.h"

@interface PXSwipeSelectionManager : NSObject <PXAutoScrollerDelegate, PXSectionedDataSourceManagerObserver, UIMultiSelectInteractionDelegate>

 {
    ? _needsUpdateFlags;
    ? _delegateFlags;
}


@property (readonly, nonatomic) PXUIAutoScroller *_autoScroller; // ivar: __autoScroller
@property (nonatomic, setter=_setCurrentDataSourceIdentifier:) NSInteger _currentDataSourceIdentifier; // ivar: __currentDataSourceIdentifier
@property (nonatomic, setter=_setCurrentIndexPath:) PXSimpleIndexPath _currentIndexPath; // ivar: __currentIndexPath
@property (retain, nonatomic, setter=_setPausingChangesToken:) id *_pausingChangesToken; // ivar: __pausingChangesToken
@property (retain, nonatomic, setter=_setSelectedIndexPathsBeforeSwipe:) PXIndexPathSet *_selectedIndexPathsBeforeSwipe; // ivar: __selectedIndexPathsBeforeSwipe
@property (nonatomic, setter=_setStartingIndexPath:) PXSimpleIndexPath _startingIndexPath; // ivar: __startingIndexPath
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSwipeSelectionManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *gesturesForFailureRequirements;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *keyCommandsForSelectionExtension;
@property (readonly, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // ivar: _multiSelectInteraction
@property (readonly, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (nonatomic, setter=_setState:) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *targetForKeyCommands;


-(BOOL)_isSelecting;
-(BOOL)_shouldBeginMultiSelectAtLocation:(struct CGPoint )arg0 ;
-(BOOL)interaction:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 ;
-(BOOL)interaction:(id)arg0 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(BOOL)isInMultiSelectMode;
-(BOOL)shouldAllowSelectionExtensionAtIndexPath:(id)arg0 ;
-(BOOL)shouldAllowSelectionExtensionAtPoint:(struct CGPoint )arg0 ;
-(BOOL)shouldBeginMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 withVelocity:(struct CGPoint )arg2 ;
-(BOOL)supportsKeyboardSelectionExtension;
-(BOOL)supportsMultiSelectInteraction:(id)arg0 ;
-(id)init;
-(id)initWithSelectionManager:(id)arg0 scrollView:(id)arg1 ;
-(id)sectionedDataSourceManagerInterestingObjectReferences:(id)arg0 ;
-(struct PXSimpleIndexPath )_itemIndexPathAtLocation:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )_itemIndexPathClosestAboveLocation:(struct CGPoint )arg0 ;
-(struct PXSimpleIndexPath )_itemIndexPathClosestLeadingLocation:(struct CGPoint )arg0 ;
-(void)_beginSelectionFromIndexPath:(struct PXSimpleIndexPath )arg0 ;
-(void)_endSelection;
-(void)_invalidateSelectedIndexPaths;
-(void)_updateSelectedIndexPaths;
-(void)_updateSelectionWithHitIndexPath:(struct PXSimpleIndexPath )arg0 leadingClosestIndexPath:(struct PXSimpleIndexPath )arg1 aboveClosestIndexPath:(struct PXSimpleIndexPath )arg2 ;
-(void)_updateWithDataSource:(id)arg0 changeHistory:(id)arg1 ;
-(void)autoScroller:(id)arg0 didAutoscrollWithTimestamp:(CGFloat)arg1 ;
-(void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg0 ;
-(void)didCancelMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)didEndMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 appendSelectionAtPoint:(struct CGPoint )arg1 ;
-(void)multiSelectInteraction:(id)arg0 extendSelectionInDirection:(NSUInteger)arg1 ;
-(void)multiSelectInteraction:(id)arg0 toggleSelectionStateUpToPoint:(struct CGPoint )arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)removeFromView;
-(void)willBeginMultiSelectInteraction:(id)arg0 atPoint:(struct CGPoint )arg1 ;


@end


#endif