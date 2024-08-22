// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSELECTIONINTERACTION_H
#define PKSELECTIONINTERACTION_H

@class UIBezierPath, NSMutableArray, NSArray, UIPanGestureRecognizer, NSString, NSOrderedSet, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UITapGestureRecognizer, NSMutableOrderedSet, UIView;
@protocol UIInteraction, UIGestureRecognizerDelegate, PKSelectionRendering, PKSelectionInteractionDelegate;

#import <Foundation/Foundation.h>

#import "PKSelectionGlowRenderer.h"
#import "PKDrawingAdjustmentKnob.h"
#import "PKDrawing.h"
#import "PKSelectionController.h"

@interface PKSelectionInteraction : NSObject <UIInteraction, UIGestureRecognizerDelegate>

 {
    id<PKSelectionRendering> *_lassoRenderer;
    PKSelectionGlowRenderer *_glowRenderer;
    UIBezierPath *_lassoPath;
    BOOL _editMenuVisible;
    CGPoint _lastTapLocation;
    CGFloat _lastTapTimestamp;
    NSInteger _currentTapCount;
    CGPoint _lastDoubleTapAndDragLocation;
    CGFloat _lastDoubleTapAndDragTimestamp;
    NSMutableArray *_tapAndDragVelocityArray;
    NSInteger _tapAndDragVelocityCount;
    NSInteger _currentlyDraggedKnob;
    NSInteger _knobDragMode;
    CGFloat _knobDragInitialTimestamp;
    CGPoint _knobDragInitialLocation;
    CGPoint _undraggedKnobLocationInStrokeSpace;
    CGPoint _currentScrollOffset;
    NSArray *_firstStrokesInInitialStrokes;
    NSArray *_lastStrokesInInitialStrokes;
    NSInteger _modificationType;
    NSMutableArray *_selectionViewGestures;
    PKDrawingAdjustmentKnob *_insertSpaceAffordance;
    UIPanGestureRecognizer *_insertSpaceAffordanceGesture;
}


@property (nonatomic) BOOL _didCancelSelection; // ivar: __didCancelSelection
@property (nonatomic) CGPoint _drawingBeganLocation; // ivar: __drawingBeganLocation
@property (retain, nonatomic) PKDrawing *currentDrawing; // ivar: _currentDrawing
@property (readonly, nonatomic) BOOL currentSelectionHasStrokes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSelectionInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) BOOL hasCurrentSelection;
@property (readonly, nonatomic) BOOL hasStrokesOrElementsSelection;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSOrderedSet *initialStrokeSelectionBeforeModification; // ivar: _initialStrokeSelectionBeforeModification
@property (nonatomic) BOOL insertSpaceEnabled; // ivar: _insertSpaceEnabled
@property (retain, nonatomic) UILongPressGestureRecognizer *knobBrushGestureRecognizer; // ivar: _knobBrushGestureRecognizer
@property (retain, nonatomic) UIPanGestureRecognizer *knobDragGestureRecognizer; // ivar: _knobDragGestureRecognizer
@property (retain, nonatomic) UIPanGestureRecognizer *lassoGestureRecognizer; // ivar: _lassoGestureRecognizer
@property (retain, nonatomic) UITapAndAHalfRecognizer *modifySelectionRecognizer; // ivar: _modifySelectionRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *noOpTapGestureRecognizer; // ivar: _noOpTapGestureRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *progressiveTapGestureRecognizer; // ivar: _progressiveTapGestureRecognizer
@property (weak, nonatomic) PKSelectionController *selectionController; // ivar: _selectionController
@property (retain, nonatomic) NSMutableOrderedSet *smartSelectedStrokes; // ivar: _smartSelectedStrokes
@property (readonly) Class superclass;
@property (retain, nonatomic) UILongPressGestureRecognizer *tapAndHoldToSelectLongPressGestureRecognizer; // ivar: _tapAndHoldToSelectLongPressGestureRecognizer
@property (weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)_dragShouldBeginForSession:(id)arg0 ;
-(BOOL)_insertSpaceAffordanceEnabled;
-(BOOL)_isLassoAddingSpace:(struct CGPoint )arg0 ;
-(BOOL)_isRepeatedTap:(id)arg0 ;
-(BOOL)_isWithinRepeatedTapTimeForGesture:(id)arg0 ;
-(BOOL)_liveSelectionGestureStillActive;
-(BOOL)_locationShouldFlipOverLeftKnob:(struct CGPoint )arg0 ;
-(BOOL)_locationShouldFlipOverLeftKnob_LTR:(struct CGPoint )arg0 ;
-(BOOL)_locationShouldFlipOverLeftKnob_RTL:(struct CGPoint )arg0 ;
-(BOOL)_locationShouldFlipOverRightKnob:(struct CGPoint )arg0 ;
-(BOOL)_locationShouldFlipOverRightKnob_LTR:(struct CGPoint )arg0 ;
-(BOOL)_locationShouldFlipOverRightKnob_RTL:(struct CGPoint )arg0 ;
-(BOOL)_selectionInteractionShouldBeginAtPoint:(struct CGPoint )arg0 forEvent:(id)arg1 orGestureRecognizer:(id)arg2 ;
-(BOOL)_selectionInteractionShouldForwardAtPoint:(struct CGPoint )arg0 forEvent:(id)arg1 ;
-(BOOL)_selectionShouldReceiveTouchForPoint:(struct CGPoint )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasStrokesAtLocation:(struct CGPoint )arg0 ;
-(BOOL)isLTR;
-(BOOL)knobsContainPoint:(struct CGPoint )arg0 forInputType:(NSInteger)arg1 ;
-(CGFloat)_timestampForGestureRecognizer:(id)arg0 ;
-(CGFloat)_timestampForTouch:(id)arg0 ;
-(CGFloat)_updateVelocityWindowWithTimestamp:(CGFloat)arg0 location:(struct CGPoint )arg1 ;
-(CGFloat)_updateVelocityWindowWithTouch:(id)arg0 location:(struct CGPoint )arg1 ;
-(NSInteger)_selectionTypeForTapCount:(NSInteger)arg0 ;
-(NSInteger)_selectionTypeForVelocity:(CGFloat)arg0 ;
-(NSInteger)_updateSmartSelectionWithInput:(id)arg0 modificationType:(NSInteger)arg1 ;
-(NSInteger)_updateSmartSelectionWithInput:(id)arg0 modificationType:(NSInteger)arg1 completion:(id)arg2 ;
-(NSInteger)_updateSmartSelectionWithInput:(id)arg0 modificationType:(NSInteger)arg1 liveScrollOffset:(struct CGPoint )arg2 completion:(id)arg3 ;
-(id)_adornmentLayers;
-(id)_closestStrokesToCorner:(NSUInteger)arg0 fromStrokes:(id)arg1 ;
-(id)_drawingForLocation:(struct CGPoint )arg0 ;
-(id)_firstStrokesInStrokes:(id)arg0 ;
-(id)_gestures;
-(id)_gesturesForLiveSelection;
-(id)_knobForLocation:(struct CGPoint )arg0 ;
-(id)_knobForLocation:(struct CGPoint )arg0 forInputType:(NSInteger)arg1 ;
-(id)_lastStrokesInStrokes:(id)arg0 ;
-(id)_selectionModifierGestures;
-(id)_visibleOnscreenStrokesForDrawing:(id)arg0 ;
-(id)initWithSelectionController:(id)arg0 ;
-(struct CGPoint )_pointFromViewToStrokeSpace:(struct CGPoint )arg0 inDrawing:(id)arg1 ;
-(struct CGPoint )_undraggedKnobLocation:(NSInteger)arg0 forInitialStrokeBounds:(struct CGRect )arg1 ;
-(struct CGPoint )clampInputPointForSelection:(struct CGPoint )arg0 forDrawing:(id)arg1 ;
-(void)_addInsertSpaceAffordance;
-(void)_addInsertSpaceAffordanceGestureIfNecessary;
-(void)_calculateFirstAndLastStrokeForKnobPlacement;
-(void)_cancelDeferredPasteFromTappingAction;
-(void)_cleanupInsertSpaceAffordance;
-(void)_clearLiveSelectionPath;
-(void)_didAddSelectionView:(id)arg0 ;
-(void)_didBeginDraggingSelection:(id)arg0 ;
-(void)_didBeginSelection:(id)arg0 ;
-(void)_didBrushWithKnob:(id)arg0 ;
-(void)_didDragKnob:(id)arg0 ;
-(void)_didEndDraggingSelection:(id)arg0 ;
-(void)_didEndLassoAddingSpaceAtLocation:(struct CGPoint )arg0 ;
-(void)_didEndLassoSelectionWithPath:(id)arg0 ;
-(void)_didGrabInsertSpaceAffordance:(id)arg0 ;
-(void)_didSmartSelectTap:(id)arg0 ;
-(void)_didTapAndDrag:(id)arg0 ;
-(void)_dismissEditMenuIfNecessary;
-(void)_eatGesture:(id)arg0 ;
-(void)_handleSingleTap:(id)arg0 ;
-(void)_intersectedStrokesInDrawing:(id)arg0 forSelectionInput:(id)arg1 existingSelection:(id)arg2 completion:(id)arg3 ;
-(void)_pressAndHoldLinearExpand:(id)arg0 ;
-(void)_resetVelocityWindow;
-(void)_selectViaContinuousTapWithInput:(id)arg0 ;
-(void)_setupGestures;
-(void)_toolPickerDidShowHide:(id)arg0 ;
-(void)_updateAllowedTouchTypesForLassoGR;
-(void)_updateAllowedTouchTypesForSelectedInk:(id)arg0 ;
-(void)_updateAllowedTouchTypesForSelectedInk:(id)arg0 hasCurrentSelection:(BOOL)arg1 ;
-(void)_updateInsertSpaceAffordancePosition;
-(void)_updateLiveLassoPath:(struct CGPath *)arg0 ;
-(void)_updateProgressiveTapSelectionWithSelectionInput:(id)arg0 existingSelection:(id)arg1 ;
-(void)_updateSmartSelectionWithDragToLocation:(struct CGPoint )arg0 liveScrollOffset:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)_updateSmartSelectionWithDragToLocation:(struct CGPoint )arg0 liveScrollOffset:(struct CGPoint )arg1 initialSelectedWord:(id)arg2 completion:(id)arg3 ;
-(void)_updateStateIfNecessaryWithOldModificationType:(NSInteger)arg0 newModificationType:(NSInteger)arg1 ;
-(void)_updateTapGestureHistoryWithLocation:(struct CGPoint )arg0 gesture:(id)arg1 ;
-(void)_updateUndraggedKnobLocationForKnobDrag;
-(void)_willRemoveSelectionView:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)didResizeExternalElements;
-(void)dismissEditMenuIfNecessary;
-(void)willMoveToView:(id)arg0 ;


@end


#endif