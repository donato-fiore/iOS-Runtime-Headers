// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTFIELD_H
#define UITEXTFIELD_H

@class NSMutableDictionary, NSAttributedString, NSTextContainer, _UITextLayoutControllerBase<_UITextLayoutController>, NSDictionary, UIView<_UITextCanvas>, CUICatalog, CUIStyleEffectConfiguration, NSIndexSet, RTIInputSystemSourceSession, NSString, UIFont, NSLayoutManager, NSTextStorage;
@protocol _UIViewBaselineSpacing, UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, _UITextFieldVisualStyleSubject, UIViewGhostedRangeSupporting, _UITextFieldClearButtonImageProviding, UIPopoverControllerDelegate, UITextFieldContent, _UITextFieldCanvasContext, UIKeyInputPrivate, _UIFieldEditorHostingViewRequirements, UITextDragSupporting, UITextDropSupporting, UITextPasteConfigurationSupporting_Internal, UITextDroppable_Private, UITextInputPrivate, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, NSCoding, UIContentSizeCategoryAdjusting, UITextDragDropSupport, _UITextFieldMetricsProvider, UITextFieldDelegate, UITextInputDelegate, UITextPasteDelegate, UITextDragDelegate, UITextDropDelegate, UITextInputSuggestionDelegate, UITextInputTokenizer;


#import "UIControl.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "_UIFullFontSize.h"
#import "_UITextFieldClearButton.h"
#import "_UIFloatingContentView.h"
#import "UIVisualEffectView.h"
#import "UITextFieldLabel.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "UITextInteractionAssistant.h"
#import "UITapGestureRecognizer.h"
#import "UIFieldEditor.h"
#import "_UICascadingTextStorage.h"
#import "UITextInputAssistantItem.h"
#import "_UITextStorageDraggableGeometry.h"
#import "_UITextFieldBackgroundProvider.h"
#import "UIButton.h"
#import "UIColor.h"
#import "UIImage.h"
#import "UITextPosition.h"
#import "UIScrollView.h"
#import "UIInputContextHistory.h"
#import "UITextRange.h"
#import "UITextInputPasswordRules.h"
#import "UIPasteConfiguration.h"
#import "_UISupplementalLexicon.h"
#import "UIDragInteraction.h"
#import "UIDropInteraction.h"
#import "UITraitCollection.h"
#import "_UITextFieldVisualStyle.h"

@interface UITextField : UIControl <_UIViewBaselineSpacing, UIKeyboardInput, _UILayoutBaselineUpdating, _UIFloatingContentViewDelegate, UIGestureRecognizerDelegate, _UITextFieldVisualStyleSubject, UIViewGhostedRangeSupporting, _UITextFieldClearButtonImageProviding, UIPopoverControllerDelegate, UITextFieldContent, _UITextFieldCanvasContext, UIKeyInputPrivate, _UIFieldEditorHostingViewRequirements, UITextDragSupporting, UITextDropSupporting, UITextPasteConfigurationSupporting_Internal, UITextDroppable_Private, UITextInputPrivate, UITextDraggable, UITextDroppable, UITextPasteConfigurationSupporting, UITextInput, NSCoding, UIContentSizeCategoryAdjusting>

 {
    UIView *_contentCoverView;
    NSInteger _contentCoverViewMode;
    UIView *_backgroundCoverView;
    NSInteger _backgroundCoverViewMode;
    CGFloat _foregroundViewsAlpha;
    UITextInputTraits *_traits;
    UITextInputTraits *_nonAtomTraits;
    _UIFullFontSize *_fullFontSize;
    int _controlSize;
    UIEdgeInsets _padding;
    _UITextFieldClearButton *_clearButton;
    CGSize _clearButtonOffset;
    NSMutableDictionary *_cachedDefaultClearButtonImages;
    CGSize _leftViewOffset;
    CGSize _rightViewOffset;
    _UIFloatingContentView *_floatingContainerView;
    UIVisualEffectView *_contentBackdropView;
    UITextFieldLabel *_placeholderLabel;
    UITextFieldLabel *_suffixLabel;
    UITextFieldLabel *_prefixLabel;
    UIImageView *_iconView;
    UILabel *_label;
    CGFloat _labelOffset;
    NSAttributedString *_overriddenPlaceholder;
    NSInteger _overriddenPlaceholderAlignment;
    BOOL _forceDisplayOverridePlaceholder;
    UITextInteractionAssistant *_interactionAssistant;
    UITapGestureRecognizer *_selectGestureRecognizer;
    UIFieldEditor *_fieldEditor;
    NSTextContainer *_textContainer;
    _UICascadingTextStorage *_textStorage;
    _UITextLayoutControllerBase<_UITextLayoutController> *_textLayoutController;
    NSDictionary *_linkTextAttributes;
    UIView *_inputAccessoryView;
    UIView *_recentsAccessoryView;
    UITextInputAssistantItem *_inputAssistantItem;
    id<UITextDragDropSupport> *_textDragDropSupport;
    _UITextStorageDraggableGeometry *_draggableGeometry;
    ? _textFieldFlags;
    CGFloat _firstBaselineOffsetFromTop;
    CGFloat _lastBaselineOffsetFromBottom;
    BOOL _didInvalidateBaselineConstraintsOnHeightChange;
    BOOL _deferringBecomeFirstResponder;
    NSInteger _preferredBorderStyle;
    CGFloat _preferredBackgroundCornerRadius;
    _UITextFieldBackgroundProvider *_backgroundProvider;
    id<_UITextFieldMetricsProvider> *_metricsProvider;
    UIView<_UITextCanvas> *_textCanvasView;
    CUICatalog *_cuiCatalog;
    CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) NSInteger _blurEffectStyleForAppearance;
@property (readonly, nonatomic) UIButton *_clearButton;
@property (readonly, nonatomic) CGRect _clipRectForFadedEdges;
@property (readonly, nonatomic) UIView *_contentView;
@property (retain, nonatomic, getter=_cuiCatalog, setter=_setCuiCatalog:) CUICatalog *_cuiCatalog;
@property (retain, nonatomic, getter=_cuiStyleEffectConfiguration, setter=_setCuiStyleEffectConfiguration:) CUIStyleEffectConfiguration *_cuiStyleEffectConfiguration;
@property (copy, nonatomic, setter=_dci_setEditingMenuProvider:) id *_dci_editingMenuProvider; // ivar: __dci_editingMenuProvider
@property (nonatomic) BOOL _disableTextColorUpdateOnTraitCollectionChange; // ivar: _disableTextColorUpdateOnTraitCollectionChange
@property (readonly, nonatomic) UIFieldEditor *_fieldEditor;
@property (readonly, nonatomic) BOOL _fieldEditorAttached;
@property (nonatomic, getter=_handwritingEnabled, setter=_setHandwritingEnabled:) BOOL _handwritingEnabled; // ivar: __handwritingEnabled
@property (readonly, nonatomic) BOOL _hasContent;
@property (copy, nonatomic, setter=_setInteractionState:) id *_interactionState;
@property (nonatomic, getter=_overridePasscodeStyle, setter=_setOverridePasscodeStyle:) BOOL _overridePasscodeStyle;
@property (nonatomic, setter=_setPadding:) UIEdgeInsets _padding;
@property (nonatomic, getter=_passcodeStyleAlpha, setter=_setPasscodeStyleAlpha:) CGFloat _passcodeStyleAlpha;
@property (readonly, nonatomic) UILabel *_placeholderLabel;
@property (nonatomic, setter=_setRoundedRectBackgroundCornerRadius:) CGFloat _roundedRectBackgroundCornerRadius;
@property (readonly, nonatomic) RTIInputSystemSourceSession *_rtiSourceSession;
@property (nonatomic, setter=_setShouldDisplayDictationPlaceholderMessage:) BOOL _shouldDisplayDictationPlaceholderMessage;
@property (nonatomic) NSInteger _textInputSource;
@property (retain, nonatomic) UIColor *_tvCustomFocusedTextColor; // ivar: _tvCustomFocusedTextColor
@property (retain, nonatomic) UIColor *_tvCustomTextColor; // ivar: _tvCustomTextColor
@property (nonatomic) BOOL _tvUseVibrancy; // ivar: _tvUseVibrancy
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsAttachments;
@property (nonatomic) BOOL allowsEditingTextAttributes;
@property (copy, nonatomic) NSAttributedString *attributedPlaceholder;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (retain, nonatomic) UIImage *background; // ivar: _background
@property (readonly, nonatomic) UITextPosition *beginningOfDocument;
@property (nonatomic) NSInteger borderStyle;
@property (nonatomic) NSInteger clearButtonMode; // ivar: _clearButtonMode
@property (nonatomic) NSInteger clearingBehavior;
@property (nonatomic) BOOL clearsOnBeginEditing;
@property (nonatomic) BOOL clearsOnInsertion;
@property BOOL clearsPlaceholderOnBeginEditing;
@property (nonatomic) CGPoint contentOffsetForSameViewDrops;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (nonatomic) int controlSize;
@property (readonly, nonatomic) NSInteger cursorBehavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *defaultTextAttributes;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) NSObject<UITextFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (retain, nonatomic) UIImage *disabledBackground; // ivar: _disabledBackground
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (readonly, nonatomic) CGPoint drawingScale;
@property (readonly, nonatomic, getter=isEditable) BOOL editable;
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (readonly, nonatomic) UIScrollView *enclosingScrollView;
@property (readonly, nonatomic) UITextPosition *endOfDocument;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) NSInteger forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL forceSpellingDictation;
@property (nonatomic, getter=_forcesClearButtonHighContrastAppearance, setter=_setForcesClearButtonHighContrastAppearance:) BOOL forcesClearButtonHighContrastAppearance;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly, nonatomic) BOOL hasText;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrediction;
@property (retain) UIView *inputAccessoryView;
@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (weak, nonatomic) NSObject<UITextInputDelegate> *inputDelegate;
@property (retain) UIView *inputView; // ivar: _inputView
@property (readonly, nonatomic) id *insertDictationResultPlaceholder;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) NSUInteger insertionPointWidth;
@property (readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
@property (copy, nonatomic) id *interactionState;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (readonly, nonatomic) NSLayoutManager *layoutManager;
@property (nonatomic) BOOL learnsCorrections;
@property (retain, nonatomic) UIView *leftView; // ivar: _leftView
@property (nonatomic) NSInteger leftViewMode; // ivar: _leftViewMode
@property (copy, nonatomic) NSDictionary *linkTextAttributes;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (readonly, nonatomic) UITextRange *markedTextRange;
@property (copy, nonatomic) NSDictionary *markedTextStyle;
@property (nonatomic) CGFloat minimumFontSize; // ivar: _minimumFontSize
@property (nonatomic) NSInteger nonEditingLinebreakMode;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) UIPasteConfiguration *pasteConfiguration;
@property (weak, nonatomic) NSObject<UITextPasteDelegate> *pasteDelegate; // ivar: _pasteDelegate
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (retain) UIView *recentsAccessoryView;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (retain, nonatomic) UIView *rightView; // ivar: _rightView
@property (nonatomic) NSInteger rightViewMode; // ivar: _rightViewMode
@property (readonly, nonatomic) NSString *searchText;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (copy) UITextRange *selectedTextRange;
@property (nonatomic) NSInteger selectionAffinity;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) CGFloat selectionBorderWidth;
@property (nonatomic) CGFloat selectionCornerRadius;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) UIEdgeInsets selectionEdgeInsets;
@property (nonatomic) NSInteger selectionGranularity;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) CGFloat shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;
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
@property (readonly, nonatomic) BOOL supportsImagePaste;
@property (nonatomic, getter=_supportsKeyboardNavigationForSuggestions, setter=_setSupportsKeyboardNavigationForSuggestions:) BOOL supportsKeyboardNavigationForSuggestions;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) NSTextContainer *textContainer;
@property (readonly, nonatomic) CGPoint textContainerOrigin;
@property (copy, nonatomic) NSString *textContentType;
@property (readonly, nonatomic, getter=isTextDragActive) BOOL textDragActive;
@property (weak, nonatomic) NSObject<UITextDragDelegate> *textDragDelegate; // ivar: _textDragDelegate
@property (readonly, nonatomic) UIDragInteraction *textDragInteraction;
@property (nonatomic) NSInteger textDragOptions; // ivar: _textDragOptions
@property (readonly, nonatomic, getter=isTextDropActive) BOOL textDropActive;
@property (weak, nonatomic) NSObject<UITextDropDelegate> *textDropDelegate; // ivar: _textDropDelegate
@property (readonly, nonatomic) UIDropInteraction *textDropInteraction;
@property (readonly, nonatomic) NSObject<UITextInputSuggestionDelegate> *textInputSuggestionDelegate;
@property (readonly, nonatomic) UIView *textInputView;
@property (readonly, nonatomic) _UITextLayoutControllerBase<_UITextLayoutController> *textLayoutController;
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (readonly, nonatomic) NSTextStorage *textStorage;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (readonly, nonatomic) NSObject<UITextInputTokenizer> *tokenizer;
@property (readonly, nonatomic) UITraitCollection *traitCollection;
@property (copy, nonatomic) NSDictionary *typingAttributes;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic, getter=isUndoEnabled) BOOL undoEnabled;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) BOOL usesStandardTextScaling;
@property (nonatomic) _NSRange validTextRange;
@property (retain, nonatomic) _UITextFieldVisualStyle *visualStyle; // ivar: _visualStyle


+(BOOL)_isTextLayoutManagerEnabled;
+(BOOL)_wantsFadedEdges;
-(BOOL)_allowAssistanceInSubtree;
-(BOOL)_allowsChangingFirstResponderForFocusUpdateWithContext:(id)arg0 ;
-(BOOL)_blurEnabled;
-(BOOL)_canDrawContent;
-(BOOL)_contentCoverUnsecuresText;
-(BOOL)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange )arg0 replacementString:(id)arg1 delegateCares:(*BOOL)arg2 ;
-(BOOL)_finishResignFirstResponder;
-(BOOL)_forceDisplayOverridePlaceholder;
-(BOOL)_hasBaseline;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_hasCustomClearButtonImage;
-(BOOL)_hasFloatingFieldEditor;
-(BOOL)_hasFontInfoForVerticalBaselineSpacing;
-(BOOL)_hasSuffixField;
-(BOOL)_heightShouldBeMini;
-(BOOL)_implementsEditMenu;
-(BOOL)_inPopover;
-(BOOL)_inVibrantContentView;
-(BOOL)_isDisplayingLookupViewController;
-(BOOL)_isDisplayingReferenceLibraryViewController;
-(BOOL)_isDisplayingShareViewController;
-(BOOL)_isDisplayingShortcutViewController;
-(BOOL)_isDisplayingTextService;
-(BOOL)_isFocused;
-(BOOL)_isPasscodeStyle;
-(BOOL)_isShowingPlaceholder;
-(BOOL)_isShowingPrefix;
-(BOOL)_isTextLayoutManagerEnabled;
-(BOOL)_ownsInputAccessoryView;
-(BOOL)_partsShouldBeMini;
-(BOOL)_requiresKeyboardResetOnReload;
-(BOOL)_restoreFirstResponder;
-(BOOL)_shouldAppendTextInViewDescription;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(BOOL)_shouldEndEditing;
-(BOOL)_shouldEndEditingOnReturn;
-(BOOL)_shouldForwardMovementToFocusEngine:(NSInteger)arg0 ;
-(BOOL)_shouldIgnoreBaseWritingDirectionChanges;
-(BOOL)_shouldObscureInput;
-(BOOL)_shouldOverrideEditingFont;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(BOOL)_shouldShrinkPlaceholderToFitForAccessibility;
-(BOOL)_shouldSuppressSelectionHandles;
-(BOOL)_shouldUnobscureTextWithContentCover;
-(BOOL)_showsBackgroundCoverView;
-(BOOL)_showsClearButton:(BOOL)arg0 ;
-(BOOL)_showsClearButtonWhenEmpty;
-(BOOL)_showsClearButtonWhenNonEmpty:(BOOL)arg0 ;
-(BOOL)_showsContentCoverView;
-(BOOL)_showsLeftView;
-(BOOL)_showsRightView;
-(BOOL)_textNeedsSanitizing:(id)arg0 ;
-(BOOL)_tvHasFloatingFieldEditor;
-(BOOL)_uiktest_shouldDisableTextColorUpdateOnTraitCollectionChange;
-(BOOL)_useGesturesForEditableContent;
-(BOOL)_visualEffectViewEnabled;
-(BOOL)_visualizesDebugRects;
-(BOOL)_wantsBaselineUpdatingFollowingConstraintsPass;
-(BOOL)allowsDraggingAttachments;
-(BOOL)becomeFirstResponder;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeDropResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)drawTextInRectIfNeeded:(struct CGRect )arg0 ;
-(BOOL)fieldEditor:(id)arg0 shouldInsertText:(id)arg1 replacingRange:(struct _NSRange )arg2 ;
-(BOOL)fieldEditorShouldExtendCaretHeight:(id)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)hasMarkedText;
-(BOOL)hasSelection;
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)keyboardInput:(id)arg0 shouldInsertText:(id)arg1 isMarkedText:(BOOL)arg2 ;
-(BOOL)keyboardInput:(id)arg0 shouldReplaceTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)keyboardInputChanged:(id)arg0 ;
-(BOOL)keyboardInputShouldDelete:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 nextToNeighbor:(id)arg2 edge:(int)arg3 attribute:(NSInteger)arg4 multiplier:(CGFloat)arg5 ;
-(CGFloat)_baselineOffsetFromBottom;
-(CGFloat)_firstBaselineOffsetFromTop;
-(CGFloat)_foregroundViewsAlpha;
-(CGFloat)_fullFontSize;
-(CGFloat)_maximumAlphaForLeadingView;
-(CGFloat)_placeholderLabelAlphaForForegroundViewsAlpha:(CGFloat)arg0 ;
-(CGFloat)_preferredBackgroundCornerRadius;
-(CGFloat)actualMinimumFontSize;
-(Class)_canvasViewClass;
-(Class)_preferredBackgroundProviderClass;
-(NSInteger)_blurEffectStyle;
-(NSInteger)_contentCoverViewMode;
-(NSInteger)_currentTextAlignment;
-(NSInteger)_preferredRenderingModeForPlaceholder;
-(NSInteger)_suffixLabelTextAlignment;
-(NSInteger)_systemDefaultFocusGroupPriority;
-(NSInteger)_userInterfaceStyle;
-(NSInteger)baseWritingDirectionForPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(NSInteger)comparePosition:(id)arg0 toPosition:(id)arg1 ;
-(NSInteger)offsetFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(NSUInteger)offsetInMarkedTextForSelection:(id)arg0 ;
-(float)_marginTop;
-(float)_marginTopForBounds:(struct CGRect )arg0 ;
-(float)_newFontSize:(float)arg0 maxSize:(float)arg1 ;
-(float)paddingBottom;
-(float)paddingLeft;
-(float)paddingRight;
-(float)paddingTop;
-(id)_activityItemsConfigurationAtLocation:(struct CGPoint )arg0 ;
-(id)_attributedStringForInsertionOfAttributedString:(id)arg0 ;
-(id)_baselineCalculatorSourceCoordinateSpace;
-(id)_clearButtonImageForState:(NSUInteger)arg0 ;
-(id)_contentBackdropView;
-(id)_contentCoverView;
-(id)_contentFloatingContainerView;
-(id)_contentSnapshot;
-(id)_copyFont:(id)arg0 newSize:(float)arg1 maxSize:(float)arg2 ;
-(id)_currentTextColor;
-(id)_dci_editingMenuForSuggestedActions:(id)arg0 textRange:(id)arg1 ;
-(id)_defaultFocusEffect;
-(id)_defaultFont;
-(id)_defaultPromptString;
-(id)_dictationInterpretations;
-(id)_editingProcessor;
-(id)_effectivePasteConfiguration;
-(id)_encodableSubviews;
-(id)_fieldEditorHostAllowingCreation:(BOOL)arg0 ;
-(id)_implicitPasteConfigurationClasses;
-(id)_initWithFrame:(struct CGRect )arg0 textLayoutManagerEnabled:(BOOL)arg1 ;
-(id)_inputController;
-(id)_metricsProvider;
-(id)_pointerInteractionDelegate;
-(id)_preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)_preferredMetricsProvider;
-(id)_previewRendererForRange:(id)arg0 unifyRects:(BOOL)arg1 ;
-(id)_proxyTextInput;
-(id)_systemBackgroundView;
-(id)_systemDefaultFocusGroupIdentifier;
-(id)_tvTypingAttributes;
-(id)_viewForLoweringBaselineLayoutAttribute:(int)arg0 ;
-(id)actualFont;
-(id)attributedTextInRange:(id)arg0 ;
-(id)automaticallySelectedOverlay;
-(id)characterRangeAtPoint:(struct CGPoint )arg0 ;
-(id)characterRangeByExtendingPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)clearButton;
-(id)closestPositionToPoint:(struct CGPoint )arg0 ;
-(id)closestPositionToPoint:(struct CGPoint )arg0 withinRange:(id)arg1 ;
-(id)createPlaceholderLabelWithFont:(id)arg0 andTextAlignment:(NSInteger)arg1 ;
-(id)createTextLabelWithTextColor:(id)arg0 ;
-(id)customOverlayContainer;
-(id)defaultClearButtonImageForState:(NSUInteger)arg0 ;
-(id)documentFragmentForPasteboardItemAtIndex:(NSInteger)arg0 ;
-(id)editMenuForTextRange:(id)arg0 suggestedActions:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)insertTextPlaceholderWithSize:(struct CGSize )arg0 ;
-(id)largeContentTitle;
-(id)metadataDictionariesForDictationResults;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)positionFromPosition:(id)arg0 inDirection:(NSInteger)arg1 offset:(NSInteger)arg2 ;
-(id)positionFromPosition:(id)arg0 offset:(NSInteger)arg1 ;
-(id)positionWithinRange:(id)arg0 farthestInDirection:(NSInteger)arg1 ;
-(id)rangeWithTextAlternatives:(*id)arg0 atPosition:(id)arg1 ;
-(id)selectedAttributedText;
-(id)selectedText;
-(id)selectionRectsForRange:(id)arg0 ;
-(id)selectionView;
-(id)supportedPasteboardTypesForCurrentSelection;
-(id)textInRange:(id)arg0 ;
-(id)textRangeFromPosition:(id)arg0 toPosition:(id)arg1 ;
-(id)textStylingAtPosition:(id)arg0 inDirection:(NSInteger)arg1 ;
-(id)undoManager;
-(id)valueForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(id)webView;
-(id)willGenerateCancelPreview;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGPoint )_originForTextFieldLabel:(id)arg0 ;
-(struct CGPoint )_scrollOffset;
-(struct CGPoint )constrainedPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_availableTextRectExcludingButtonsForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_availableTextRectForBounds:(struct CGRect )arg0 forEditing:(BOOL)arg1 ;
-(struct CGRect )_baselineLeftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_boundingRectForRange:(id)arg0 ;
-(struct CGRect )_prefixFrame;
-(struct CGRect )_responderExternalTouchRectForWindow:(id)arg0 ;
-(struct CGRect )_responderSelectionRectForWindow:(id)arg0 ;
-(struct CGRect )_selectionClipRect;
-(struct CGRect )_suffixFrame;
-(struct CGRect )adjustedCaretRectForCaretRect:(struct CGRect )arg0 ;
-(struct CGRect )borderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )caretRectForPosition:(id)arg0 ;
-(struct CGRect )clearButtonRect;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint )arg0 ;
-(struct CGRect )editRect;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )firstRectForRange:(id)arg0 ;
-(struct CGRect )frameForDictationResultPlaceholder:(id)arg0 ;
-(struct CGRect )iconRect;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )_textSizeUsingFullFontSize:(BOOL)arg0 ;
-(struct CGSize )clearButtonOffset;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct _NSRange )_rangeForClearButton;
-(struct _NSRange )_rangeForSetText;
-(struct _NSRange )_textRangeForTextStorageRange:(struct _NSRange )arg0 ;
-(struct _NSRange )_unobscuredSecureRange;
-(struct _NSRange )_visibleRangeWithLayout:(BOOL)arg0 ;
-(struct _NSRange )fieldEditor:(id)arg0 willChangeSelectionFromCharacterRange:(struct _NSRange )arg1 toCharacterRange:(struct _NSRange )arg2 ;
-(struct _NSRange )insertFilteredText:(id)arg0 ;
-(struct _NSRange )selectionRange;
-(void)__resumeBecomeFirstResponder;
-(void)_activateSelectionView;
-(void)_addFieldEditorToView;
-(void)_addShortcut:(id)arg0 ;
-(void)_addTextCanvasViewAdjustingFrame:(BOOL)arg0 ;
-(void)_adjustFontForAccessibilityTraits:(BOOL)arg0 ;
-(void)_animateNextHighlightChange;
-(void)_applicationResuming:(id)arg0 ;
-(void)_applyHighlightedAnimated:(BOOL)arg0 ;
-(void)_attachFieldEditor;
-(void)_backgroundProviderWillChange:(id)arg0 ;
-(void)_becomeFirstResponder;
-(void)_clearButtonClicked:(id)arg0 ;
-(void)_clearSelectionUI;
-(void)_contentCoverStateDidChange;
-(void)_createInteractionAssistant;
-(void)_define:(id)arg0 ;
-(void)_deleteBackwardAndNotify:(BOOL)arg0 ;
-(void)_detachFieldEditor;
-(void)_detachFieldEditorDiscardingEdits:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_detectCustomDrawing;
-(void)_didAttachFieldEditor;
-(void)_didChangeSecureTextEntry;
-(void)_didDetachFieldEditor;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didSetFont:(id)arg0 ;
-(void)_didUpdateAfterDetachingFieldEditor;
-(void)_drawTextInRect:(struct CGRect )arg0 forLabel:(id)arg1 ;
-(void)_enabledDidChangeAnimated:(BOOL)arg0 ;
-(void)_encodeBackgroundColorWithCoder:(id)arg0 ;
-(void)_forceObscureAllText;
-(void)_gestureRecognizerFailed:(id)arg0 ;
-(void)_highlightedDidChangeAnimated:(BOOL)arg0 ;
-(void)_increaseContrastSettingChanged:(id)arg0 ;
-(void)_initIncreasedContrastNotifications;
-(void)_initTextCanvasView;
-(void)_initTextLayoutController;
-(void)_initTextStorage;
-(void)_initialScrollDidFinish:(id)arg0 ;
-(void)_insertAttributedTextWithoutClosingTyping:(id)arg0 ;
-(void)_installSelectGestureRecognizer;
-(void)_invalidateAfterUpdatingEditingAttributes;
-(void)_invalidateAllGlyphsAndTextLayout;
-(void)_invalidateBackgroundProvider;
-(void)_invalidateBackgroundProviderForced:(BOOL)arg0 ;
-(void)_invalidateCachedDefaultClearButtonImages;
-(void)_invalidateDefaultFont;
-(void)_invalidateDefaultFullFontSize;
-(void)_invalidateMetricsProvider;
-(void)_invalidatePasscodeStyleFromStyle:(BOOL)arg0 ;
-(void)_layoutContentAndExtras;
-(void)_layoutContentOnly;
-(void)_layoutFieldEditor;
-(void)_layoutLabels;
-(void)_logWarningForMenuControllerUsage;
-(void)_metricsProviderDidChange;
-(void)_metricsProviderWillChange:(id)arg0 ;
-(void)_nonDestructivelyResignFirstResponder;
-(void)_noteThatKeyboardAppearanceHasChanged;
-(void)_notifyDidBeginEditing;
-(void)_notifyDidEndEditing;
-(void)_notifySystemKeyboardOfAppearanceChange;
-(void)_pasteSessionDidFinish:(id)arg0 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_promptForReplace:(id)arg0 ;
-(void)_propagateCuiProperties;
-(void)_removeFieldEditorAndHost;
-(void)_resetSelectionUI;
-(void)_resignFirstResponder;
-(void)_sanitizeText:(id)arg0 ;
-(void)_scrollRangeToVisible:(struct _NSRange )arg0 animated:(BOOL)arg1 ;
-(void)_selectGestureChanged:(id)arg0 ;
-(void)_selectionMayChange:(id)arg0 ;
-(void)_setActualLeftView:(id)arg0 ;
-(void)_setActualLeftViewMode:(NSInteger)arg0 ;
-(void)_setActualRightView:(id)arg0 ;
-(void)_setActualRightViewMode:(NSInteger)arg0 ;
-(void)_setBlurEnabled:(BOOL)arg0 ;
-(void)_setContentCoverUnsecuresText:(BOOL)arg0 ;
-(void)_setContentCoverView:(id)arg0 ;
-(void)_setContentCoverViewMode:(NSInteger)arg0 ;
-(void)_setDisableFocus:(BOOL)arg0 ;
-(void)_setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setForceDisplayOverridePlaceholder:(BOOL)arg0 ;
-(void)_setForegroundViewsAlpha:(CGFloat)arg0 ;
-(void)_setFullFontSize:(id)arg0 ;
-(void)_setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setLeadingPadding:(CGFloat)arg0 ;
-(void)_setMetricsProvider:(id)arg0 ;
-(void)_setNeedsStyleRecalc;
-(void)_setOverridePlaceholder:(id)arg0 alignment:(NSInteger)arg1 ;
-(void)_setPrefix:(id)arg0 ;
-(void)_setSuffix:(id)arg0 withColor:(id)arg1 ;
-(void)_setTrailingPadding:(CGFloat)arg0 ;
-(void)_setVisualEffectViewEnabled:(BOOL)arg0 backgroundColor:(id)arg1 ;
-(void)_setVisualizesDebugRects:(BOOL)arg0 ;
-(void)_setupDefaultStyleEffectConfiguration;
-(void)_share:(id)arg0 ;
-(void)_showTextStyleOptions:(id)arg0 ;
-(void)_sizeChanged:(BOOL)arg0 ;
-(void)_stopObservingFieldEditorScroll;
-(void)_syncTypingAttributesWithDefaultAttribute:(id)arg0 ;
-(void)_translate:(id)arg0 ;
-(void)_transliterateChinese:(id)arg0 ;
-(void)_tvUpdateAppearanceForUserInterfaceStyle;
-(void)_tvUpdateContentBackdropView;
-(void)_tvUpdateTextColor;
-(void)_uninstallSelectGestureRecognizer;
-(void)_updateAutosizeStyleIfNeeded;
-(void)_updateBaselineInformationDependentOnBounds;
-(void)_updateBaselineInformationDependentOnBoundsAllowingInvalidation:(BOOL)arg0 ;
-(void)_updateButtons;
-(void)_updateForTintColor;
-(void)_updateHelpMessageOverrideWithMessage:(id)arg0 ;
-(void)_updateLabel;
-(void)_updateLabelAppearance;
-(void)_updatePlaceholderPosition;
-(void)_updateSelectionGestures;
-(void)_updateSuffix:(id)arg0 ;
-(void)_updateTextEffectsConfigurationIfNeeded;
-(void)_willAttachFieldEditor;
-(void)_willUpdateAfterDetachingFieldEditor;
-(void)_windowBecameKey;
-(void)_windowResignedKey;
-(void)addGhostedRange:(id)arg0 ;
-(void)addInvisibleRange:(id)arg0 ;
-(void)addTextAlternatives:(id)arg0 ;
-(void)becomeDropResponder;
-(void)beginFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)beginSelectionChange;
-(void)cancelAutoscroll;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)captureTextFromCamera:(id)arg0 ;
-(void)clearText;
-(void)copy:(id)arg0 ;
-(void)createPlaceholderIfNecessary;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)decodeRestorableStateWithCoder:(id)arg0 includingSelectedTextAndDisplayedViewControllers:(BOOL)arg1 ;
-(void)decreaseSize:(id)arg0 ;
-(void)deleteBackward;
-(void)didAddTextAttachmentViews:(id)arg0 ;
-(void)didGenerateCancelPreview:(id)arg0 ;
-(void)didLayoutTextAttachmentView:(id)arg0 inFragmentRect:(struct CGRect )arg1 ;
-(void)didMoveToWindow;
-(void)didRemoveTextAttachmentViews:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)disableClearsOnInsertion;
-(void)draggingFinished:(id)arg0 ;
-(void)draggingStarted;
-(void)drawPlaceholderInRect:(struct CGRect )arg0 ;
-(void)drawPrefixInRect:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)drawSuffixInRect:(struct CGRect )arg0 ;
-(void)drawTextInRect:(struct CGRect )arg0 ;
-(void)droppingFinished;
-(void)droppingStarted;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 includingSelectedTextAndDisplayedViewControllers:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endFloatingCursor;
-(void)endSelectionChange;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)fieldEditorDidChange:(id)arg0 ;
-(void)fieldEditorDidChangeSelection:(id)arg0 ;
-(void)finishedSettingPlaceholder;
-(void)finishedSettingTextOrAttributedText;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)increaseSize:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertDictationResult:(id)arg0 withCorrectionIdentifier:(id)arg1 ;
-(void)insertText:(id)arg0 ;
-(void)insertText:(id)arg0 alternatives:(id)arg1 style:(NSInteger)arg2 ;
-(void)insertText:(id)arg0 style:(NSInteger)arg1 alternatives:(id)arg2 ;
-(void)interactionTintColorDidChange;
-(void)invalidateDropCaret;
-(void)keyboardInputChangedSelection:(id)arg0 ;
-(void)layoutSubviews;
-(void)layoutTilesNow;
-(void)makeTextWritingDirectionLeftToRight:(id)arg0 ;
-(void)makeTextWritingDirectionNatural:(id)arg0 ;
-(void)makeTextWritingDirectionRightToLeft:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paste:(id)arg0 ;
-(void)pasteAndMatchStyle:(id)arg0 ;
-(void)pasteItemProviders:(id)arg0 ;
-(void)performCancelAnimations;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)removeAllGhostedRanges;
-(void)removeDictationResultPlaceholder:(id)arg0 willInsertResult:(BOOL)arg1 ;
-(void)removeEmojiAlternatives;
-(void)removeFromSuperview;
-(void)removeInvisibleRange:(id)arg0 ;
-(void)removeTextPlaceholder:(id)arg0 ;
-(void)replace:(id)arg0 ;
-(void)replaceRange:(id)arg0 withAttributedText:(id)arg1 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg0 replacementText:(id)arg1 ;
-(void)resignDropResponderWithDropPerformed:(BOOL)arg0 ;
-(void)sanitizeAttributedText:(id)arg0 ;
-(void)scrollTextFieldToVisibleIfNecessary;
-(void)select:(id)arg0 ;
-(void)selectAll;
-(void)selectAll:(id)arg0 ;
-(void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)setAutoresizesTextToFit:(BOOL)arg0 ;
-(void)setBaseWritingDirection:(NSInteger)arg0 forRange:(id)arg1 ;
-(void)setBecomesFirstResponderOnClearButtonTap:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setClearButtonOffset:(struct CGSize )arg0 ;
-(void)setClearButtonStyle:(NSInteger)arg0 ;
-(void)setClipsToBounds:(BOOL)arg0 ;
-(void)setContentVerticalAlignment:(NSInteger)arg0 ;
-(void)setContinuousSpellCheckingEnabled:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setIcon:(id)arg0 ;
-(void)setLabel:(id)arg0 ;
-(void)setLabelOffset:(float)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setNeedsLayout;
-(void)setPaddingLeft:(float)arg0 ;
-(void)setPaddingRight:(float)arg0 ;
-(void)setPaddingTop:(float)arg0 paddingLeft:(float)arg1 ;
-(void)setProgress:(float)arg0 ;
-(void)setSelectionRange:(struct _NSRange )arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)startAutoscroll:(struct CGPoint )arg0 ;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)textContainerUsageDidChangeToSize:(struct CGSize )arg0 ;
-(void)tintColorDidChange;
-(void)toggleBoldface:(id)arg0 ;
-(void)toggleItalics:(id)arg0 ;
-(void)toggleUnderline:(id)arg0 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unmarkText;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 ;
-(void)updateFloatingCursorAtPoint:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)validateCommand:(id)arg0 ;
-(void)willDismissEditMenuWithAnimator:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;
-(void)willPresentEditMenuWithAnimator:(id)arg0 ;


@end


#endif