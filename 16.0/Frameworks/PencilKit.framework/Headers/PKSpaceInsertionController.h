// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSPACEINSERTIONCONTROLLER_H
#define PKSPACEINSERTIONCONTROLLER_H

@class NSMutableOrderedSet, UIView, UIPanGestureRecognizer, NSOrderedSet;

#import <Foundation/Foundation.h>

#import "PKSpaceInsertionView.h"
#import "PKStrokeSelection.h"
#import "PKImageView.h"
#import "PKDrawing.h"
#import "PKStroke.h"
#import "PKSelectionController.h"

@interface PKSpaceInsertionController : NSObject {
    NSMutableOrderedSet *_strokesBelow;
    NSMutableOrderedSet *_strokesAbove;
    UIView *_tapToDismissView;
    PKSpaceInsertionView *_topInsertionView;
    PKSpaceInsertionView *_bottomInsertionView;
    CGPoint _beginDragLocation;
    CGPoint _initialViewLocation;
    UIPanGestureRecognizer *_dragTopLollipopGR;
    UIPanGestureRecognizer *_dragBottomLollipopGR;
    PKStrokeSelection *_bottomStrokeSelection;
    PKStrokeSelection *_topStrokeSelection;
    PKImageView *_topImageView;
    PKImageView *_bottomImageView;
    BOOL _topHandleRemovesWhitespace;
    PKStrokeSelection *_strokeSelectionBeforeInsertingSpace;
    NSInteger _selectionTypeBeforeInsertingSpace;
    PKStrokeSelection *_cachedStrokeSelection;
    NSOrderedSet *_cachedStrokesBelow;
    NSOrderedSet *_cachedStrokesAbove;
    BOOL _shouldUseCachedStrokes;
    BOOL _insertSpaceAffordancePanDidEnd;
}


@property (readonly, nonatomic) BOOL didMoveStrokes; // ivar: _didMoveStrokes
@property (retain, nonatomic) PKDrawing *drawing; // ivar: _drawing
@property (copy, nonatomic) NSOrderedSet *externalElements; // ivar: _externalElements
@property (nonatomic) BOOL isCurrentlyAddingSpace; // ivar: _isCurrentlyAddingSpace
@property (retain, nonatomic) PKStroke *lassoStroke; // ivar: _lassoStroke
@property (readonly, weak, nonatomic) PKSelectionController *selectionController; // ivar: _selectionController


-(CGFloat)_initalBufferBetweenLollipops;
-(CGFloat)offsetInStrokeSpaceFromViewOffset:(CGFloat)arg0 inDrawing:(id)arg1 ;
-(id)_visibleStrokesOnPage:(id)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithSelectionController:(id)arg0 ;
-(void)_addSpacingViewsWithFrame:(struct CGRect )arg0 ;
-(void)_blitStrokesToViewForSpaceInsertionType:(NSUInteger)arg0 withCompletion:(id)arg1 ;
-(void)_didEndCreatingSpace;
-(void)_didGrabInsertSpaceAffordance:(id)arg0 ;
-(void)_dismissHandlesAndReselectExistingSelectionInDrawing:(id)arg0 ;
-(void)_dismissSpacingResizeHandles;
-(void)_dragLollipop:(id)arg0 ;
-(void)_layoutViewsIfNecessary;
-(void)_makeSpaceWithOffset:(CGFloat)arg0 spaceInsertionType:(NSUInteger)arg1 ;
-(void)_panGestureDidBegin:(id)arg0 ;
-(void)_panGestureDidCancelOrFail:(id)arg0 ;
-(void)_panGestureDidChange:(id)arg0 ;
-(void)_panGestureDidEnd:(id)arg0 ;
-(void)_sortStrokesAboveOrBelowWithStrokesAbove:(id)arg0 strokesBelow:(id)arg1 ;
-(void)_temporarilyShiftStrokesWithOffset:(CGFloat)arg0 spaceInsertionType:(NSUInteger)arg1 ;
-(void)commitSpacingResize;
-(void)didBeginCreatingSpaceWithLassoStroke:(id)arg0 drawing:(id)arg1 addDefaultSpace:(BOOL)arg2 strokesAbove:(id)arg3 strokesBelow:(id)arg4 externalElements:(id)arg5 ;
-(void)didScroll:(struct CGPoint )arg0 ;
-(void)fetchStrokesAmbiguouslyBelowAndAboveInsertSpaceHandleWithStrokes:(id)arg0 inDrawing:(id)arg1 completion:(id)arg2 ;
-(void)initTopAndBottomSelectionIfNecessary;
-(void)insertDefaultSpace:(CGFloat)arg0 ;
-(void)invalidateCachedStrokes;
-(void)projectPath:(struct CGPath *)arg0 toEndOfFrame:(struct CGRect )arg1 ;
-(void)shiftStrokesWithOffset:(CGFloat)arg0 ;


@end


#endif