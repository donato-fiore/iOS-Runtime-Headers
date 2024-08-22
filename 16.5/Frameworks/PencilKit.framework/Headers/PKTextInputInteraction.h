// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTINTERACTION_H
#define PKTEXTINPUTINTERACTION_H

@class NSString, NSArray, UIView;
@protocol PKTextInputDebugStateReporting, UIEditingOverlayInteractionWithView, PKTextInputCanvasControllerDelegate, PKTextInputCanvasControllerChangeObserver, PKTextInputHandwritingControllerDelegate, PKTextInputElementsControllerDelegate, PKTextInputPaletteControllerDelegate, PKTextInputContainerViewDelegate, PKTextInputDrawingGestureRecognizerDelegate, PKTextInputFeedbackControllerDelegate, PKTextInputCursorControllerDelegate, PKTextInputReserveSpaceControllerDelegate, PKTextInputDebugViewControllerDelegate, PKTextInputTouchDetectionGestureRecognizerDelegate, PKTextInputLanguageSelectionControllerObserver, PKTextInputHoverControllerDelegate, PKPencilObserverInteractionDelegate, UIInteraction;

#import <Foundation/Foundation.h>

#import "PKTextInputElement.h"
#import "PKTextInputElementContent.h"
#import "PKTextInputCanvasController.h"
#import "PKTContainerView.h"
#import "PKTextInputCursorController.h"
#import "PKTextInputDebugLogController.h"
#import "PKTextInputDebugStateIntrospector.h"
#import "PKTextInputDebugViewController.h"
#import "PKTextInputSingleElementFinder.h"
#import "PKTextInputElementsController.h"
#import "PKTextInputFeedbackController.h"
#import "PKTextInputHandwritingController.h"
#import "PKTextInputHoverController.h"
#import "PKTextInputKeyboardSuppressionPolicyDelegate.h"
#import "PKTextInputPaletteController.h"
#import "PKPencilObserverInteraction.h"
#import "PKTextInputReserveSpaceController.h"
#import "PKTextInputTouchDetectionGestureRecognizer.h"
#import "PKTextInputDrawingGestureRecognizer.h"

@interface PKTextInputInteraction : NSObject <PKTextInputDebugStateReporting, UIEditingOverlayInteractionWithView, PKTextInputCanvasControllerDelegate, PKTextInputCanvasControllerChangeObserver, PKTextInputHandwritingControllerDelegate, PKTextInputElementsControllerDelegate, PKTextInputPaletteControllerDelegate, PKTextInputContainerViewDelegate, PKTextInputDrawingGestureRecognizerDelegate, PKTextInputFeedbackControllerDelegate, PKTextInputCursorControllerDelegate, PKTextInputReserveSpaceControllerDelegate, PKTextInputDebugViewControllerDelegate, PKTextInputTouchDetectionGestureRecognizerDelegate, PKTextInputLanguageSelectionControllerObserver, PKTextInputHoverControllerDelegate, PKPencilObserverInteractionDelegate, UIInteraction>

 {
    BOOL _shouldBeActive;
    BOOL _replayCancelled;
}


@property (retain, nonatomic) PKTextInputElement *_beginGestureElement; // ivar: __beginGestureElement
@property (retain, nonatomic) PKTextInputElementContent *_beginGestureElementContentForLineBreak; // ivar: __beginGestureElementContentForLineBreak
@property (readonly, nonatomic) PKTextInputCanvasController *_canvasController; // ivar: __canvasController
@property (retain, nonatomic) PKTContainerView *_containerView; // ivar: __containerView
@property (retain, nonatomic) PKTextInputCursorController *_cursorController; // ivar: __cursorController
@property (nonatomic, setter=_setDebugControllerAnchorCorner:) NSUInteger _debugControllerAnchorCorner; // ivar: __debugControllerAnchorCorner
@property (retain, nonatomic) PKTextInputDebugLogController *_debugLogController; // ivar: __debugLogController
@property (retain, nonatomic) PKTextInputDebugStateIntrospector *_debugStateIntrospector; // ivar: __debugStateIntrospector
@property (retain, nonatomic) PKTextInputDebugViewController *_debugViewController; // ivar: __debugViewController
@property (retain, nonatomic) PKTextInputSingleElementFinder *_drawingGestureElementFinder; // ivar: __drawingGestureElementFinder
@property (retain, nonatomic) PKTextInputElementsController *_elementsController; // ivar: __elementsController
@property (retain, nonatomic) PKTextInputFeedbackController *_feedbackController; // ivar: __feedbackController
@property (retain, nonatomic) PKTextInputHandwritingController *_handwritingController; // ivar: __handwritingController
@property (nonatomic, setter=_setHandwritingInteractionEnabled:) BOOL _handwritingInteractionEnabled; // ivar: __handwritingInteractionEnabled
@property (retain, nonatomic) PKTextInputHoverController *_hoverController; // ivar: __hoverController
@property (retain, nonatomic) PKTextInputKeyboardSuppressionPolicyDelegate *_keyboardSuppressionPolicyDelegate; // ivar: __keyboardSuppressionPolicyDelegate
@property (nonatomic) CGFloat _lastDebugCornerEventTimestamp; // ivar: __lastDebugCornerEventTimestamp
@property (nonatomic, setter=_setLastHandwritingEventTimestamp:) CGFloat _lastHandwritingEventTimestamp; // ivar: __lastHandwritingEventTimestamp
@property (retain, nonatomic) PKTextInputPaletteController *_paletteController; // ivar: __paletteController
@property (retain, nonatomic) PKPencilObserverInteraction *_pencilObserverInteraction; // ivar: __pencilObserverInteraction
@property (retain, nonatomic) PKTextInputReserveSpaceController *_reserveSpaceController; // ivar: __reserveSpaceController
@property (retain, nonatomic) PKTextInputTouchDetectionGestureRecognizer *_touchDetectionGestureRecognizer; // ivar: __touchDetectionGestureRecognizer
@property (readonly, nonatomic) PKTextInputCanvasController *canvasController;
@property (readonly, nonatomic) NSString *currentLanguageIdentifier;
@property (readonly, nonatomic) PKTextInputCursorController *cursorController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKTextInputDebugLogController *debugLogController;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKTextInputDrawingGestureRecognizer *drawingGestureRecognizer;
@property (retain, nonatomic) PKTextInputDrawingGestureRecognizer *drawingGestureRecognizer; // ivar: _drawingGestureRecognizer
@property (nonatomic) CGRect editingOverlayContainerSceneBounds; // ivar: _editingOverlayContainerSceneBounds
@property (readonly, nonatomic) PKTextInputElementsController *elementsController;
@property (readonly, nonatomic) NSArray *enabledLanguageIdentifiers;
@property (readonly, nonatomic, getter=isFloatingKeyboardVisible) BOOL floatingKeyboardVisible;
@property (readonly, nonatomic) PKTextInputHandwritingController *handwritingController;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCursorWeak;
@property (readonly, nonatomic) PKPencilObserverInteraction *pencilObserverInteraction;
@property (readonly, nonatomic) PKTextInputReserveSpaceController *reserveSpaceController;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // ivar: _view


+(BOOL)writeCurrentPencilSharpenerLogsToURL:(id)arg0 fullLogs:(BOOL)arg1 windowScene:(id)arg2 ;
+(id)interactionForScene:(id)arg0 ;
-(BOOL)_beginGestureIfPossible:(id)arg0 ;
-(BOOL)_handleDrawingGestureTapInElement:(id)arg0 gesture:(id)arg1 touch:(id)arg2 ;
-(BOOL)_isTapAwayFromCurrentStrokesAtCanvasViewLocation:(struct CGPoint )arg0 ;
-(BOOL)_shouldAvoidStartingDrawingOnView:(id)arg0 location:(struct CGPoint )arg1 ;
-(BOOL)cursorControllerCustomHighlightFeedbackIsVisible:(id)arg0 ;
-(BOOL)drawingGestureRecognizer:(id)arg0 shouldBeginDrawingWithTouches:(id)arg1 event:(id)arg2 ;
-(BOOL)drawingGestureRecognizer:(id)arg0 shouldFinishGestureWithTouch:(id)arg1 ;
-(BOOL)drawingGestureRecognizerLongPressShouldBegin:(id)arg0 ;
-(BOOL)drawingGestureRecognizerRequiresPastTapToBegin:(id)arg0 ;
-(BOOL)drawingGestureRecognizerRequiresTargetElementToBegin:(id)arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(NSInteger)cursorControllerWritingState:(id)arg0 ;
-(id)_topLevelHitViewForContainerViewPosition:(struct CGPoint )arg0 ;
-(id)canvasControllerContainerView:(id)arg0 ;
-(id)canvasControllerDrawingGestureRecognizer:(id)arg0 ;
-(id)canvasControllerPreferredStrokeColor:(id)arg0 animated:(*BOOL)arg1 ;
-(id)containerView:(id)arg0 hitTest:(struct CGPoint )arg1 withEvent:(id)arg2 ;
-(id)feedbackControllerContainerView:(id)arg0 ;
-(id)hoverController:(id)arg0 topLevelHitViewAt:(struct CGPoint )arg1 ;
-(id)hoverControllerContainerView:(id)arg0 ;
-(id)hoverControllerCursorController:(id)arg0 ;
-(id)init;
-(id)paletteControllerContainerView:(id)arg0 ;
-(id)paletteControllerDebugSharpenerLog:(id)arg0 ;
-(id)supportedElementDelegateForHandwritingController:(id)arg0 ;
-(id)windowSceneForController:(id)arg0 ;
-(void)_drawingGestureElementFinderDidFinishWithLocationInContainerView:(struct CGPoint )arg0 ;
-(void)_handlePotentialDebugOverlayGestureAtPoint:(struct CGPoint )arg0 ;
-(void)_notifyTargetElementOfTouches:(id)arg0 event:(id)arg1 ;
-(void)_updateCanvasController;
-(void)_updateCanvasStrokeColor;
-(void)_updateContainerView;
-(void)_updateDebugController;
-(void)_updateElementsController;
-(void)_updateGestureRecognizers;
-(void)_updateHandwritingController;
-(void)_updateInteractionEnabled;
-(void)_updateKeyboardSuppressionPolicy;
-(void)_updatePaletteController;
-(void)cancelReplay;
-(void)canvasController:(id)arg0 drawingDidChange:(id)arg1 ;
-(void)canvasControllerCanvasDidFinishAnimatingStrokes:(id)arg0 ;
-(void)canvasControllerDidBeginDrawing:(id)arg0 ;
-(void)canvasControllerDidCancelStroke:(id)arg0 strokeAcceptanceState:(NSInteger)arg1 ;
-(void)canvasControllerDidEndDrawing:(id)arg0 ;
-(void)canvasControllerEndedStroke:(id)arg0 ;
-(void)canvasControllerHasVisibleStrokesChanged:(id)arg0 ;
-(void)canvasControllerInProgressStrokeDidChange:(id)arg0 ;
-(void)dealloc;
-(void)debugViewControllerNeedsDismiss:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)dismissFloatingKeyboard;
-(void)drawingGestureRecognizerDrawingTargetIsDrawingDidChange:(id)arg0 ;
-(void)drawingGestureRecognizerLongPressStateDidChange:(id)arg0 ;
-(void)drawingGestureStrokeAcceptanceStateDidChange:(id)arg0 ;
-(void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect )arg0 ;
-(void)elementsControllerLastDiscoveredElementsDidChange:(id)arg0 ;
-(void)feedbackControllerShowingCustomFeedbackDidChange:(id)arg0 ;
-(void)handwritingControllerDidFinishActiveCommands:(id)arg0 ;
-(void)handwritingControllerStrokeAlphaOverrideDidChange:(id)arg0 ;
-(void)handwritingControllerWritingStateDidChange:(id)arg0 ;
-(void)hoverControllerDidLift:(id)arg0 ;
-(void)presentFloatingKeyboard;
-(void)presentProblemReportingView;
-(void)reportDebugStateDescription:(id)arg0 ;
-(void)reserveSpaceController:(id)arg0 willFocusElement:(id)arg1 ;
-(void)reserveSpaceControllerIsActiveChanged:(id)arg0 ;
-(void)reserveSpaceControllerIsPlaceholderVisibleChanged:(id)arg0 ;
-(void)saveInteractionForScene:(id)arg0 ;
-(void)simulateReserveSpaceForTextInputView:(id)arg0 location:(struct CGPoint )arg1 completion:(id)arg2 ;
-(void)textInputLanguageSelectionControllerDidChangeLanguage:(id)arg0 ;
-(void)textInputPaletteControllerFloatingKeyboardWillHide:(id)arg0 ;
-(void)textInputPaletteControllerFloatingKeyboardWillShow:(id)arg0 ;
-(void)touchesDetected;
-(void)willMoveToView:(id)arg0 ;


@end


#endif