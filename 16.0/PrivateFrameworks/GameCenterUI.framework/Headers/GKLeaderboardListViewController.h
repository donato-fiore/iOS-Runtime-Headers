// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKLEADERBOARDLISTVIEWCONTROLLER_H
#define GKLEADERBOARDLISTVIEWCONTROLLER_H

@class UICollectionView, NSDictionary;


#import "GKLoadingViewController.h"
#import "GKGameLayerCollectionDataSource.h"
#import "GKNoContentView.h"

@interface GKLeaderboardListViewController : GKLoadingViewController

@property (nonatomic) BOOL canSegueToScores; // ivar: _canSegueToScores
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) GKGameLayerCollectionDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSDictionary *leaderboardAssetNames; // ivar: _leaderboardAssetNames
@property (retain, nonatomic) NSDictionary *leaderboardSetAssetNames; // ivar: _leaderboardSetAssetNames
@property (retain, nonatomic) GKNoContentView *noContentView; // ivar: _noContentView
@property (nonatomic) NSInteger preferredLargeTitleDisplayMode; // ivar: _preferredLargeTitleDisplayMode
@property (nonatomic) BOOL showingLeaderboardSets; // ivar: _showingLeaderboardSets


-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(BOOL)hasData;
-(BOOL)isLoading;
-(id)contentScrollView;
-(id)initWithGameRecord:(id)arg0 leaderboardSet:(id)arg1 ;
-(id)title;
-(void)_gkRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)clearSelection;
-(void)configureCloseButton;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)dealloc;
-(void)didEnterLoadingState;
-(void)didEnterRefreshingState;
-(void)didExitRefreshingState;
-(void)donePressed:(id)arg0 ;
-(void)hideNoContentPlaceholder;
-(void)loadData;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setHorizontalLayout:(BOOL)arg0 ;
-(void)setNeedsRefresh;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)setupVisualEffect;
-(void)showNoContentPlaceholderForError:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateLargeTitleInsets;
-(void)updateLayout;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif