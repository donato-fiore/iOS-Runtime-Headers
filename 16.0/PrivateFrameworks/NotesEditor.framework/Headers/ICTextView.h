// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICTEXTVIEW_H
#define ICTEXTVIEW_H

@class CALayer, NSString, NSMutableArray, UIResponder, CATransformLayer;
@protocol ICNoteEditorUserTitleViewDelegate, ICTextControllerDelegate, ICAttachmentViewDelegate;


#import "ICBaseTextView.h"
#import "ICNoteEditorCompatibilityBannerView.h"
#import "ICNoteEditorDateView.h"
#import "ICSharedScrollClampingController.h"
#import "ICNoteEditorUserTitleView.h"

@interface ICTextView : ICBaseTextView <ICNoteEditorUserTitleViewDelegate, ICTextControllerDelegate>



@property (weak, nonatomic) NSObject<ICAttachmentViewDelegate> *attachmentViewDelegate;
@property (retain, nonatomic) CALayer *bottomSplitLayer; // ivar: _bottomSplitLayer
@property (retain, nonatomic) ICNoteEditorCompatibilityBannerView *compatibilityBannerView; // ivar: _compatibilityBannerView
@property (nonatomic) CGRect currentSetBoundsRect; // ivar: _currentSetBoundsRect
@property (retain, nonatomic) ICNoteEditorDateView *dateView; // ivar: _dateView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableContentOffsetChanges; // ivar: _disableContentOffsetChanges
@property (getter=isDisplayingEditableContent) BOOL displayingEditableContent; // ivar: _displayingEditableContent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *highlightLayers; // ivar: _highlightLayers
@property (readonly, nonatomic) BOOL isBecomingFirstResponder; // ivar: _isBecomingFirstResponder
@property (nonatomic) BOOL isInSetBounds; // ivar: _isInSetBounds
@property (nonatomic) BOOL isInsertingTextFromKeyboardInput; // ivar: _isInsertingTextFromKeyboardInput
@property (readonly, nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL isSettingContentOffset; // ivar: _isSettingContentOffset
@property (nonatomic) BOOL isSettingEditable; // ivar: _isSettingEditable
@property (nonatomic) BOOL isSettingStyleWithStyleUI; // ivar: _isSettingStyleWithStyleUI
@property (nonatomic) BOOL isTransitioningToNewSize; // ivar: _isTransitioningToNewSize
@property (nonatomic) BOOL isUpdatingPanGesture; // ivar: _isUpdatingPanGesture
@property (nonatomic) CGRect lastDragInsertionRect; // ivar: _lastDragInsertionRect
@property (weak, nonatomic) UIResponder *nextResponderOverride; // ivar: _nextResponderOverride
@property (retain, nonatomic) ICSharedScrollClampingController *scrollClampingControllerDelayedRelease; // ivar: _scrollClampingControllerDelayedRelease
@property (nonatomic) BOOL shouldAvoidBecomingFirstResponder; // ivar: _shouldAvoidBecomingFirstResponder
@property (retain, nonatomic) CATransformLayer *splitLayerContainer; // ivar: _splitLayerContainer
@property (readonly) Class superclass;
@property (retain, nonatomic) CALayer *topSplitLayer; // ivar: _topSplitLayer
@property (nonatomic) BOOL touchesCurrentlyOnAttachmentView; // ivar: _touchesCurrentlyOnAttachmentView
@property (retain, nonatomic) ICNoteEditorUserTitleView *userTitleView; // ivar: _userTitleView


+(void)initialize;
-(BOOL)_accessibilityBeginUndoableTextInsertion;
-(BOOL)_accessibilityEndUndoableTextInsertion;
-(BOOL)_shouldBecomeEditableUponBecomingTargetOfKeyboardEventDeferringEnvironment;
-(BOOL)_shouldBecomeEditableUponFocus;
-(BOOL)attachmentViewUnderTouches:(id)arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)becomesEditableWithGestures;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hideCompatibilityBanner;
-(BOOL)isEditingOnSystemPaper;
-(BOOL)isPaperLinkBarShowingOrWillShow;
-(BOOL)isPreviewing;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)selectionSupportsFindInNote;
-(BOOL)shouldAutoScroll;
-(BOOL)shouldReplaceFoundTextInRange:(id)arg0 inDocument:(id)arg1 withText:(id)arg2 ;
-(BOOL)shouldUpdateVisibleSupplementalViewsInLayoutSubviews;
-(BOOL)showCompatibilityBannerWithParentViewController:(id)arg0 ;
-(BOOL)supportsAttachments;
-(BOOL)supportsTextReplacement;
-(BOOL)touchesShouldCancelInContentView:(id)arg0 ;
-(CGFloat)leadingMargin;
-(CGFloat)maxYContentOffset;
-(NSInteger)compareFoundRange:(id)arg0 toRange:(id)arg1 inDocument:(id)arg2 ;
-(id)TTTextStorageOptional;
-(id)_icaxUnfilteredAttributedString;
-(id)_nextKeyResponder;
-(id)_targetedPreviewForTextInteractableItem:(id)arg0 dismissing:(BOOL)arg1 ;
-(id)accessibilityLabel;
-(id)attachmentViewTappedByGesture:(id)arg0 ;
-(id)findableForAttachment:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)selectedText;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)singleSelectedAttachment;
-(id)splitLayerForCharacterRange:(struct _NSRange )arg0 withTargetFrame:(struct CGRect *)arg1 top:(BOOL)arg2 ;
-(id)tableAttachmentViewControllerForRange:(struct _NSRange )arg0 ;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(id)undoManager;
-(struct CGPoint )clippedContentOffset:(struct CGPoint )arg0 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )splitFrameForCharacterRange:(struct _NSRange )arg0 withTargetFrame:(struct CGRect *)arg1 top:(BOOL)arg2 ;
-(struct CGRect )splitFrameForCharacterRange:(struct _NSRange )arg0 withTargetFrame:(struct CGRect *)arg1 top:(BOOL)arg2 originForRendering:(struct CGPoint *)arg3 ;
-(struct UIEdgeInsets )minimumMargins;
-(struct _NSRange )characterRangeFromTextKitRange:(id)arg0 ;
-(void)_adjustContentOffsetIfNecessary;
-(void)_handleKeyUIEvent:(id)arg0 ;
-(void)_scrollToCaretIfNeeded;
-(void)_scrollToSelectionIfNeeded;
-(void)_updateContentSize;
-(void)_updatePanGesture;
-(void)applyEdgeInsets:(struct UIEdgeInsets )arg0 ;
-(void)beginSelectionChange;
-(void)clampTextView;
-(void)createDateLabel;
-(void)createLayersForSplitAtCharacter:(NSUInteger)arg0 topTargetFrame:(struct CGRect *)arg1 bottomTargetFrame:(struct CGRect *)arg2 ;
-(void)createUserTitleViewIfNecessaryForNote:(id)arg0 ;
-(void)dealloc;
-(void)didEndTextSearchOperation;
-(void)didFinishAnimatingAfterSizeTransition;
-(void)endSelectionChange;
-(void)findInteraction:(id)arg0 didBeginFindSession:(id)arg1 ;
-(void)handleAccessibilityDarkerSystemColorsStatusDidChange:(id)arg0 ;
-(void)initializeScollClampingController;
-(void)inputModeDidChange:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)performTextSearchWithQueryString:(id)arg0 usingOptions:(id)arg1 resultAggregator:(id)arg2 ;
-(void)replaceAllOccurrencesOfQueryString:(id)arg0 usingOptions:(id)arg1 withText:(id)arg2 ;
-(void)replaceFoundTextInRange:(id)arg0 inDocument:(id)arg1 withText:(id)arg2 ;
-(void)resetContentOffset:(struct CGPoint )arg0 ;
-(void)resetUndoManager;
-(void)sceneWillEnterForeground:(id)arg0 ;
-(void)scrollRangeToVisible:(struct _NSRange )arg0 consideringInsets:(BOOL)arg1 animated:(BOOL)arg2 inSearchableString:(id)arg3 ;
-(void)scrollRectToVisible:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)select:(id)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setClippedContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setEditable:(BOOL)arg0 ;
-(void)setSelectedRange:(struct _NSRange )arg0 ;
-(void)setSelectedTextRange:(id)arg0 ;
-(void)splitViewAnimatedTransitionEnded:(id)arg0 ;
-(void)splitViewAnimatedTransitionWillBegin:(id)arg0 ;
-(void)startEditingForTapGesture:(id)arg0 ;
-(void)textControllerDidHandleSpecialCaseEditing:(id)arg0 ;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleStrikethrough;
-(void)toggleUnderline:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)unclampTextView;
-(void)updateCompatibilityBannerForNote:(id)arg0 parentViewController:(id)arg1 updateTextViewContentInsets:(BOOL)arg2 ;
-(void)updateLayoutMargins;
-(void)updateLayoutMarginsForMultipleTextViewsIfNecessary;
-(void)updateOverscrollItemFrames;
-(void)updateTextViewForDidChange;
-(void)userTitleHiddenStateDidChange:(id)arg0 ;


@end


#endif