// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPEDITINGCONTROLLER_H
#define TSWPEDITINGCONTROLLER_H

@class UIPopoverController, TSKPopoverBasedViewController<TSWPDismissBlockPopover>, NSArray, NSString, NSDictionary, TSDMultiPaneController, NSMutableDictionary, UIView, NSAttributedString, NSSet, TSKSelection<TSDTextSelection>;
@protocol TSDAutoscrollDelegate, TSDGestureTarget, TSKPopoverBasedViewControllerDelegate, TSWPReferenceLibraryViewControllerDelegate, TSDTextInput, TSDTrackerManipulator, TSKChangeSourceObserver, TSDAnnotationHosting, TSDEditor;

#import <Foundation/Foundation.h>

#import "TSWPReferenceLibraryViewController.h"
#import "TSWPTextKnobTracker.h"
#import "TSKFidgetResolver.h"
#import "TSDAutoscroll.h"
#import "TSDInteractiveCanvasController.h"
#import "TSWPCharacterStyle.h"
#import "TSWPInteractiveCanvasController.h"
#import "TSWPSelection.h"
#import "TSWPStorage.h"

@interface TSWPEditingController : NSObject <TSDAutoscrollDelegate, TSDGestureTarget, TSKPopoverBasedViewControllerDelegate, TSWPReferenceLibraryViewControllerDelegate, TSDTextInput, TSDTrackerManipulator, TSKChangeSourceObserver>

 {
    NSUInteger _initialStorageChangeCount;
    TSWPReferenceLibraryViewController *_definitionViewController;
    UIPopoverController *_definitionPopoverController;
    TSKPopoverBasedViewController<TSWPDismissBlockPopover> *_rubyTextViewController;
    BOOL _cancelRubyText;
    _NSRange _markedRange;
    NSUInteger _selectionAnchor;
    BOOL _tapAndLongPressIsPossible;
    BOOL _ignoreFutureImmediatePresses;
    _NSRange _originalSelectionRange;
    BOOL _magnifying;
    NSArray *_suggestions;
    BOOL _suppressEditMenu;
    NSUInteger _initialPressTextSelectionGranularity;
    BOOL _shouldShowEditMenuForInsertionPoint;
    BOOL _showNextEditMenu;
    CGPoint _knobToTouchOffset;
    TSWPTextKnobTracker *_knobTracker;
    BOOL _readyToEnd;
    TSKFidgetResolver *_fidgetResolver;
    BOOL _editMenuIsVisible;
    NSString *_mostRecentGestureKind;
    BOOL _gestureBeganWhenEditingBegan;
    BOOL _annotationWasShowingAtStartOfGesture;
    NSDictionary *_tapInfo;
    TSDMultiPaneController *_insertBreakPopoverController;
    NSMutableDictionary *_dictationInterpretations;
    NSMutableDictionary *_autocorrectedEntries;
    id<TSDAnnotationHosting> *_previousSelectedAnnotation;
    UIView *_inputViewForHidingKeyboard;
}


@property (retain, nonatomic) TSDAutoscroll *autoscroll; // ivar: _autoscroll
@property (nonatomic) CGPoint autoscrollPoint; // ivar: _autoscrollPoint
@property (nonatomic) BOOL canCoalesce; // ivar: _canCoalesce
@property (nonatomic) BOOL canCoalesceBreakingCharacters; // ivar: _canCoalesceBreakingCharacters
@property (nonatomic) BOOL coalescingText; // ivar: _coalescingText
@property (readonly, nonatomic) NSUInteger currentSelectionFlags; // ivar: _currentSelectionFlags
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableInspector; // ivar: _disableInspector
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<TSDEditor> *hostEditor; // ivar: _hostEditor
@property (readonly, nonatomic) TSDInteractiveCanvasController *icc;
@property (readonly, retain) UIView *inputAccessoryView;
@property (readonly, retain) UIView *inputView;
@property (nonatomic) NSUInteger insertionPoint;
@property (readonly, nonatomic) TSWPCharacterStyle *insertionStyle; // ivar: _insertionStyle
@property (readonly, nonatomic) TSWPInteractiveCanvasController *interactiveCanvasController; // ivar: _interactiveCanvasController
@property (nonatomic) BOOL isBecomingActive; // ivar: _isBecomingActive
@property (nonatomic) BOOL isEditingPlainText; // ivar: _isEditingPlainText
@property (nonatomic) NSUInteger knobTag; // ivar: _knobTag
@property (nonatomic) BOOL knobTracking; // ivar: _knobTracking
@property (nonatomic) CGPoint knobTrackingDragPoint; // ivar: _knobTrackingDragPoint
@property (nonatomic) unsigned int knobTrackingTapCount; // ivar: _knobTrackingTapCount
@property (readonly, nonatomic) _NSRange markedRange;
@property (readonly, nonatomic) NSAttributedString *markedText; // ivar: _markedText
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
@property (readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property (retain, nonatomic) TSWPSelection *selection; // ivar: _selection
@property (retain, nonatomic) TSKSelection<TSDTextSelection> *selectionForArrowKeys;
@property (readonly, nonatomic) BOOL selectionLastModifiedWithKeyboard; // ivar: _selectionLastModifiedWithKeyboard
@property (readonly, nonatomic) BOOL selectionLastModifiedWithKnob; // ivar: _selectionLastModifiedWithKnob
@property (nonatomic) BOOL shouldDisplayKeyboard; // ivar: _shouldDisplayKeyboard
@property (readonly, retain, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsDataDetectors; // ivar: _supportsDataDetectors
@property (nonatomic) BOOL suppressBreaks; // ivar: _suppressBreaks
@property (readonly, nonatomic) BOOL suppressDataDetectorsOnResignTextInput; // ivar: _suppressDataDetectorsOnResignTextInput
@property (nonatomic) BOOL suppressPhonetics; // ivar: _suppressPhonetics
@property (nonatomic) BOOL suppressTabs; // ivar: _suppressTabs
@property (readonly, nonatomic) BOOL suppressesTextInspector;
@property (readonly, retain, nonatomic) TSKSelection<TSDTextSelection> *textInputSelection;
@property (readonly) BOOL wantsRawArrowKeyEvents;


+(id)_targetedDragPreviewForSelection:(id)arg0 interactiveCanvasController:(id)arg1 reps:(id)arg2 applyScale:(BOOL)arg3 imageFrameUnion:(struct CGRect *)arg4 ;
+(id)dragItemForHitRepWithDragInteraction:(id)arg0 session:(id)arg1 canvasView:(id)arg2 icc:(id)arg3 withTouchPoint:(struct CGPoint )arg4 ;
+(id)dropProposalForSession:(id)arg0 ;
+(id)previewForDragItem:(id)arg0 ;
+(id)retargetedDragItem:(id)arg0 withDefault:(id)arg1 canvasView:(id)arg2 icc:(id)arg3 ;
-(*void)p_lastVisibleLineFragmentForCharIndex:(NSUInteger)arg0 eol:(BOOL)arg1 ;
-(*void)p_lineFragmentForCharIndex:(NSUInteger)arg0 column:(*id)arg1 eol:(BOOL)arg2 ;
-(*void)p_lineFragmentWithCaretInfo:(struct ? *)arg0 forSelection:(id)arg1 ;
-(*void)p_nearestLineFragmentWithSameVerticalPositionAs:(NSUInteger)arg0 xPos:(CGFloat)arg1 inColumn:(id)arg2 ;
-(?)p_moveFromCharIndex:(?)arg0 tokenizerRef:(?)arg1 tokenizerRange:(?)arg2 direction:(?)arg3 currentWordRange:(?)arg4 newWordRangereasonToStop;
-(BOOL)allowAutomaticTextEditingToBeginWithDifferentEditor;
-(BOOL)allowTrackerManipulatorToTakeControl:(id)arg0 ;
-(BOOL)canAcceptOrRejectChange;
-(BOOL)canAddOrShowComment;
-(BOOL)canCenterHUD;
-(BOOL)canHandleGesture:(id)arg0 ;
-(BOOL)canHandleSwipeGestureForGestureRecognizer:(id)arg0 outDelta:(*NSInteger)arg1 outTextDirection:(*NSInteger)arg2 outLayoutDirection:(*NSInteger)arg3 ;
-(BOOL)canHighlightCurrentSelection;
-(BOOL)canRemoveHighlightForCurrentSelection;
-(BOOL)canSetWritingDirection:(int)arg0 ;
-(BOOL)canShowCommentForCurrentSelectionGetHighlight:(*id)arg0 range:(struct _NSRange *)arg1 ;
-(BOOL)editorCanHideEditMenu;
-(BOOL)editorKeyboardLanguageIsRTL;
-(BOOL)handleGesture:(id)arg0 ;
-(BOOL)isCharIndex:(NSUInteger)arg0 withEolAffinity:(BOOL)arg1 atBoundary:(NSInteger)arg2 inDirection:(NSInteger)arg3 ;
-(BOOL)isCharIndex:(NSUInteger)arg0 withinTextUnit:(NSInteger)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)isDisplayingPhoneticsHUD;
-(BOOL)isInParagraphMode;
-(BOOL)isParagraphModeWithSelection:(id)arg0 onStorage:(id)arg1 ;
-(BOOL)isSelectionSingleAnchoredDrawableAttachment;
-(BOOL)isUnscaledPointInTextSelection:(struct CGPoint )arg0 ;
-(BOOL)pIsSelectionPlaceHolderText;
-(BOOL)pIsSelectionPlaceHolderTextWithSelection:(id)arg0 ;
-(BOOL)pStorageCanAcceptDrawableAttachments;
-(BOOL)p_canEditTextString;
-(BOOL)p_canInsertBreak;
-(BOOL)p_canSelectAllWithSender:(id)arg0 ;
-(BOOL)p_hitListLabelAtCharIndex:(NSUInteger)arg0 atNaturalPoint:(struct CGPoint )arg1 inRep:(id)arg2 ;
-(BOOL)p_isCharIndex:(NSUInteger)arg0 withEolAffinity:(BOOL)arg1 atBoundary:(int)arg2 inDirection:(NSInteger)arg3 ;
-(BOOL)p_isCharIndex:(NSUInteger)arg0 withinTextUnit:(int)arg1 inDirection:(NSInteger)arg2 ;
-(BOOL)p_isIgnoringKeyboardInput;
-(BOOL)p_isLayoutLeftToRightAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)p_isTextInputEditor;
-(BOOL)p_keyboardShouldShowOnscreen;
-(BOOL)p_respondsToHyperlinkGestures;
-(BOOL)p_respondsToListGestures;
-(BOOL)p_respondsToRubyGestures;
-(BOOL)readyToEndOperation;
-(BOOL)shouldShowEditMenu;
-(BOOL)shouldShowSelectedTextAsFocused;
-(BOOL)swipeableParagraphIsSelected;
-(BOOL)textEditingSupportsFormatBar;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)textStorage:(id)arg0 hasWhitespaceBoundedWordAtSelection:(id)arg1 ;
-(BOOL)trackingKnobInParagraphMode;
-(BOOL)wantsCaret;
-(BOOL)wantsDoneButtonWhenEditing;
-(BOOL)wantsKeyboard;
-(CGFloat)p_effectiveFontSizeForCurrentSelection;
-(CGFloat)targetPointSizeForSelectionWithViewScale:(CGFloat)arg0 ;
-(CGFloat)viewScaleForSelectionWithTargetPointSize:(CGFloat)arg0 ;
-(NSInteger)returnKeyType;
-(NSInteger)writingDirectionForCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)charIndexByMovingPosition:(id)arg0 toBoundary:(NSInteger)arg1 inDirection:(NSInteger)arg2 preferPosition:(*CGFloat)arg3 ;
-(NSUInteger)charIndexInRep:(id)arg0 fromPoint:(struct CGPoint )arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 ;
-(NSUInteger)charIndexInRep:(id)arg0 fromPoint:(struct CGPoint )arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(*BOOL)arg5 ;
-(NSUInteger)charIndexInRep:(id)arg0 fromPoint:(struct CGPoint )arg1 allowPastBreak:(BOOL)arg2 isAtEndOfLine:(*BOOL)arg3 leadingEdge:(*BOOL)arg4 ;
-(NSUInteger)charIndexMovingByCharacterFromCharIndex:(NSUInteger)arg0 inDirection:(NSInteger)arg1 ;
-(NSUInteger)charIndexMovingByCharacterFromCharIndex:(NSUInteger)arg0 leadingEdge:(*BOOL)arg1 inDirection:(NSInteger)arg2 ;
-(NSUInteger)charIndexMovingByWordFromCharIndex:(NSUInteger)arg0 inDirection:(NSInteger)arg1 ;
-(NSUInteger)closestCharIndexToPoint:(struct CGPoint )arg0 isAtEndOfLine:(*BOOL)arg1 ;
-(NSUInteger)countOfHyperlinksInUserSelection;
-(NSUInteger)p_LeftCharForInsertion:(struct ? *)arg0 ;
-(NSUInteger)p_MoveByLineRange:(struct _NSRange )arg0 up:(BOOL)arg1 ;
-(NSUInteger)p_adjustedCharIndexForWordTestingFromCharIndex:(NSUInteger)arg0 forDirection:(NSInteger)arg1 ;
-(NSUInteger)p_caretCharIndexForLayoutOrderCharIndex:(NSUInteger)arg0 inDirection:(NSInteger)arg1 ;
-(NSUInteger)p_charIndexAtPoint:(struct CGPoint )arg0 isAtEndOfLine:(*BOOL)arg1 ;
-(NSUInteger)p_charIndexByMovingCharIndex:(NSUInteger)arg0 withEolAffinity:(*BOOL)arg1 toBoundary:(int)arg2 inDirection:(NSInteger)arg3 preferPosition:(*CGFloat)arg4 isLeadingEdge:(*BOOL)arg5 ;
-(NSUInteger)p_getVisualDeletionIndexForSelection:(id)arg0 backward:(*BOOL)arg1 ;
-(NSUInteger)p_getVisualInsertionPointIndexForString:(id)arg0 selection:(id)arg1 ;
-(NSUInteger)p_layoutOrderCharIndexForCaretCharIndex:(NSUInteger)arg0 inDirection:(NSInteger)arg1 ;
-(NSUInteger)p_leftEdgeForSelection:(id)arg0 withLeadingEdge:(*BOOL)arg1 ;
-(NSUInteger)p_lineIndexForCharIndex:(NSUInteger)arg0 column:(*id)arg1 eol:(BOOL)arg2 ;
-(NSUInteger)p_rightEdgeForSelection:(id)arg0 withLeadingEdge:(*BOOL)arg1 ;
-(NSUInteger)textLength;
-(NSUInteger)textSelectionGranularityForTapCount:(NSUInteger)arg0 ;
-(id)_addSelectionRectsForLayout:(id)arg0 selection:(id)arg1 ;
-(id)_repsForStorage:(id)arg0 selection:(id)arg1 ;
-(id)calculateVisualRunsFromSelection:(id)arg0 updateControllerSelection:(BOOL)arg1 ;
-(id)characterStyleForDeletedRange:(struct _NSRange )arg0 ;
-(id)currentFontColor;
-(id)currentLayoutParent;
-(id)dictationInterpretationsAtCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)documentRoot;
-(id)dragItemForCurrentSelectionWithDragInteraction:(id)arg0 session:(id)arg1 withTouchPoint:(struct CGPoint )arg2 ;
-(id)editingReps;
-(id)editingSearchReference;
-(id)editorKeyboardLanguage;
-(id)extendSelectionToParagraphs:(id)arg0 ;
-(id)extraMenuItems;
-(id)initWithStorage:(id)arg0 interactiveCanvasController:(id)arg1 ;
-(id)logicalToVisualSelection:(id)arg0 ;
-(id)model;
-(id)p_columnForCharIndex:(NSUInteger)arg0 ;
-(id)p_columnForCharIndex:(NSUInteger)arg0 withStorage:(id)arg1 ;
-(id)p_containingShapeRep;
-(id)p_documentViewController;
-(id)p_editingRepForCharIndex:(NSUInteger)arg0 ;
-(id)p_extendSelectionToIncludeSmartFields:(id)arg0 ;
-(id)p_highlightSelectionForSelection:(id)arg0 ;
-(id)p_hitRepWithPoint:(struct CGPoint )arg0 keyboardAdjustmentDelta:(CGFloat)arg1 ;
-(id)p_layoutTargetForCharIndex:(NSUInteger)arg0 eolAffinity:(BOOL)arg1 ;
-(id)p_previousAutocorrectionForWordAtCharIndex:(NSUInteger)arg0 outRange:(struct _NSRange *)arg1 ;
-(id)p_repForSwipeAtUnscaledLocation:(struct CGPoint )arg0 ;
-(id)p_selectionForRep:(id)arg0 point:(struct CGPoint )arg1 textSelectionGranularity:(NSUInteger)arg2 isTapHold:(BOOL)arg3 precise:(BOOL)arg4 includeListLabels:(BOOL)arg5 allowPastBreak:(BOOL)arg6 selectsEntireLink:(BOOL)arg7 ;
-(id)p_selectionFromUnscaledCanvasPoint:(struct CGPoint )arg0 textSelectionGranularity:(NSUInteger)arg1 isTapHold:(BOOL)arg2 allowPastBreak:(BOOL)arg3 selectsEntireLink:(BOOL)arg4 ;
-(id)p_viewControllerForPresenting;
-(id)p_wordRangesForRange:(struct _NSRange )arg0 ;
-(id)pasteboardController;
-(id)selectionForRep:(id)arg0 point:(struct CGPoint )arg1 textSelectionGranularity:(NSUInteger)arg2 ;
-(id)selectionFromUnscaledCanvasPoint:(struct CGPoint )arg0 textSelectionGranularity:(NSUInteger)arg1 isTapHold:(BOOL)arg2 allowPastBreak:(BOOL)arg3 selectsEntireLink:(BOOL)arg4 ;
-(id)selectionRectsForRange:(struct _NSRange )arg0 ;
-(id)selectionWithRange:(struct _NSRange )arg0 ;
-(id)stringFromSelection;
-(id)styleProvider;
-(id)textColorAtCharIndex:(NSUInteger)arg0 ;
-(id)textFontAtCharIndex:(NSUInteger)arg0 ;
-(id)textInRange:(struct _NSRange )arg0 ;
-(id)topLevelInspectorAutosaveName;
-(id)tracker;
-(id)tsax_listItemLabelForCharIndex:(NSUInteger)arg0 textIsLiteral:(*BOOL)arg1 ;
-(id)unfilteredText;
-(int)canPerformEditorAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)p_canPerformOptInEditorAction:(SEL)arg0 withSender:(id)arg1 ;
-(int)p_writingDirectionForCharAtIndex:(NSUInteger)arg0 ;
-(int)valueForWritingDirectionPropertyForInspector:(id)arg0 ;
-(struct CGPoint )p_clampPointToLine:(struct CGPoint )arg0 trackingRep:(id)arg1 ;
-(struct CGRect )firstRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )overrideCaretRectForSelection:(id)arg0 ;
-(struct CGRect )p_adjustedPopoverTargetRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )p_firstRectForRange:(struct _NSRange )arg0 actualRange:(struct _NSRange *)arg1 ;
-(struct CGRect )p_targetRectForSelection:(id)arg0 ;
-(struct CGRect )targetRectForSelection:(id)arg0 ;
-(struct _NSRange )editRange;
-(struct _NSRange )p_adjustVisualSelection:(id)arg0 withOtherSelection:(id)arg1 ;
-(struct _NSRange )p_expandParagraphRangeForEnumerator:(struct TSWPParagraphEnumerator *)arg0 ;
-(struct _NSRange )rangeOfWordEnclosingCharIndex:(NSUInteger)arg0 backward:(BOOL)arg1 ;
-(struct _NSRange )smartDeletionSelection:(id)arg0 isVisual:(*BOOL)arg1 ;
-(struct _NSRange )tsax_rangeOfLineFragmentAtCharIndex:(NSUInteger)arg0 ;
-(struct __CFStringTokenizer *)p_createTokenizerForCharIndex:(NSUInteger)arg0 outTokenizerRange:(struct _NSRange *)arg1 ;
-(void)abandonMarkedText;
-(void)addAllDictationInterpretationRangesInRange:(struct _NSRange )arg0 toRanges:(*void)arg1 ;
-(void)asyncProcessChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)beginAutomaticTextEditingIfNeededForPoint:(struct CGPoint )arg0 ;
-(void)cancelKnobTrackingAndMagnifying;
-(void)cancelPhoneticsHUDAnimated:(BOOL)arg0 ;
-(void)clearMarkedRange;
-(void)copy:(id)arg0 ;
-(void)copyObject:(id)arg0 ;
-(void)copyToPasteboard:(id)arg0 ;
-(void)customSelect:(id)arg0 ;
-(void)customSelectAll:(id)arg0 ;
-(void)dealloc;
-(void)definitionAction:(id)arg0 ;
-(void)deleteBackward;
-(void)deleteForward;
-(void)didBecomeCurrentEditor;
-(void)didBecomeTextInputEditor;
-(void)didEnterBackground;
-(void)dismissActivePopovers;
-(void)dismissPhoneticsHUDAnimated:(BOOL)arg0 ;
-(void)endEditing;
-(void)endEditingAndSelectParent:(id)arg0 ;
-(void)extendSelectionLeft;
-(void)extendSelectionRight;
-(void)gestureSequenceDidEnd;
-(void)gestureSequenceWillBegin;
-(void)insertText:(id)arg0 ;
-(void)invalidateSelectionVisualRuns;
-(void)noReplacementsFound:(id)arg0 ;
-(void)operationDidEnd;
-(void)p_addCommonEditItemsIntoMenu:(id)arg0 ;
-(void)p_addInsertItemsIntoMenu:(id)arg0 ;
-(void)p_adjustSelection:(id)arg0 withOtherSelection:(id)arg1 textSelectionGranularity:(NSUInteger)arg2 ;
-(void)p_adjustSelection:(id)arg0 withUnscaledCanvasPoint:(struct CGPoint )arg1 textSelectionGranularity:(NSUInteger)arg2 isTapHold:(BOOL)arg3 allowPastBreak:(BOOL)arg4 ;
-(void)p_beginKnobTrackingSelection:(id)arg0 forRep:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)p_beginMagnification:(id)arg0 forRep:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(void)p_beginOperationAndTakeControl;
-(void)p_beginTapAndLongPress:(id)arg0 ;
-(void)p_cancelDelayedSelectors;
-(void)p_cancelTapAndLongPressPreviousSelector;
-(void)p_clearEditMenuFlags;
-(void)p_clearSecondaryHighlight;
-(void)p_createKnobTracker:(id)arg0 forRep:(id)arg1 tapCount:(NSUInteger)arg2 ;
-(void)p_dismissDefinitionPopover;
-(void)p_endAutoscroll;
-(void)p_handleKnobDragGestureRecognizer:(id)arg0 ;
-(void)p_handleLongPressGesture:(id)arg0 ;
-(void)p_handleSwipeMoveCaretWithTextGranularity:(NSInteger)arg0 textDirection:(NSInteger)arg1 layoutDirection:(NSInteger)arg2 ;
-(void)p_handleTapAndTouchGesture:(id)arg0 ;
-(void)p_handleTapGestures:(id)arg0 ;
-(void)p_highlightRubyTextWithRange:(struct _NSRange )arg0 ;
-(void)p_inputLanguageDidChangeNotification:(id)arg0 ;
-(void)p_postSelectionContentsChangedNotification;
-(void)p_postWillStyleTextNotification;
-(void)p_removeAutocorrectionAtCharIndex:(NSUInteger)arg0 ;
-(void)p_rescheduleDelayedUpdateHUDState;
-(void)p_selection:(id)arg0 toGlyphRange:(struct ? *)arg1 ;
-(void)p_sendHandleTapNotification;
-(void)p_setRevertibleSelection:(id)arg0 ;
-(void)p_setTappedSelection:(id)arg0 ;
-(void)p_suppressSelectionHighlight:(BOOL)arg0 ;
-(void)p_switchToReplaceSelection;
-(void)p_updateHUDState;
-(void)popoverControllerDidDismissPopoverBasedViewController:(id)arg0 ;
-(void)protectedStopMagnification;
-(void)referenceLibrarayViewControllerWasDismissed:(id)arg0 ;
-(void)replaceAction:(id)arg0 ;
-(void)replaceRange:(struct _NSRange )arg0 withText:(id)arg1 ;
-(void)revertLastSelectionChangeIfElapsedTimeIsUnderPinFidgetThreshold;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)selectionChangedWithFlags:(NSUInteger)arg0 wpFlags:(NSUInteger)arg1 ;
-(void)styleAction:(id)arg0 ;
-(void)tappedInRep:(id)arg0 point:(struct CGPoint )arg1 tapCount:(NSUInteger)arg2 isTapHold:(BOOL)arg3 precise:(BOOL)arg4 ;
-(void)tappedOnKnob:(id)arg0 ;
-(void)teardown;
-(void)updateAfterAutoscroll:(id)arg0 ;
-(void)updateHUDState;
-(void)willBeginMagnification;
-(void)willEnterForeground;
-(void)willResignCurrentEditor;
-(void)willResignTextInputEditor;
-(void)willResignTextInputEditorAndDeselect:(BOOL)arg0 ;


@end


#endif