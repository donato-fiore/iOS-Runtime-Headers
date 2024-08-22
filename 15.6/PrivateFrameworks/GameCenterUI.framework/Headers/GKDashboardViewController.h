// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDVIEWCONTROLLER_H
#define GKDASHBOARDVIEWCONTROLLER_H

@class GKGameRecord, NSString, NSArray, NSMutableDictionary;


#import "GKDashboardCollectionViewController.h"
#import "GKDashboardChallengeDataSource.h"
#import "GKDashboardHeaderView.h"
#import "GKCollectionMultiDataSource.h"

@interface GKDashboardViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKDashboardChallengeDataSource *challengeDataSource; // ivar: _challengeDataSource
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (retain, nonatomic) GKDashboardHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSString *leaderboardIdentifier; // ivar: _leaderboardIdentifier
@property (nonatomic) NSInteger leaderboardTimeScope;
@property (retain, nonatomic) GKCollectionMultiDataSource *multiDataSource; // ivar: _multiDataSource
@property (nonatomic) BOOL shouldShowPlayForChallenge; // ivar: _shouldShowPlayForChallenge
@property (nonatomic) BOOL shouldShowPlayForTurnBasedMatch; // ivar: _shouldShowPlayForTurnBasedMatch
@property (nonatomic) BOOL shouldShowQuitForTurnBasedMatch; // ivar: _shouldShowQuitForTurnBasedMatch
@property (retain, nonatomic) NSArray *titles; // ivar: _titles
@property (nonatomic) NSInteger viewState; // ivar: _viewState
@property (retain, nonatomic) NSMutableDictionary *viewStateIndexes; // ivar: _viewStateIndexes


-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithGameRecord:(id)arg0 ;
-(void)_gkRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)addDataSource:(id)arg0 withTitle:(id)arg1 forViewState:(NSInteger)arg2 ;
-(void)loadData;
-(void)selectDataSourceAtIndex:(NSInteger)arg0 updateCollectionView:(BOOL)arg1 ;
-(void)selectedSegmentChanged:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)setupSegmentedControl;
-(void)showLeaderboardVC;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif