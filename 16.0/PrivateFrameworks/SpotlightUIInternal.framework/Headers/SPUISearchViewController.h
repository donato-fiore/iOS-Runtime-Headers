// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUISEARCHVIEWCONTROLLER_H
#define SPUISEARCHVIEWCONTROLLER_H

@class NSMutableSet, NSString, UISearchToken, _UILegibilitySettings, UIView, NSTimer;
@protocol SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, UIGestureRecognizerDelegate, SearchUICommandDelegate, SPUISearchViewControllerDelegate, SPUISearchViewControllerSizingDelegate;


#import "SPUIViewController.h"
#import "SPUISearchFirstTimeViewController.h"
#import "SPUISearchHeader.h"
#import "SPUILockScreenFooterView.h"
#import "SPUINavigationController.h"
#import "SPUIResultsViewController.h"
#import "SPUITestingHelper.h"

@interface SPUISearchViewController : SPUIViewController <SPUISearchHeaderDelegate, SearchUIFirstTimeExperienceDelegate, UIGestureRecognizerDelegate, SearchUICommandDelegate>



@property (retain) NSMutableSet *allHeaderViews; // ivar: _allHeaderViews
@property BOOL clearQueryOnDismissal; // ivar: _clearQueryOnDismissal
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SPUISearchViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distanceToTopOfAppIcons;
@property BOOL expandPlatterOnAppear; // ivar: _expandPlatterOnAppear
@property NSUInteger feedbackBackgroundTaskIdentifier; // ivar: _feedbackBackgroundTaskIdentifier
@property (retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController; // ivar: _firstTimeExperienceViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SPUISearchHeader *headerView;
@property BOOL internetOverrideForPPT; // ivar: _internetOverrideForPPT
@property BOOL lastQueryWasAuthenticated; // ivar: _lastQueryWasAuthenticated
@property (readonly) NSString *lastSearchString;
@property (readonly) UISearchToken *lastSearchToken;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (retain) SPUILockScreenFooterView *lockScreenFooterView; // ivar: _lockScreenFooterView
@property (retain) SPUINavigationController *navigationController;
@property NSUInteger presentationMode; // ivar: _presentationMode
@property (readonly) NSUInteger presentationSource; // ivar: _presentationSource
@property (retain) SPUIResultsViewController *proactiveResultViewController; // ivar: _proactiveResultViewController
@property NSUInteger queryIdAtInvoke; // ivar: _queryIdAtInvoke
@property (retain) SPUISearchHeader *searchHeader; // ivar: _searchHeader
@property (weak) NSObject<SPUISearchViewControllerSizingDelegate> *sizingDelegate; // ivar: _sizingDelegate
@property (readonly) Class superclass;
@property (retain) SPUITestingHelper *testingHelper; // ivar: _testingHelper
@property CGFloat timeAtDismissal; // ivar: _timeAtDismissal
@property (weak) UIView *topBlurView; // ivar: _topBlurView
@property (retain) NSTimer *windowExpansionTimer; // ivar: _windowExpansionTimer


+(BOOL)displayTapToRadar;
+(BOOL)shouldShowAsTypedSuggestion;
+(void)_updateHeaderView:(id)arg0 fromText:(id)arg1 fromToken:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)allowInternet;
-(BOOL)canPerformCommand:(id)arg0 ;
-(BOOL)currentQueryIdMatchesResultInGeneralModel;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)hasContentInSearchField;
-(BOOL)isQueryCommand:(id)arg0 ;
-(BOOL)optOutOfGoButton;
-(BOOL)presentationSupportsChunky;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(BOOL)sectionShouldBeExpanded:(id)arg0 ;
-(CGFloat)contentHeight;
-(id)createAdditionalHeaderView;
-(id)currentQuery;
-(id)firstResultIgnoringSuggestionsIfNeeded;
-(id)init;
-(id)proactiveResultsTestingObject;
-(id)searchResultsTestingObject;
-(void)activateFirstTimeExperienceViewAnimate:(BOOL)arg0 ;
-(void)activateFirstTimeExperienceViewIfNecessary;
-(void)animateChunkyEnabled:(BOOL)arg0 ;
-(void)appIconDragged;
-(void)cancelButtonPressed;
-(void)checkClearTimer;
-(void)clearSearchResultsAndFetchZKW:(BOOL)arg0 ;
-(void)clearTimerExpired;
-(void)dealloc;
-(void)dictationButtonPressed;
-(void)didBeginEditing;
-(void)didBeginScrollingResults;
-(void)didChangeExpansionStateForSection:(id)arg0 expanded:(BOOL)arg1 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didScrollPastBottomOfContent;
-(void)didUpdateActiveViewController;
-(void)didUpdateContentScrolledOffScreenStatus:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)didUpdateKeyboardFocusToResult:(id)arg0 cardSection:(id)arg1 ;
-(void)dragInitiated;
-(void)enableChunky:(BOOL)arg0 ;
-(void)endBackgroundTaskIfNeeded;
-(void)expandWindowIfNeeded;
-(void)firstTimeExperienceContinueButtonPressed;
-(void)highlightResultAfterUnmarkingText;
-(void)invalidateWindowExpansionTimer;
-(void)performCommand:(id)arg0 ;
-(void)performReturnKeyPressAndExpandWidowIfNeeded;
-(void)performTestSearchWithQuery:(id)arg0 event:(NSUInteger)arg1 queryKind:(NSUInteger)arg2 ;
-(void)performWebSearch;
-(void)purgeMemory;
-(void)queryContextDidChange:(id)arg0 fromSearchHeader:(id)arg1 allowZKW:(BOOL)arg2 ;
-(void)removeCompletionAndHighlightAsTyped:(BOOL)arg0 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;
-(void)resultsViewController:(id)arg0 didChangeContentSize:(struct CGSize )arg1 animated:(BOOL)arg2 ;
-(void)returnKeyPressed;
-(void)scheduleWindowExpansionWithInterval:(CGFloat)arg0 ;
-(void)searchViewDidDismissWithReason:(NSUInteger)arg0 ;
-(void)searchViewDidPresentFromSource:(NSUInteger)arg0 ;
-(void)searchViewDidUpdatePresentationProgress:(CGFloat)arg0 ;
-(void)searchViewWillDismissWithReason:(NSUInteger)arg0 ;
-(void)searchViewWillPresentFromSource:(NSUInteger)arg0 ;
-(void)setAdditionalKeyboardHeight:(CGFloat)arg0 ;
-(void)setInternetOverrideToDisable:(BOOL)arg0 ;
-(void)showVerticalScrollIndicators:(BOOL)arg0 ;
-(void)spotlightDidBackground;
-(void)tapToRadarPressed;
-(void)updateFooterViewForViewController:(id)arg0 ;
-(void)updateHeaderViewsWithBlock:(id)arg0 ;
-(void)updatePlatterMode;
-(void)updateResponderChainIfNeeded;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willUpdateActiveViewController;
-(void)willUpdateFromResultsWithHighlightedResult:(id)arg0 ;


@end


#endif