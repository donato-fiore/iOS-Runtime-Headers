// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISEARCHBAR_H
#define UISEARCHBAR_H

@class NSIndexSet, NSString, NSArray;
@protocol _UISearchBarVisualProvidingDelegate, UIScribbleInteractionDelegate, UITextInputTraits_Private, _UIBarPositioningInternal, _UINavigationBarAugmentedTitleView, UIBarPositioning, UITextInputTraits, _UISearchBarSearchContainerLayoutCustomizationDelegate, _UISearchBarVisualProviding, UISearchBarDelegate;


#import "UIView.h"
#import "UITapGestureRecognizer.h"
#import "UITextInputTraits.h"
#import "UIKeyCommand.h"
#import "_UINavigationControllerPalette.h"
#import "UIButton.h"
#import "UISearchController.h"
#import "UIImage.h"
#import "UIColor.h"
#import "UITextInputAssistantItem.h"
#import "UIInputContextHistory.h"
#import "UITextInputPasswordRules.h"
#import "UISearchBarTextField.h"
#import "UISearchTextField.h"
#import "_UISupplementalLexicon.h"
#import "UITextRange.h"

@interface UISearchBar : UIView <_UISearchBarVisualProvidingDelegate, UIScribbleInteractionDelegate, UITextInputTraits_Private, _UIBarPositioningInternal, _UINavigationBarAugmentedTitleView, UIBarPositioning, UITextInputTraits>

 {
    UITapGestureRecognizer *_tapToActivateGestureRecognizer;
    UITextInputTraits *_textInputTraits;
    BOOL _didAddScribbleInteraction;
    BOOL _forceLegacyVisual;
    UIKeyCommand *_cancelKeyCommand;
}


@property (copy, nonatomic) NSIndexSet *PINEntrySeparatorIndexes;
@property (nonatomic, setter=_setAdditionalPaddingForCancelButtonAtLeadingEdge:) CGFloat _additionalPaddingForCancelButtonAtLeadingEdge;
@property (nonatomic, setter=_setAdditionalPaddingForSearchFieldAtLeadingEdge:) CGFloat _additionalPaddingForSearchFieldAtLeadingEdge;
@property (nonatomic, setter=_setAllowsInlineScopeBar:) BOOL _allowsInlineScopeBar;
@property (retain, nonatomic, setter=_setClassForSearchTextField:) Class _classForSearchTextField; // ivar: _classForSearchTextField
@property (readonly, nonatomic) _UINavigationControllerPalette *_containingNavigationPalette;
@property (readonly, nonatomic) UIEdgeInsets _effectiveContentInset;
@property (readonly, nonatomic) BOOL _effectivelySupportsDynamicType;
@property (readonly, nonatomic) NSInteger _expectedInterfaceOrientation;
@property (nonatomic) BOOL _forceCenteredPlaceholderLayout; // ivar: __forceCenteredPlaceholderLayout
@property (nonatomic, setter=_setForceLegacyVisual:) BOOL _forceLegacyVisual;
@property (readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property (readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property (readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property (readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property (nonatomic, getter=_isHostedByNavigationBar, setter=_setHostedByNavigationBar:) BOOL _hostedByNavigationBar;
@property (readonly, retain, nonatomic) UIButton *_leftButton;
@property (readonly, nonatomic) CGFloat _navigationBarBackButtonAlpha;
@property (readonly, nonatomic) CGFloat _navigationBarBackButtonMaximumWidth;
@property (readonly, nonatomic) CGFloat _navigationBarContentHeight;
@property (readonly, nonatomic) CGFloat _navigationBarLeadingBarButtonsAlpha;
@property (readonly, nonatomic) CGFloat _navigationBarTrailingBarButtonsAlpha;
@property (readonly, nonatomic) NSInteger _preferredAlignment;
@property (nonatomic, setter=_setReliesOnNavigationBarBackdrop:) BOOL _reliesOnNavigationBarBackdrop;
@property (nonatomic, setter=_setScopeBarPosition:) NSUInteger _scopeBarPosition;
@property (nonatomic, setter=_setSearchController:) UISearchController *_searchController; // ivar: __searchController
@property (weak, nonatomic, setter=_setSearchFieldContainerLayoutCustomizationDelegate:) NSObject<_UISearchBarSearchContainerLayoutCustomizationDelegate> *_searchFieldContainerLayoutCustomizationDelegate; // ivar: _searchFieldContainerLayoutCustomizationDelegate
@property (nonatomic, setter=_setSupportsDynamicType:) BOOL _supportsDynamicType; // ivar: __supportsDynamicType
@property (nonatomic, setter=_setTransplanting:) BOOL _transplanting; // ivar: __transplanting
@property (readonly, nonatomic) BOOL _underlayNavigationBarContent;
@property (readonly, nonatomic) UIView *_viewForChildViews;
@property (readonly, nonatomic) NSObject<_UISearchBarVisualProviding> *_visualProvider; // ivar: _visualProvider
@property (nonatomic) BOOL acceptsDictationSearchResults;
@property (nonatomic) BOOL acceptsEmoji;
@property (nonatomic) BOOL acceptsFloatingKeyboard;
@property (nonatomic) BOOL acceptsInitialEmojiKeyboard;
@property (nonatomic) BOOL acceptsPayloads;
@property (nonatomic) BOOL acceptsSplitKeyboard;
@property (nonatomic) NSInteger autocapitalizationType;
@property (copy, nonatomic) NSString *autocorrectionContext;
@property (nonatomic) NSInteger autocorrectionType;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) NSInteger barPosition;
@property (nonatomic) NSInteger barStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic) BOOL contentsIsSingleValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferBecomingResponder;
@property (weak, nonatomic) NSObject<UISearchBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDevicePasscodeEntry) BOOL devicePasscodeEntry;
@property (nonatomic) BOOL disableHandwritingKeyboard;
@property (nonatomic) BOOL disableInputBars;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL displaySecureEditsUsingPlainText;
@property (nonatomic) BOOL displaySecureTextUsingPlainText;
@property (nonatomic) int emptyContentReturnKeyType;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent;
@property (nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets;
@property (nonatomic) BOOL forceDefaultDictationInfo;
@property (nonatomic) NSInteger forceDictationKeyboardType;
@property (nonatomic) BOOL forceDisableDictation;
@property (nonatomic) BOOL forceEnableDictation;
@property (nonatomic) BOOL forceFloatingKeyboard;
@property (nonatomic) BOOL hasDefaultContents;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidePrediction;
@property (retain, nonatomic) UIView *inputAccessoryView; // ivar: _inputAccessoryView
@property (readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (retain, nonatomic) UIInputContextHistory *inputContextHistory;
@property (retain, nonatomic) UIColor *insertionPointColor;
@property (nonatomic) NSUInteger insertionPointWidth;
@property (nonatomic) BOOL isCarPlayIdiom;
@property (nonatomic) BOOL isSingleLineDocument;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (nonatomic) BOOL learnsCorrections;
@property (nonatomic) BOOL loadKeyboardsForSiriLanguage;
@property (copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property (copy, nonatomic) NSString *placeholder;
@property (nonatomic) BOOL preferOnlineDictation;
@property (nonatomic) NSInteger preferredKeyboardStyle;
@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *recentInputIdentifier;
@property (copy, nonatomic) NSString *responseContext;
@property (nonatomic) BOOL returnKeyGoesToNextResponder;
@property (nonatomic) NSInteger returnKeyType;
@property (retain, nonatomic) UIImage *scopeBarBackgroundImage;
@property (copy, nonatomic) NSArray *scopeButtonTitles;
@property (nonatomic) NSUInteger searchBarStyle;
@property (readonly, nonatomic, getter=_searchBarTextField) UISearchBarTextField *searchBarTextField;
@property (nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;
@property (nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;
@property (readonly, nonatomic) UISearchTextField *searchTextField;
@property (nonatomic) UIOffset searchTextPositionAdjustment;
@property (nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;
@property (nonatomic) NSInteger selectedScopeButtonIndex;
@property (retain, nonatomic) UIColor *selectionBarColor;
@property (retain, nonatomic) UIColor *selectionBorderColor;
@property (nonatomic) CGFloat selectionBorderWidth;
@property (nonatomic) CGFloat selectionCornerRadius;
@property (retain, nonatomic) UIImage *selectionDragDotImage;
@property (nonatomic) UIEdgeInsets selectionEdgeInsets;
@property (retain, nonatomic) UIColor *selectionHighlightColor;
@property (nonatomic) int shortcutConversionType;
@property (nonatomic) BOOL showDictationButton;
@property (nonatomic) BOOL showsBookmarkButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL showsScopeBar;
@property (nonatomic) BOOL showsSearchResultsButton;
@property (nonatomic) NSInteger smartDashesType;
@property (nonatomic) NSInteger smartInsertDeleteType;
@property (nonatomic) NSInteger smartQuotesType;
@property (nonatomic) NSInteger spellCheckingType;
@property (readonly) Class superclass;
@property (retain, nonatomic) _UISupplementalLexicon *supplementalLexicon;
@property (retain, nonatomic) UIImage *supplementalLexiconAmbiguousItemIcon;
@property (nonatomic) BOOL suppressReturnKeyStyling;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textContentType;
@property (nonatomic) int textLoupeVisibility;
@property (readonly, nonatomic) UITextRange *textRangeForServicesInteraction;
@property (nonatomic) NSInteger textScriptType;
@property (nonatomic) int textSelectionBehavior;
@property (nonatomic) id *textSuggestionDelegate;
@property (nonatomic) *__CFCharacterSet textTrimmingSet;
@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (retain, nonatomic) UIColor *underlineColorForSpelling;
@property (retain, nonatomic) UIColor *underlineColorForTextAlternatives;
@property (nonatomic) BOOL useAutomaticEndpointing;
@property (nonatomic) BOOL useInterfaceLanguageForLocalization;
@property (nonatomic) _NSRange validTextRange;


+(void)_initializeForIdiom:(NSInteger)arg0 ;
-(BOOL)_containedInNavigationPalette;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(*NSInteger)arg0 ;
-(BOOL)_hasDarkUIAppearance;
-(BOOL)_isEnabled;
-(BOOL)_isInBarButNotHosted;
-(BOOL)_ownsInputAccessoryView;
-(BOOL)_scopeBarIsVisible;
-(BOOL)_searchBarTextFieldShouldChangeCharactersInRange:(struct _NSRange )arg0 replacementString:(id)arg1 ;
-(BOOL)_shouldCombineLandscapeBars;
-(BOOL)_shouldCombineLandscapeBarsForOrientation:(NSInteger)arg0 ;
-(BOOL)_shouldUseNavigationBarHeight;
-(BOOL)_showingDictationButton;
-(BOOL)_showsHelperPlaceholder;
-(BOOL)_supportsLayoutStates;
-(BOOL)_usesLegacyVisualProvider;
-(BOOL)_wantsTwoPartTransition;
-(BOOL)_wouldCombineLandscapeBarsForSize:(struct CGSize )arg0 ;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)canResignFirstResponder;
-(BOOL)centerPlaceholder;
-(BOOL)drawsBackground;
-(BOOL)drawsBackgroundInPalette;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)isFirstResponder;
-(BOOL)pretendsIsInBar;
-(BOOL)resignFirstResponder;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)scribbleInteractionShouldDelayFocus:(id)arg0 ;
-(BOOL)usesEmbeddedAppearance;
-(CGFloat)_autolayoutSpacingAtEdge:(int)arg0 forAttribute:(NSInteger)arg1 inContainer:(id)arg2 isGuide:(BOOL)arg3 ;
-(CGFloat)_barHeightForBarMetrics:(NSInteger)arg0 ;
-(CGFloat)_barHeightForBarMetrics:(NSInteger)arg0 barPosition:(NSInteger)arg1 ;
-(CGFloat)_defaultAutolayoutSpacing;
-(CGFloat)_defaultHeight;
-(CGFloat)_defaultHeightForOrientation:(NSInteger)arg0 ;
-(CGFloat)_scopeBarHeight;
-(NSInteger)_barMetricsForOrientation:(NSInteger)arg0 ;
-(NSInteger)_preferredContentSizeForSize:(NSInteger)arg0 ;
-(NSInteger)searchFieldLeftViewMode;
-(NSUInteger)_backdropStyle;
-(id)_animatedAppearanceBarButtonItem;
-(id)_backgroundView;
-(id)_cancelButton;
-(id)_cancelButtonText;
-(id)_colorForComponent:(NSUInteger)arg0 disabled:(BOOL)arg1 ;
-(id)_defaultPromptString;
-(id)_makeShadowView;
-(id)_presentationBackgroundBlurEffectForTraitCollection:(id)arg0 ;
-(id)_scopeBar;
-(id)_scopeBarContainerView;
-(id)_searchDisplayControllerNavigationItem;
-(id)_searchField;
-(id)_selectedTokens;
-(id)_separatorImage;
-(id)_tokens;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg0 ;
-(id)backgroundImageForBarPosition:(NSInteger)arg0 barMetrics:(NSInteger)arg1 ;
-(id)cancelButton;
-(id)controller;
-(id)focusGroupIdentifier;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)imageForSearchBarIcon:(NSInteger)arg0 state:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)keyCommands;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(id)scopeBarButtonBackgroundImageForState:(NSUInteger)arg0 ;
-(id)scopeBarButtonDividerImageForLeftSegmentState:(NSUInteger)arg0 rightSegmentState:(NSUInteger)arg1 ;
-(id)scopeBarButtonTitleTextAttributesForState:(NSUInteger)arg0 ;
-(id)searchField;
-(id)searchFieldBackgroundImageForState:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_scopeBarInsets;
-(struct UIEdgeInsets )contentInset;
-(struct UIOffset )positionAdjustmentForSearchBarIcon:(NSInteger)arg0 ;
-(void)_addSubview:(id)arg0 positioned:(NSInteger)arg1 relativeTo:(id)arg2 ;
-(void)_allowCursorToAppear:(BOOL)arg0 ;
-(void)_animateTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)_bookmarkButtonPressed;
-(void)_cancelButtonPressed;
-(void)_cancelOperation:(id)arg0 ;
-(void)_cancelTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)_commonInit;
-(void)_completeTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)_containerSafeAreaInsetsDidChange:(id)arg0 ;
-(void)_contentDidChange;
-(void)_deleteButtonPressed;
-(void)_destroyCancelButton;
-(void)_didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_didUpdateEffectivelySupportsDynamicType;
-(void)_dismissScopeBarIfNecessary;
-(void)_driveTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)_freezeForAnimatedTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)_getOverrideContentInsets:(struct UIEdgeInsets *)arg0 overriddenEdges:(*NSUInteger)arg1 ;
-(void)_identifyBarContainer;
-(void)_insertToken:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)_navigationBarSlideTransitionDidEnd;
-(void)_navigationBarSlideTransitionWillBegin;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg0 from:(id)arg1 ;
-(void)_navigationBarTransitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)_navigationBarTransitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)_performNavigationBarTransition:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)_populateArchivedSubviews:(id)arg0 ;
-(void)_prepareForTransitionToSearchLayoutState:(NSInteger)arg0 ;
-(void)_presentScopeBarIfNecessary;
-(void)_removeTokenAtIndex:(NSUInteger)arg0 ;
-(void)_replaceSearchTextWithToken:(id)arg0 ;
-(void)_resetIfNecessaryForNavigationBarHosting:(BOOL)arg0 ;
-(void)_resultsListButtonPressed;
-(void)_scopeChanged:(id)arg0 ;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEditingChanged;
-(void)_searchFieldEndEditing;
-(void)_searchFieldReturnPressed;
-(void)_searchFieldSelectionChanged;
-(void)_searchFieldTextChanged:(BOOL)arg0 ;
-(void)_searchFieldTokensChanged;
-(void)_setAutoDisableCancelButton:(BOOL)arg0 ;
-(void)_setBackdropStyle:(NSUInteger)arg0 ;
-(void)_setBackgroundLayoutNeedsUpdate;
-(void)_setCancelButtonText:(id)arg0 ;
-(void)_setCancelButtonWantsLetterpress;
-(void)_setDataSource:(id)arg0 navigationItem:(id)arg1 titleLocation:(NSInteger)arg2 ;
-(void)_setDisableDictationButton:(BOOL)arg0 ;
-(void)_setDisableFocus:(BOOL)arg0 ;
-(void)_setEnabled:(BOOL)arg0 ;
-(void)_setEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setHelperPlaceholder:(id)arg0 ;
-(void)_setHelperPlaceholderHidden:(BOOL)arg0 ;
-(void)_setHelperPlaceholderOverride:(id)arg0 ;
-(void)_setMaskActive:(BOOL)arg0 ;
-(void)_setMaskBounds:(struct CGRect )arg0 ;
-(void)_setOverrideContentInsets:(struct UIEdgeInsets )arg0 forRectEdges:(NSUInteger)arg1 ;
-(void)_setRequiresLegacyVisualProvider;
-(void)_setScopeBarHidden:(BOOL)arg0 ;
-(void)_setSeparatorImage:(id)arg0 ;
-(void)_setShadowVisibleIfNecessary:(BOOL)arg0 ;
-(void)_setShowsDeleteButton:(BOOL)arg0 ;
-(void)_setShowsSeparator:(BOOL)arg0 ;
-(void)_setTokenBackgroundColor:(id)arg0 ;
-(void)_setUpVisualProvider;
-(void)_setupCancelButton;
-(void)_setupCancelButtonWithAppearance:(id)arg0 ;
-(void)_updateBackgroundToBackdropStyle:(NSInteger)arg0 ;
-(void)_updateEffectiveContentInset;
-(void)_updateInsetsForCurrentContainerViewAndBarPosition;
-(void)_updateInsetsForTableView:(id)arg0 ;
-(void)_updateNavigationBarLayoutInsertDataForSearchBar:(id)arg0 collapsibleScopeBar:(id)arg1 forLayoutState:(NSInteger)arg2 ;
-(void)bringSubviewToFront:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)insertTextSuggestion:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)reloadInputViews;
-(void)safeAreaInsetsDidChange;
-(void)sendSubviewToBack:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCancelButton:(id)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setCenterPlaceholder:(BOOL)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setController:(id)arg0 ;
-(void)setDrawsBackground:(BOOL)arg0 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg0 ;
-(void)setFocusGroupIdentifier:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setImage:(id)arg0 forSearchBarIcon:(NSInteger)arg1 state:(NSUInteger)arg2 ;
-(void)setNeedsLayout;
-(void)setPositionAdjustment:(struct UIOffset )arg0 forSearchBarIcon:(NSInteger)arg1 ;
-(void)setPretendsIsInBar:(BOOL)arg0 ;
-(void)setScopeBarButtonBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setScopeBarButtonDividerImage:(id)arg0 forLeftSegmentState:(NSUInteger)arg1 rightSegmentState:(NSUInteger)arg2 ;
-(void)setScopeBarButtonTitleTextAttributes:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSearchFieldBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSearchFieldLeftViewMode:(NSInteger)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setUsesEmbeddedAppearance:(BOOL)arg0 ;
-(void)set_cancelButtonText:(id)arg0 ;
-(void)takeTraitsFrom:(id)arg0 ;
-(void)tappedSearchBar:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif