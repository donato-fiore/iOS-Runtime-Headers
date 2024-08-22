// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKMAINEVENTHANDLER_H
#define AKMAINEVENTHANDLER_H

@class UIResponder, NSString, UIEvent;
@protocol AKFormFeatureDetectorDelegate;


#import "AKAnnotationEventHandler.h"
#import "AKAnnotation.h"
#import "AKController.h"
#import "AKAlignmentGuideController.h"
#import "AKPageController.h"
#import "AKHighlightColorEditorController.h"

@interface AKMainEventHandler : UIResponder <AKFormFeatureDetectorDelegate>



@property (retain) AKAnnotationEventHandler *annotationEventHandler; // ivar: _annotationEventHandler
@property (weak) AKAnnotation *annotationToBeginEditingOnDragEnd; // ivar: _annotationToBeginEditingOnDragEnd
@property (weak) AKController *controller; // ivar: _controller
@property NSUInteger currentModifierFlags; // ivar: _currentModifierFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) AKAlignmentGuideController *dragAlignmentGuideController; // ivar: _dragAlignmentGuideController
@property BOOL dragDidCopySelectedAnnotations; // ivar: _dragDidCopySelectedAnnotations
@property (retain) AKPageController *dragPageController; // ivar: _dragPageController
@property CGFloat draggedAnnotationsMaxBottomEdge; // ivar: _draggedAnnotationsMaxBottomEdge
@property CGFloat draggedAnnotationsMaxLeftEdge; // ivar: _draggedAnnotationsMaxLeftEdge
@property CGFloat draggedAnnotationsMinRightEdge; // ivar: _draggedAnnotationsMinRightEdge
@property CGFloat draggedAnnotationsMinTopEdge; // ivar: _draggedAnnotationsMinTopEdge
@property CGPoint firstDragPoint; // ivar: _firstDragPoint
@property (readonly) NSUInteger hash;
@property (retain) AKHighlightColorEditorController *highlightColorEditor; // ivar: _highlightColorEditor
@property CGPoint lastDragActualLocation; // ivar: _lastDragActualLocation
@property CGPoint lastDragActualLocationInWindow; // ivar: _lastDragActualLocationInWindow
@property CGPoint lastDragPoint; // ivar: _lastDragPoint
@property (retain) UIEvent *lastEventWithValidLocationForAutoscroll; // ivar: _lastEventWithValidLocationForAutoscroll
@property (retain) UIEvent *lastLeftMouseDownEvent; // ivar: _lastLeftMouseDownEvent
@property CGPoint leftMouseDownPoint; // ivar: _leftMouseDownPoint
@property BOOL mainEventHandlerIsInDoodleTrackingLoop; // ivar: _mainEventHandlerIsInDoodleTrackingLoop
@property BOOL mainEventHandlerIsInRotationLoop; // ivar: _mainEventHandlerIsInRotationLoop
@property BOOL mainEventHandlerIsInTrackingLoop; // ivar: _mainEventHandlerIsInTrackingLoop
@property CGPoint panGestureStartPointInWindow; // ivar: _panGestureStartPointInWindow
@property BOOL shouldEatNextLeftMouseUp; // ivar: _shouldEatNextLeftMouseUp
@property BOOL shouldEatNextRightMouseUp; // ivar: _shouldEatNextRightMouseUp
@property (readonly) Class superclass;
@property BOOL undoManagerWasGroupingByEvent; // ivar: _undoManagerWasGroupingByEvent
@property BOOL wasSelectedByLongPressRecognizer; // ivar: _wasSelectedByLongPressRecognizer


+(id)newMainEventHandlerForCurrentPlatformWithController:(id)arg0 ;
-(BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint )arg0 ;
-(BOOL)_detectFormElementInCurrentPageControllerUnderPointInWindow:(struct CGPoint )arg0 withStartingPoint:(struct CGPoint )arg1 ;
-(BOOL)_didNotHandleEventSoDeselect;
-(BOOL)continueDragEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)continueRotateEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)enterDragEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)enterRotateEventTrackingLoopWithEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)handleDoubleDownEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)handleDownEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)handleKeyboardEvent:(id)arg0 ;
-(BOOL)handleRightDownEvent:(id)arg0 ;
-(BOOL)handleRotateEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(BOOL)hitTestAnnotationsIncludingPOI:(BOOL)arg0 ignoreIfDeselected:(BOOL)arg1 atPointInWindow:(struct CGPoint )arg2 outAnnotation:(*id)arg3 ;
-(BOOL)hitTestPointsOfInterestsAtPoint:(struct CGPoint )arg0 onPageController:(id)arg1 inAnnotations:(id)arg2 event:(id)arg3 recognizer:(id)arg4 cursorUpdateOnly:(BOOL)arg5 ;
-(BOOL)mainHandleEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(id)annotationsPassingBoundingBoxHitTestsWithPoint:(struct CGPoint )arg0 onPageController:(id)arg1 ;
-(id)initWithController:(id)arg0 ;
-(id)topmostAnnotationForBorderAndInteriorHitTestAtPoint:(struct CGPoint )arg0 inAnnotations:(id)arg1 onPageController:(id)arg2 wasOnBorder:(*BOOL)arg3 wasOnText:(*BOOL)arg4 ;
-(struct CGPoint )_alignedAnnotationDragPointForPoint:(struct CGPoint )arg0 withEvent:(id)arg1 orRecognizer:(id)arg2 ;
-(struct CGPoint )_modelPointFromPointInWindow:(struct CGPoint )arg0 usingPageController:(id)arg1 ;
-(struct CGPoint )modelPointFromEvent:(id)arg0 orRecognizer:(id)arg1 onPageController:(*id)arg2 ;
-(struct CGPoint )modelPointFromWindowPoint:(struct CGPoint )arg0 foundOnPageController:(*id)arg1 ;
-(struct CGPoint )windowPointFromEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(void)_setCurrentPageBasedOnPageController:(id)arg0 ;
-(void)_updateSelectionWithAnnotation:(id)arg0 onPageController:(id)arg1 ;
-(void)applyToAllSelectedAnnotationsRotateEvent:(id)arg0 orRecognizer:(id)arg1 ;
-(void)applyTranslationToAllSelectedAnnotations:(struct CGPoint )arg0 ;
-(void)finishTranslationOfAllSelectedAnnotations;
-(void)teardown;
-(void)updateCursorForEvent:(id)arg0 ;


@end


#endif