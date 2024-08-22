// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISEARCHTEXTFIELD_H
#define UISEARCHTEXTFIELD_H

@class NSMutableDictionary, NSValue, NSHashTable, NSArray, NSString;
@protocol _UIVisualStyleStylable, _UISearchSuggestionControllerDelegate, _UISearchBarTextFieldOrMailReplacement;


#import "UITextField.h"
#import "_UISearchBarSearchFieldBackgroundView.h"
#import "UIImageView.h"
#import "_UISearchBarTextFieldTokenCounter.h"
#import "UITapGestureRecognizer.h"
#import "_UISearchTextFieldVisualStyle.h"
#import "UIHoverGestureRecognizer.h"
#import "UIImage.h"
#import "UISearchBar.h"
#import "_UISearchSuggestionControllerIOS.h"
#import "UIColor.h"
#import "UITextRange.h"

@interface UISearchTextField : UITextField <_UIVisualStyleStylable, _UISearchSuggestionControllerDelegate, _UISearchBarTextFieldOrMailReplacement>

 {
    NSMutableDictionary *_customClearButtons;
    NSMutableDictionary *_iconOffsets;
    NSValue *_searchTextOffsetValue;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundTop;
    _UISearchBarSearchFieldBackgroundView *_effectBackgroundBottom;
    UIImageView *_defaultLeftView;
    BOOL _deferringFirstResponder;
    BOOL _animatePlaceholderOnResignFirstResponder;
    ? _searchBarTextFieldFlags;
    NSHashTable *_knownTokenLayoutViews;
    _UISearchBarTextFieldTokenCounter *_tokenCounter;
    UITapGestureRecognizer *_tokenTapGestureRecognizer;
    _UISearchTextFieldVisualStyle *_visualStyle;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    UIImage *_magnifyingGlassImage;
}


@property (nonatomic, setter=_setAlwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory:) BOOL _alwaysHidesMagnifyingGlassForAccessibilityContentSizeCategory;
@property (nonatomic, setter=_setAlwaysShowsClearButtonWhenEmpty:) BOOL _alwaysShowsClearButtonWhenEmpty; // ivar: __alwaysShowsClearButtonWhenEmpty
@property (copy, nonatomic, setter=_dci_setSearchSuggestions:) NSArray *_dci_searchSuggestions;
@property (copy, nonatomic, setter=_dci_setSuggestionsMenuDismissalPassthroughViews:) NSArray *_dci_suggestionsMenuDismissalPassthroughViews;
@property (nonatomic, setter=_setIgnoresDynamicType:) BOOL _ignoresDynamicType;
@property (readonly, nonatomic) BOOL _needsDelayedSearchControllerPresentation;
@property (nonatomic, setter=_setPreventSelectionViewActivation:) BOOL _preventSelectionViewActivation; // ivar: __preventSelectionViewActivation
@property (weak, nonatomic, setter=_setSearchBar:) UISearchBar *_searchBar; // ivar: _searchBar
@property (retain, nonatomic, setter=_setSearchTextOffetValue:) NSValue *_searchTextOffsetValue;
@property (retain, nonatomic, setter=_setSuggestionController:) _UISearchSuggestionControllerIOS *_suggestionController; // ivar: _suggestionController
@property (nonatomic) BOOL allowsCopyingTokens;
@property (nonatomic) BOOL allowsDeletingTokens;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIColor *searchPlaceholderColor;
@property (copy, nonatomic) NSArray *searchSuggestions;
@property (readonly, nonatomic) UIColor *searchTextColor;
@property (readonly, nonatomic) UITextField *searchTextField;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextRange *textualRange;
@property (retain, nonatomic) UIColor *tokenBackgroundColor; // ivar: _tokenBackgroundColor
@property (copy, nonatomic) NSArray *tokens;


+(BOOL)_wantsFadedEdges;
+(Class)_fieldEditorClass;
+(Class)_textPasteItemClass;
+(id)visualStyleRegistryIdentity;
-(BOOL)_becomeFirstResponderWhenPossible;
-(BOOL)_delegateShouldBeginEditing;
-(BOOL)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange )arg0 replacementString:(id)arg1 delegateCares:(*BOOL)arg2 ;
-(BOOL)_delegateShouldClear;
-(BOOL)_delegateShouldEndEditing;
-(BOOL)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;
-(BOOL)_hasContent;
-(BOOL)_hasCustomClearButtonImage;
-(BOOL)_isEditingOrHasContent;
-(BOOL)_scalesMagnifyingGlassForDynamicTypeWithFont:(id)arg0 ;
-(BOOL)_shouldCenterPlaceholder;
-(BOOL)_shouldDetermineInterfaceStyleTextColor;
-(BOOL)_shouldHideMagnifyingGlassWhenEditingOrHasContent;
-(BOOL)_shouldIgnoreBaseWritingDirectionChanges;
-(BOOL)_shouldOverrideEditingFont;
-(BOOL)_shouldResignOnEditingDidEndOnExit;
-(BOOL)_shouldSendContentChangedNotificationsIfOnlyMarkedTextChanged;
-(BOOL)_shouldSuppressSelectionHandles;
-(BOOL)_supportsDynamicType;
-(BOOL)_textShouldFillFieldEditorHeight;
-(BOOL)allowsDraggingAttachments;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)resignFirstResponder;
-(CGFloat)_clearButtonMarginX;
-(CGFloat)_maximumAlphaForLeadingView;
-(CGFloat)_placeholderLabelAlphaForForegroundViewsAlpha:(CGFloat)arg0 ;
-(Class)_canvasViewClass;
-(Class)_placeholderLabelClass;
-(NSInteger)_blurEffectStyle;
-(NSInteger)_preferredRenderingModeForPlaceholder;
-(NSInteger)_suffixLabelTextAlignment;
-(NSUInteger)_characterIndexForTokenTapGestureRecognizer;
-(id)_clearButtonImageForState:(NSUInteger)arg0 ;
-(id)_createEffectsBackgroundViewWithStyle:(NSUInteger)arg0 applyFilter:(id)arg1 ;
-(id)_customDraggableObjectsForRange:(id)arg0 ;
-(id)_deferredSearchSuggestions;
-(id)_initWithDeferredSearchIconImageConfiguration;
-(id)_initWithFrame:(struct CGRect )arg0 textLayoutManagerEnabled:(BOOL)arg1 ;
-(id)_initWithFrame:(struct CGRect )arg0 textLayoutManagerEnabled:(BOOL)arg1 defersSearchImageConfiguration:(BOOL)arg2 ;
-(id)_newAttributedStringWithToken:(id)arg0 ;
-(id)_offsetValueForIcon:(NSInteger)arg0 ;
-(id)_placeholderColor;
-(id)_rangeOfCustomDraggableObjectsInRange:(id)arg0 ;
-(id)attributedText;
-(id)attributedTextInRange:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)positionOfTokenAtIndex:(NSInteger)arg0 ;
-(id)selectedTokens;
-(id)text;
-(id)textInRange:(id)arg0 ;
-(id)textInputTraits;
-(id)tokensInRange:(id)arg0 ;
-(struct CGRect )_adjustedTextOrEditingRect:(struct CGRect )arg0 forBounds:(struct CGRect )arg1 ;
-(struct CGRect )_adjustmentsForSearchIconViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_availableTextRectForBounds:(struct CGRect )arg0 forEditing:(BOOL)arg1 ;
-(struct CGRect )_bookmarkViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_searchIconViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )_suffixFrame;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )_clearButtonSize;
-(struct CGSize )intrinsicContentSize;
-(struct _NSRange )_rangeForClearButton;
-(struct _NSRange )_rangeForSetText;
-(struct _NSRange )_textRangeForTextStorageRange:(struct _NSRange )arg0 ;
-(struct _NSRange )insertFilteredText:(id)arg0 ;
-(void)__highlightedDidChangeAnimated:(BOOL)arg0 ;
-(void)_activateSelectionView;
-(void)_animateForFirstResponderChangeWithAnimations:(id)arg0 ;
// -(void)_animateForFirstResponderChangeWithAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)_applyHighlightedAnimated:(BOOL)arg0 ;
-(void)_becomeFirstResponder;
-(void)_clearBackgroundViews;
-(void)_copySelectionPopulatingActuallyCopiedTokenCharacterIndexes:(id)arg0 ;
-(void)_defaultInsertTextSuggestion:(id)arg0 ;
-(void)_didRemoveTokenLayoutView:(id)arg0 ;
-(void)_didSetFont:(id)arg0 ;
-(void)_highlightedDidChangeAnimated:(BOOL)arg0 ;
-(void)_hoverGestureChanged:(id)arg0 ;
-(void)_notifyDidBeginEditing;
-(void)_notifyDidEndEditing;
-(void)_observeScrollViewDidScroll:(id)arg0 ;
-(void)_pasteSessionDidFinish:(id)arg0 ;
-(void)_redirectSelectionToAvoidClobberingTokens;
-(void)_removeEffectsBackgroundViews;
-(void)_resetNeedsDelayedSearchControllerPresentation;
-(void)_setAnimatesBackgroundCornerRadius:(BOOL)arg0 ;
-(void)_setBackgroundViewsAlpha:(CGFloat)arg0 ;
-(void)_setBottomEffectBackgroundVisible:(BOOL)arg0 ;
-(void)_setClearButtonImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setDeferredSearchSuggestions:(id)arg0 ;
-(void)_setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setMagnifyingGlassImage:(id)arg0 ;
-(void)_setOffsetValue:(id)arg0 forIcon:(NSInteger)arg1 ;
-(void)_suggestionsMenuInteractionWillEndWithAnimator:(id)arg0 ;
-(void)_tokenTapGestureRecognized;
-(void)_updateAlphaForMagnifyingGlass;
-(void)_updateAtomViewSelection:(BOOL)arg0 ;
-(void)_updateBackgroundView:(id)arg0 withStyle:(NSUInteger)arg1 filter:(id)arg2 ;
-(void)_updateBackgroundViewsAnimated:(BOOL)arg0 ;
-(void)_updateDefaultLeftViewForFont:(id)arg0 ;
-(void)_updateHelpMessageOverrideWithMessage:(id)arg0 ;
-(void)_updateLeftViewForMagnifyingGlassImage;
-(void)_willAddTokenLayoutView:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)deleteBackward;
-(void)didAddTextAttachmentViews:(id)arg0 ;
-(void)didLayoutTextAttachmentView:(id)arg0 inFragmentRect:(struct CGRect )arg1 ;
-(void)didRemoveTextAttachmentViews:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fieldEditorDidChange:(id)arg0 ;
-(void)fieldEditorDidChangeSelection:(id)arg0 ;
-(void)insertAttributedText:(id)arg0 ;
-(void)insertText:(id)arg0 ;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)insertToken:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)paste:(id)arg0 ;
-(void)removeTokenAtIndex:(NSInteger)arg0 ;
-(void)replaceRange:(id)arg0 withAttributedText:(id)arg1 ;
-(void)replaceRange:(id)arg0 withText:(id)arg1 ;
-(void)replaceRangeWithTextWithoutClosingTyping:(id)arg0 replacementText:(id)arg1 ;
-(void)replaceTextualPortionOfRange:(id)arg0 withToken:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)searchSuggestionController:(id)arg0 didSelectSuggestion:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setAttributedMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setMarkedText:(id)arg0 selectedRange:(struct _NSRange )arg1 ;
-(void)setText:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateForBackdropStyle:(NSUInteger)arg0 ;


@end


#endif