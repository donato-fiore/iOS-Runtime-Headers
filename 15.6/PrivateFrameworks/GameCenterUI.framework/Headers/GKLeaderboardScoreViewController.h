// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLEADERBOARDSCOREVIEWCONTROLLER_H
#define GKLEADERBOARDSCOREVIEWCONTROLLER_H

@class UIView, NSLayoutConstraint, UICollectionView, CAGradientLayer, GKLeaderboard, NSString, UIStackView, GKLeaderboardEntry, UIScrollView, UISegmentedControl, UICollectionViewCell, UILabel;
@protocol GKLeaderboardScoreDelegate, UIScrollViewDelegate;


#import "GKLoadingViewController.h"
#import "GKLeaderboardScoreDataSource.h"
#import "GKNoContentView.h"
#import "GKLeaderboardMetadataView.h"
#import "GKUnfocusableButton.h"
#import "GKTimeScopeButton.h"

@interface GKLeaderboardScoreViewController : GKLoadingViewController <GKLeaderboardScoreDelegate, UIScrollViewDelegate>



@property (retain, nonatomic) UIView *collectionContainer; // ivar: _collectionContainer
@property (retain, nonatomic) NSLayoutConstraint *collectionContainerHeight; // ivar: _collectionContainerHeight
@property (retain, nonatomic) UIView *collectionGradientView; // ivar: _collectionGradientView
@property (retain, nonatomic) NSLayoutConstraint *collectionGradientViewHeightConstraint; // ivar: _collectionGradientViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *collectionGradientViewLandscapeTopConstraint; // ivar: _collectionGradientViewLandscapeTopConstraint
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) CAGradientLayer *collectionViewFadeGradient; // ivar: _collectionViewFadeGradient
@property (retain, nonatomic) GKLeaderboard *currentOccurrence; // ivar: _currentOccurrence
@property (retain, nonatomic) GKLeaderboardScoreDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIStackView *highlightView; // ivar: _highlightView
@property (retain, nonatomic) NSLayoutConstraint *highlightViewHeightConstraint; // ivar: _highlightViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *highlightViewLandscapeTopConstraint; // ivar: _highlightViewLandscapeTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *highlightViewWidthConstraint; // ivar: _highlightViewWidthConstraint
@property (nonatomic) NSInteger initialPlayerScope;
@property (nonatomic) NSInteger initialTimeScope;
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (nonatomic) NSInteger leaderboardOccurrence; // ivar: _leaderboardOccurrence
@property (retain, nonatomic) GKLeaderboardEntry *localPlayerEntry; // ivar: _localPlayerEntry
@property (retain, nonatomic) UIScrollView *mainScrollView; // ivar: _mainScrollView
@property (retain, nonatomic) GKNoContentView *noContentView; // ivar: _noContentView
@property (retain, nonatomic) GKLeaderboardMetadataView *personalView; // ivar: _personalView
@property (retain, nonatomic) GKLeaderboardEntry *playerAboveEntry; // ivar: _playerAboveEntry
@property (retain, nonatomic) GKLeaderboardEntry *playerBelowEntry; // ivar: _playerBelowEntry
@property (nonatomic) NSInteger playerScope; // ivar: _playerScope
@property (retain, nonatomic) UISegmentedControl *playerScopeControl; // ivar: _playerScopeControl
@property (weak, nonatomic) UICollectionViewCell *preferredFocusCell; // ivar: _preferredFocusCell
@property (retain, nonatomic) GKLeaderboard *previousOccurrence; // ivar: _previousOccurrence
@property (nonatomic) BOOL restrictToFriendsOnly;
@property (retain, nonatomic) GKUnfocusableButton *scrollToTopButton; // ivar: _scrollToTopButton
@property (nonatomic) BOOL shouldAutoRefreshHighlights; // ivar: _shouldAutoRefreshHighlights
@property (nonatomic) BOOL shouldPreferFocusToPlayerScopeControl; // ivar: _shouldPreferFocusToPlayerScopeControl
@property (retain, nonatomic) GKLeaderboardMetadataView *socialView; // ivar: _socialView
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope
@property (retain, nonatomic) GKTimeScopeButton *timeScopeButton; // ivar: _timeScopeButton
@property (retain, nonatomic) UIView *timeScopeContainer; // ivar: _timeScopeContainer
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) GKLeaderboardEntry *topPlayerEntry; // ivar: _topPlayerEntry
@property (nonatomic) NSInteger totalEntries; // ivar: _totalEntries


-(BOOL)hasData;
-(BOOL)isLoading;
-(BOOL)updateHighlightsPersonalView;
-(id)attributedStringWithSymbol:(id)arg0 ;
-(id)contentScrollView;
-(id)formattedNumber:(id)arg0 ;
-(id)initWithGameRecord:(id)arg0 leaderboard:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)timeRemainingFromDate:(id)arg0 toDate:(id)arg1 ;
-(void)addLeaderboardHighlights;
-(void)addPlayerScopeControl;
-(void)autoRefreshHighlightsPersonalView;
-(void)backButtonPressed:(id)arg0 ;
-(void)challengeWithScore:(id)arg0 ;
-(void)clearSelection;
-(void)configureCloseButton;
-(void)configureFocusGuidesForPortraitNavigationBar;
-(void)configurePlayerScopeFocusGuide;
-(void)configureTimeScopeMenu;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)didEnterLoadingState;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(void)didLoadAdditionalScores;
-(void)didLoadScoresWithLocalPlayerEntry:(id)arg0 topPlayer:(id)arg1 playerAbove:(id)arg2 playerBelow:(id)arg3 totalEntries:(NSInteger)arg4 ;
-(void)donePressed:(id)arg0 ;
-(void)enableDisableCollectionViewScrolling;
-(void)hideNoContentPlaceholder;
-(void)loadData;
-(void)loadLeaderboardForOccurrence:(NSInteger)arg0 handler:(id)arg1 ;
-(void)playerScopeChanged:(id)arg0 ;
-(void)scrollToTopPressed:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setNeedsRefresh;
-(void)setupFadeGradient;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)setupVisualEffect;
-(void)shareScore:(id)arg0 fromLeaderboard:(id)arg1 sendingView:(id)arg2 relativeRect:(struct CGRect )arg3 ;
-(void)shareWithScore:(id)arg0 fromView:(id)arg1 ;
-(void)showNoContentPlaceholderForError:(id)arg0 ;
-(void)timeScopePressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateContentSize;
-(void)updateHighlights;
-(void)updatePlayerScopeLayoutForSize:(struct CGSize )arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif