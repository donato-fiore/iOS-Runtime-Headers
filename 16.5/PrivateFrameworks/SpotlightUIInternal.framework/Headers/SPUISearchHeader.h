// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUISEARCHHEADER_H
#define SPUISEARCHHEADER_H

@class UINavigationBarTitleView, NSLayoutConstraint, UIButton, NSString, SPSearchSuggestionResult, SPSearchEntity, UISearchToken, _UILegibilitySettings, UIResponder;
@protocol SPUITextFieldDelegate, UITextPasteDelegate, SPUISearchHeaderDelegate, SBIconListLayout, SPUIHeaderInteractionDelegate;


#import "SPUITextField.h"

@interface SPUISearchHeader : UINavigationBarTitleView <SPUITextFieldDelegate, UITextPasteDelegate>



@property (nonatomic) NSInteger activeInterfaceOrientation; // ivar: _activeInterfaceOrientation
@property (nonatomic) CGFloat blurProgress; // ivar: _blurProgress
@property (retain) NSLayoutConstraint *bottomConstraint; // ivar: _bottomConstraint
@property (readonly, nonatomic) CGFloat bottomPadding;
@property (retain) UIButton *cancelButton; // ivar: _cancelButton
@property (retain) NSLayoutConstraint *cancelButtonTrailingConstraint; // ivar: _cancelButtonTrailingConstraint
@property (readonly) BOOL completionResultIsPotentiallyPunchout;
@property (readonly, nonatomic) NSString *currentQuery;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SPUISearchHeaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) SPSearchSuggestionResult *engagedSuggestion; // ivar: _engagedSuggestion
@property (readonly) NSUInteger hash;
@property (retain) NSObject<SBIconListLayout> *iconListLayout; // ivar: _iconListLayout
@property (weak, nonatomic) NSObject<SPUIHeaderInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) NSUInteger invokeReason; // ivar: _invokeReason
@property BOOL isInDictationModeFromSearchBar; // ivar: _isInDictationModeFromSearchBar
@property BOOL isReturnKeyPressedInGoMode; // ivar: _isReturnKeyPressedInGoMode
@property (retain) SPSearchEntity *lastSearchEntity; // ivar: _lastSearchEntity
@property NSUInteger lastSearchHeaderQueryKind; // ivar: _lastSearchHeaderQueryKind
@property (retain) NSString *lastSearchText; // ivar: _lastSearchText
@property (readonly) UISearchToken *lastSearchToken;
@property (retain) NSLayoutConstraint *leadingConstraint; // ivar: _leadingConstraint
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property BOOL offersCompletions; // ivar: _offersCompletions
@property (readonly) BOOL optOutOfGoButton;
@property NSUInteger queryId; // ivar: _queryId
@property (weak, nonatomic) UIResponder *responderForKeyboardInput;
@property (retain, nonatomic) SPSearchEntity *searchEntity; // ivar: _searchEntity
@property (retain) SPUITextField *searchField; // ivar: _searchField
@property (retain) NSLayoutConstraint *searchFieldTrailingConstraint; // ivar: _searchFieldTrailingConstraint
@property BOOL searchTextScheduledForProcessing; // ivar: _searchTextScheduledForProcessing
@property NSUInteger suggestionID; // ivar: _suggestionID
@property (readonly) Class superclass;
@property (retain) NSLayoutConstraint *topConstraint; // ivar: _topConstraint
@property (readonly, nonatomic) CGFloat topPadding;
@property (nonatomic) BOOL useChunkyMetrics;
@property (nonatomic) BOOL useClearTokens; // ivar: _useClearTokens
@property (retain) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint
@property BOOL willClear; // ivar: _willClear


+(NSUInteger)asYouTypeSearchQueryKind;
+(NSUInteger)committedSearchQueryKind;
+(id)tokenFromSearchEntity:(id)arg0 ;
+(void)logDismissalWithReason:(NSUInteger)arg0 ;
+(void)logInvokeWithReason:(NSUInteger)arg0 ;
-(BOOL)currentlyPresentingWebEntity;
-(BOOL)isFirstResponder;
-(BOOL)isOnDarkBackground;
-(BOOL)lastQueryKindSupportsOptionKey;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn;
-(CGFloat)horizontalSpacingForChunkyHeight;
-(id)_searchTextField:(id)arg0 itemProviderForCopyingToken:(id)arg1 ;
-(id)backdropVisualEffectView;
-(id)currentQueryContextWithString:(id)arg0 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_searchWithSearchEntity:(id)arg0 fromSuggestion:(BOOL)arg1 ;
-(void)addInputMethodInformationToQueryContext:(id)arg0 ;
-(void)beginDictation;
-(void)cancelButtonClicked:(id)arg0 ;
-(void)clearLastSearchedText;
-(void)clearSearchFieldWhyQuery:(NSUInteger)arg0 allowZKW:(BOOL)arg1 ;
-(void)commitSearch;
-(void)dictationButtonPressed;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)enableDictationIfRequired;
-(void)escapeKeyPressed;
-(void)focusSearchFieldAndBeginDictation:(BOOL)arg0 selectAll:(BOOL)arg1 withReason:(NSUInteger)arg2 ;
-(void)focusSearchFieldAndSelectAll:(BOOL)arg0 withReason:(NSUInteger)arg1 ;
-(void)highlightResultAfterUnmarkingText;
// -(void)performAction:(id)arg0 afterCommit:(unk)arg1  ;
-(void)performTestSearchWithQuery:(id)arg0 event:(NSUInteger)arg1 queryKind:(NSUInteger)arg2 ;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg0 ;
-(void)resignKeyboardForProcessState;
-(void)returnKeyPressed;
-(void)searchForSuggestion:(id)arg0 isBuildingQuery:(BOOL)arg1 ;
-(void)setSuggestionResult:(id)arg0 ;
-(void)showCancelButton:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)switchToSuggestions;
-(void)textDidChange:(id)arg0 ;
-(void)textDidChange:(id)arg0 whyQuery:(NSUInteger)arg1 allowZKW:(BOOL)arg2 queryKind:(NSUInteger)arg3 ;
-(void)textDidChange:(id)arg0 whyQuery:(NSUInteger)arg1 allowZKW:(BOOL)arg2 sourcePreference:(NSUInteger)arg3 engagedSuggestion:(id)arg4 searchEntities:(id)arg5 queryKind:(NSUInteger)arg6 ;
-(void)textFieldDidBeginEditing;
-(void)textFieldDidReplaceTokensWithStringEquivalent:(id)arg0 ;
-(void)textPasteConfigurationSupporting:(id)arg0 transformPasteItem:(id)arg1 ;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)triggerSearchForUnlock;
-(void)unfocusSearchFieldWithReason:(NSUInteger)arg0 ;
-(void)unfocusSearchFieldWithReason:(NSUInteger)arg0 afterCommit:(BOOL)arg1 ;
-(void)updateBlurProgress;
-(void)updateDictationButtonEnabledStatus;
-(void)updateFocusResult:(id)arg0 cardSection:(id)arg1 focusIsOnFirstResult:(BOOL)arg2 ;
-(void)updateSearchFieldModel;
-(void)updateWithCommand:(id)arg0 ;


@end


#endif