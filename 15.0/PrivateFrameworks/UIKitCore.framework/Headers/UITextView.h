// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UITEXTVIEW_H
#define UITEXTVIEW_H

@class NSAttributedString, NSDictionary, CUICatalog, NSIndexSet, NSString, UIFont, NSLayoutManager, NSTextContainer, NSTextStorage;
@protocol _UIViewBaselineSpacing, _UITextContainerViewDelegate, _UITextViewContentPaddingDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, _UITextContent, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UIViewGhostedRangeSupporting, _UITextItemInteracting, UITextPasteConfigurationSupporting_Internal, UITextDragSupporting, UITextDropSupporting, _UITextItemDiscoverable, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, UIContentSizeCategoryAdjusting, UITextInputTokenizer, UITextDragDropSupport, UITextViewDelegate, UITextInputDelegate, UITextPasteDelegate, UITextDragDelegate, UITextDropDelegate, UICoordinateSpace;


#import "UIScrollView.h"
#import "_UITextContainerView.h"
#import "_UITextLayoutView.h"
#import "UITextInputController.h"
#import "UITextInteractionAssistant.h"
#import "UITextInputTraits.h"
#import "UIAutoscroll.h"
#import "_UITextViewRestorableScrollPosition.h"
#import "UILabel.h"
#import "UIView.h"
#import "_UICharacterStreamingManager.h"
#import "_UITextSizeCache.h"
#import "_UITextStorageDraggableGeometry.h"
#import "_UITextItemDiscoverer.h"
#import "_UITextViewContentPadding.h"
#import "UITextPosition.h"
#import "UIInputContextHistory.h"
#import "UIColor.h"
#import "UITextRange.h"
#import "UITextInputPasswordRules.h"
#import "UIPasteConfiguration.h"
#import "UIImage.h"
#import "_UISupplementalLexicon.h"
#import "UIDragInteraction.h"
#import "UIDropInteraction.h"
#import "_UITextLayoutController.h"
#import "_UITextViewVisualStyle.h"

@interface UITextView : UIScrollView <_UIViewBaselineSpacing, _UITextContainerViewDelegate, _UITextViewContentPaddingDelegate, UITextInputControllerDelegate, UITextAutoscrolling, UIKeyboardInput, _UITextContent, UITextInputTraits_Private, _UIMultilineTextContentSizing, _UILayoutBaselineUpdating, UIViewGhostedRangeSupporting, _UITextItemInteracting, UITextPasteConfigurationSupporting_Internal, UITextDragSupporting, UITextDropSupporting, _UITextItemDiscoverable, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, UIContentSizeCategoryAdjusting>

 {
    _UITextContainerView *_containerView;
    _UITextLayoutView *_layoutView;
    id *_inputDelegate;
    id<UITextInputTokenizer> *_tokenizer;
    UITextInputController *_inputController;
    UITextInteractionAssistant *_interactionAssistant;
    UITextInputTraits *_textInputTraits;
    UIAutoscroll *_autoscroll;
    ? _tvFlags;
    NSInteger _contentSizeUpdateSeqNo;
    _UITextViewRestorableScrollPosition *_scrollTarget;
    NSUInteger _scrollPositionDontRecordCount;
    _UITextViewRestorableScrollPosition *_scrollPosition;
    CGFloat _offsetFromScrollPosition;
    NSUInteger _dataDetectorTypes;
    CGFloat _preferredMaxLayoutWidth;
    UILabel *_placeholderLabel;
    NSAttributedString *_overriddenPlaceholder;
    NSInteger _overriddenPlaceholderAlignment;
    UIView *_inputAccessoryView;
    NSDictionary *_linkTextAttributes;
    _UICharacterStreamingManager *_characterStreamingManager;
    NSDictionary *_siriParameters;
    CGFloat _firstBaselineOffsetFromTop;
    CGFloat _lastBaselineOffsetFromBottom;
    _UITextSizeCache *_intrinsicSizeCache;
    CUICatalog *_cuiCatalog;
    UIEdgeInsets _beforeFreezingTextContainerInset;
    UIEdgeInsets _duringFreezingTextContainerInset;
    CGSize _beforeFreezingFrameSize;
    BOOL _unfreezingTextContainerSize;
    CGRect _frameOfTrailingWhitespace;
    id<UITextDragDropSupport> *_textDragDropSupport;
    _UITextStorageDraggableGeometry *_geometry;
    NSInteger _defaultTextPreviewOptions;
    _UITextItemDiscoverer *_textItemDiscoverer;
    _UITextViewContentPadding *_topContentPadding;
    _UITextViewContentPadding *_bottomContentPadding;
    CGPoint _scrollEndDraggingVelocity;
    CGFloat _multilineContextWidth;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
@property (copy, nonatomic, setter=_setInteractionState:) id *_interactionState;
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) BOOL clearsOnInsertion; // ivar: _clearsOnInsertion
@property (nonatomic) CGPoint contentOffsetForSameViewDrops;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) NSUInteger dataDetectorTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) NSObject<UITextViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) NSInteger forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrediction;
@property (retain) UIView *inputAccessoryView;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView; // ivar: _inputView
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) NSUInteger insertionPointWidth;
@property (copy, nonatomic) id *interactionState;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (readonly, nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) BOOL learnsCorrections;
@property (copy, nonatomic) NSDictionary *linkTextAttributes;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) UIPasteConfiguration *pasteConfiguration;
@property (weak, nonatomic) NSObject<UITextPasteDelegate> *pasteDelegate; // ivar: _pasteDelegate
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) _NSRange selectedRange;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) CGFloat selectionBorderWidth;
@property (nonatomic) CGFloat selectionCornerRadius;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) UIEdgeInsets selectionEdgeInsets;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSTextContainer *textContainer; // ivar: _textContainer
@property (nonatomic) UIEdgeInsets textContainerInset;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic, getter=isTextDragActive) BOOL textDragActive;
@property (weak, nonatomic) NSObject<UITextDragDelegate> *textDragDelegate; // ivar: _textDragDelegate
@property (readonly, nonatomic) UIDragInteraction *textDragInteraction;
@property (nonatomic) NSInteger textDragOptions; // ivar: _textDragOptions
@property (readonly, nonatomic, getter=isTextDropActive) BOOL textDropActive;
@property (weak, nonatomic) NSObject<UITextDropDelegate> *textDropDelegate; // ivar: _textDropDelegate
@property (readonly, nonatomic) UIDropInteraction *textDropInteraction;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *textItemCoordinateSpace;
@property (readonly, nonatomic) _UITextLayoutController *textLayoutController; // ivar: _textLayoutController
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (readonly, nonatomic) NSTextStorage *textStorage; // ivar: _textStorage
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (retain, nonatomic) UIView *uiss_snapshotView;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) BOOL usesStandardTextScaling;
@property (nonatomic) _NSRange validTextRange;
@property (retain, nonatomic) _UITextViewVisualStyle *visualStyle; // ivar: _visualStyle


+(id)_defaultTextColor;
-(BOOL)_allowAnimatedUpdateSelectionRectViews;
-(BOOL)_allowHighlightForTextInteractableItem:(id)arg0 ;
-(BOOL)_allowInteraction:(NSInteger)arg0 forTextInteractableItem:(id)arg1 ;
-(BOOL)_freezeTextContainerSize;
-(BOOL)_hasBaseline;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(BOOL)_interactionPossibleWithAttachment:(id)arg0 ;
-(BOOL)_isDisplayingLookupViewController;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)_isDisplayingTextService;
-(BOOL)_isInteractiveTextSelectionDisabled;
-(BOOL)_isSystemAttachment:(id)arg0 ;
-(BOOL)_isTextSizeCacheEnabled;
-(BOOL)_mightHaveInteractableItems;
-(BOOL)_mightHaveSelection;
-(BOOL)_needsDoubleUpdateConstraintsPass;
-(BOOL)_ownsInputAccessoryView;
-(BOOL)_restoreFirstResponder;
-(BOOL)_shouldAppendTextInViewDescription;
-(BOOL)_shouldBecomeEditableUponBecomingTargetOfKeyboardEventDeferringEnvironment;
-(BOOL)_shouldBecomeEditableUponFocus;
-(BOOL)_shouldInvalidateBaselineConstraintsForSize:(struct CGSize )arg0 oldSize:(struct CGSize )arg1 ;
-(BOOL)_shouldObscureInput;
-(BOOL)_shouldScrollEnclosingScrollView;
-(BOOL)_shouldShowEditMenu;
-(BOOL)_shouldStartDataDetectors;
-(BOOL)_shouldSuppressSelectionCommands;
-(BOOL)_showsEditMenu;
-(BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
-(BOOL)_wantsFocusRing;
-(BOOL)allowsAttachments;
-(BOOL)allowsDraggingAttachments;
-(BOOL)becomeFirstResponder;
-(BOOL)becomesEditableWithGestures;
-(BOOL)canBecomeDropResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)hasTextItemsOfType:(NSInteger)arg0 inTextRange:(id)arg1 ;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isEditableForTextContainerView:(id)arg0 ;
-(BOOL)isEditing;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInput:(id)arg0 shouldReplaceTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg0 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldAutoscrollAboveBottom;
-(BOOL)shouldPresentSheetsInAWindowLayeredAboveTheKeyboard;
-(BOOL)shouldPreserveVisualFontSizeFidelity;
-(BOOL)textInput:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)textInputShouldExtendCaretHeight:(id)arg0 ;
-(BOOL)tiledViewsDrawAsynchronously;
-(BOOL)usesTiledViews;
-(BOOL)willInteractWithLinkAtPoint:(struct CGPoint )arg0 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 nextToNeighbor:(id)arg2 edge:(int)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 ;
-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_currentPreferredMaxLayoutWidth;
-(CGFloat)_firstBaselineOffsetFromTop;
-(CGFloat)_preferredMaxLayoutWidth;
-(CGFloat)beginSnapshotSeparationOfHeight:(CGFloat)arg0 atYOffset:(CGFloat)arg1 ;
-(CGFloat)lineHeight;
-(CGFloat)maxTileHeight;
-(Class)_printFormatterClass;
-(NSInteger)_defaultTextPreviewOptions;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(NSUInteger)_effectiveDataDetectorTypes;
-(NSUInteger)_totalNumberOfTextViewsInLayoutManager;
-(NSUInteger)marginTop;
-(id)_activityItemsConfigurationAtLocation:(struct CGPoint )arg0 ;
-(id)_allowedTypingAttributes;
-(id)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint )arg0 ;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg0 ;
-(id)_canvasView;
-(id)_containerView;
-(id)_contentView;
-(id)_cuiCatalog;
-(id)_cuiStyleEffectConfiguration;
-(id)_currentDefaultAttributes;
-(id)_effectivePasteConfiguration;
-(id)_getDelegateZoomView;
-(id)_implicitPasteConfigurationClasses;
-(id)_inputController;
-(id)_layoutDebuggingTitle;
-(id)_linkTextAttributesForLink:(id)arg0 forCharacterAtIndex:(NSUInteger)arg1 ;
-(id)_previewRendererForRange:(id)arg0 unifyRects:(BOOL)arg1 ;
-(id)_restorableScrollPosition;
-(id)_restorableScrollPositionForStateRestoration;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_targetedPreviewForTextInteractableItem:(id)arg0 dismissing:(BOOL)arg1 ;
-(id)_textInteractableItemAtPoint:(struct CGPoint )arg0 precision:(NSUInteger)arg1 ;
-(id)_whitelistedTypingAttributes;
-(id)attributedPlaceholder;
-(id)attributedTextInRange:(id)arg0 ;
-(id)automaticallySelectedOverlay;
-(id)bottomContentPadding;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)extractWordArrayFromTokensArray:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initReadonlyAndUnselectableWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 font:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 ;
-(id)interactionAssistant;
-(id)largeContentTitle;
-(id)linkTextAttributesForTextContainerView:(id)arg0 ;
-(id)metadataDictionariesForDictationResults;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rangeWithTextAlternatives:(*id)arg0 atPosition:(id)arg1 ;
-(id)selectedText;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)selectionView;
-(id)textContainerView:(id)arg0 cuiCatalogForTextEffectName:(id)arg1 ;
-(id)textContainerView:(id)arg0 linkTextAttributesForLink:(id)arg1 forCharacterAtIndex:(NSUInteger)arg2 ;
-(id)textInRange:(id)arg0 ;
-(id)textItemsOfType:(NSInteger)arg0 inTextRange:(id)arg1 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)topContentPadding;
-(id)undoManager;
-(id)visibleTextRange;
-(id)webView;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGPoint )_contentOffsetForScrollToVisible:(struct _NSRange )arg0 ;
-(struct CGPoint )_contentOffsetForScrollingToRect:(struct CGRect )arg0 ;
-(struct CGPoint )_firstGlyphBaselineLeftPointWithLayoutManager:(id)arg0 ;
-(struct CGPoint )_firstGlyphBaselineRightPointWithLayoutManager:(id)arg0 ;
-(struct CGPoint )_lastGlyphBaselineLeftPointWithLayoutManager:(id)arg0 ;
-(struct CGPoint )_lastGlyphBaselineRightPointWithLayoutManager:(id)arg0 ;
-(struct CGRect )_boundingRectForRange:(id)arg0 ;
-(struct CGRect )_frameOfTrailingWhitespace;
-(struct CGRect )_rectForScrollToVisible:(struct _NSRange )arg0 ;
-(struct CGRect )_rectToScrollToVisibleInCellInWindow:(id)arg0 ;
-(struct CGRect )accessibilityFrame;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )frameForDictationResultPlaceholder:(id)arg0 ;
-(struct CGRect )rectInTextContainerForRect:(struct CGRect )arg0 ;
-(struct CGRect )visibleRect;
-(struct CGRect )visibleRectIgnoringKeyboard;
-(struct CGRect )visibleTextRect;
-(struct CGSize )_containerSizeForBoundsSize:(struct CGSize )arg0 allowingOverflow:(BOOL)arg1 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_visibleRangeWithLayout:(BOOL)arg0 ;
-(struct _NSRange )selectedRangeForTextContainerView:(id)arg0 ;
-(void)_addShortcut:(id)arg0 ;
-(void)_adjustFontForAccessibilityTraits:(BOOL)arg0 ;
-(void)_applyOptionsToGeometry;
-(void)_cancelDataDetectors;
-(void)_commonInitWithTextContainer:(id)arg0 isDecoding:(BOOL)arg1 isEditable:(BOOL)arg2 isSelectable:(BOOL)arg3 isDraggable:(BOOL)arg4 ;
-(void)_constrainTiledRenderingToRect:(struct CGRect )arg0 ;
-(void)_define:(id)arg0 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_diagnoseFocusabilityForReport:(id)arg0 ;
-(void)_didFinishSpeechRecognition;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didRecognizeSpeechStrings:(id)arg0 ;
-(void)_didRecognizeSpeechTokens:(id)arg0 ;
-(void)_disableTiledViews;
-(void)_enableSiriAnimationDictationStyle;
-(void)_ensureCleanedUp;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg0 ;
-(void)_invalidateContainerViewSize;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_layoutPlaceholder;
-(void)_layoutText;
-(void)_notifyDidBeginEditing;
-(void)_notifyDidEndEditing;
-(void)_observedTextViewDidChange:(id)arg0 ;
-(void)_pasteAttributedString:(id)arg0 pasteAsRichText:(BOOL)arg1 ;
// -(void)_performLayoutCalculation:(id)arg0 inSize:(unk)arg1  ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect )arg0 ;
-(void)_promptForReplace:(id)arg0 ;
-(void)_registerUndoOperationForReplacementWithActionName:(id)arg0 replacementText:(id)arg1 ;
-(void)_resetDataDetectorsResults;
-(void)_resetUsesExplicitPreferredMaxLayoutWidth;
-(void)_restoreScrollPosition:(id)arg0 animated:(BOOL)arg1 ;
-(void)_resyncContainerFrameForNonAutolayout;
-(void)_resyncContainerFrameForNonAutolayoutDeferringSizeToFit:(BOOL)arg0 ;
-(void)_scrollRangeToVisible:(struct _NSRange )arg0 animated:(BOOL)arg1 ;
-(void)_scrollRect:(struct CGRect )arg0 toVisibleInContainingScrollView:(BOOL)arg1 ;
-(void)_scrollSelectionToVisibleInContainingScrollView;
-(void)_scrollSelectionToVisibleInContainingScrollView:(BOOL)arg0 ;
-(void)_scrollToCaretIfNeeded;
-(void)_scrollToSelectionIfNeeded;
-(void)_scrollViewAnimationEnded:(id)arg0 finished:(BOOL)arg1 ;
-(void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)arg0 ;
-(void)_scrollViewWillEndDraggingWithVelocity:(struct CGPoint )arg0 targetContentOffset:(struct CGPoint *)arg1 ;
-(void)_selectionMayChange:(id)arg0 ;
-(void)_setAllowedTypingAttributes:(id)arg0 ;
-(void)_setContentOffsetWithoutRecordingScrollPosition:(struct CGPoint )arg0 ;
-(void)_setCuiCatalog:(id)arg0 ;
-(void)_setCuiStyleEffectConfiguration:(id)arg0 ;
-(void)_setDefaultTextPreviewOptions:(NSInteger)arg0 ;
-(void)_setDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)_setFrameOrBounds:(struct CGRect )arg0 fromOldRect:(struct CGRect )arg1 settingAction:(id)arg2 ;
-(void)_setFreezeTextContainerSize:(BOOL)arg0 ;
-(void)_setInteractiveTextSelectionDisabled:(BOOL)arg0 ;
-(void)_setMultilineContextWidth:(CGFloat)arg0 ;
-(void)_setNeedsTextLayout;
-(void)_setOverridePlaceholder:(id)arg0 alignment:(NSInteger)arg1 ;
-(void)_setPreferredMaxLayoutWidth:(CGFloat)arg0 ;
-(void)_setShowsEditMenu:(BOOL)arg0 ;
-(void)_setSiriAnimationDictationStyleWithCharacterInsertionRate:(CGFloat)arg0 minimumDurationBetweenHypotheses:(CGFloat)arg1 ;
-(void)_setWhitelistedTypingAttributes:(id)arg0 ;
-(void)_setupDefaultStyleEffectConfiguration;
-(void)_share:(id)arg0 ;
-(void)_showTextStyleOptions:(id)arg0 ;
-(void)_startDataDetectors;
-(void)_startDataDetectorsIfNeeded;
-(void)_syncTypingAttributesToTextContainerAttributesForExtraLineFragment;
-(void)_textContainerSizeDidChange:(id)arg0 ;
-(void)_textStorageDidProcessEditing:(id)arg0 ;
-(void)_textViewContentPaddingDidChange:(id)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)_transliterateChinese:(id)arg0 ;
-(void)_unconstrainTiledRendering;
-(void)_updateBaselineInformationDependentOnBounds;
-(void)_updateContainerTileAndSizingFlags;
-(void)_updateContentContainerView;
-(void)_updateContentSize;
-(void)_updateFrameOfTrailingWhitespace:(struct CGSize )arg0 ;
-(void)_updatePlaceholderVisibility;
-(void)_updateSelectableInteractions;
-(void)_updateSelectionGestures;
-(void)_updateTextContainerSizeAndSizeToFit;
-(void)_updateTextEffectsConfigurationIfNeeded;
-(void)addGhostedRange:(id)arg0 ;
-(void)addInvisibleRange:(id)arg0 ;
-(void)addSnapshotSeparation:(CGFloat)arg0 withAffinity:(NSInteger)arg1 ;
-(void)addTextAlternativesDisplayStyle:(NSInteger)arg0 toRange:(struct _NSRange )arg1 ;
-(void)adjustedContentInsetDidChange;
-(void)alignCenter:(id)arg0 ;
-(void)alignJustified:(id)arg0 ;
-(void)alignLeft:(id)arg0 ;
-(void)alignRight:(id)arg0 ;
-(void)becomeDropResponder;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)beginSelectionChange;
-(void)cancelAutoscroll;
-(void)captureTextFromCamera:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)decodeRestorableStateWithCoder:(id)arg0 includingSelectedTextAndDisplayedViewControllers:(BOOL)arg1 ;
-(void)decreaseSize:(id)arg0 ;
-(void)deleteBackward;
-(void)disableClearsOnInsertion;
-(void)draggingFinished:(id)arg0 ;
-(void)draggingStarted;
-(void)drawRect:(struct CGRect )arg0 forViewPrintFormatter:(id)arg1 ;
-(void)droppingFinished;
-(void)droppingStarted;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 includingSelectedTextAndDisplayedViewControllers:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endFloatingCursor;
-(void)endSelectionChange;
-(void)endSnapshotSeparation;
-(void)increaseSize:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)insertText:(id)arg0 alternatives:(id)arg1 style:(NSInteger)arg2 ;
-(void)insertText:(id)arg0 style:(NSInteger)arg1 alternatives:(id)arg2 ;
-(void)invalidateDropCaret;
-(void)invalidateIntrinsicContentSize;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)layoutSubviews;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionNatural:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)paste:(id)arg0 ;
-(void)pasteAndMatchStyle:(id)arg0 ;
-(void)pasteItemProviders:(id)arg0 ;
-(void)removeAllGhostedRanges;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)removeInvisibleRange:(id)arg0 ;
-(void)removeTextPlaceholder:(id)arg0 ;
-(void)replace:(id)arg0 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg0 replacementText:(id)arg1 ;
-(void)resignDropResponderWithDropPerformed:(BOOL)arg0 ;
-(void)scrollRangeToVisible:(struct _NSRange )arg0 ;
-(void)scrollSelectionToVisible:(BOOL)arg0 ;
-(void)select:(id)arg0 ;
-(void)selectAll:(id)arg0 ;
-(void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setAttributedPlaceholder:(id)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setBecomesEditableWithGestures:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setContentOffset:(struct CGPoint )arg0 ;
-(void)setContentToHTMLString:(id)arg0 ;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setLineHeight:(CGFloat)arg0 ;
-(void)setMarginTop:(NSUInteger)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setMaxTileHeight:(CGFloat)arg0 ;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)setScrollEnabled:(BOOL)arg0 ;
-(void)setShouldAutoscrollAboveBottom:(BOOL)arg0 ;
-(void)setShouldPresentSheetsInAWindowLayeredAboveTheKeyboard:(BOOL)arg0 ;
-(void)setShouldPreserveVisualFontSizeFidelity:(BOOL)arg0 ;
-(void)setTiledViewsDrawAsynchronously:(BOOL)arg0 ;
-(void)setUsesTiledViews:(BOOL)arg0 ;
-(void)startAutoscroll:(struct CGPoint )arg0 ;
-(void)startInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)textInputDidAnimatePaste:(id)arg0 ;
-(void)textInputDidChange:(id)arg0 ;
-(void)textInputDidChangeSelection:(id)arg0 ;
-(void)textInputWillAnimatePaste:(id)arg0 ;
-(void)tintColorDidChange;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unmarkText;
-(void)updateAutoscrollAboveBottom;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(void)updateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;
-(void)updateSelection;
-(void)updateSelectionForTextContainerView:(id)arg0 ;
-(void)updateSelectionImmediately;
-(void)updateTextAttributesWithConversionHandler:(id)arg0 ;
-(void)validateCommand:(id)arg0 ;
-(void)validateInteractionWithLinkAtPoint:(struct CGPoint )arg0 ;


@end


#endif