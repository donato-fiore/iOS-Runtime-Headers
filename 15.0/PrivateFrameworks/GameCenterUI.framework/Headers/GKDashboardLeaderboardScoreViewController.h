// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDASHBOARDLEADERBOARDSCOREVIEWCONTROLLER_H
#define GKDASHBOARDLEADERBOARDSCOREVIEWCONTROLLER_H

@class GKLeaderboard;


#import "GKDashboardCollectionViewController.h"
#import "GKDashboardLeaderboardScoreDataSource.h"
#import "GKDashboardLeaderboardScoreHeaderView.h"

@interface GKDashboardLeaderboardScoreViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *friendDataSource; // ivar: _friendDataSource
@property (retain, nonatomic) GKDashboardLeaderboardScoreDataSource *globalDataSource; // ivar: _globalDataSource
@property (retain, nonatomic) GKDashboardLeaderboardScoreHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope


+(NSInteger)initialTimeScope;
+(void)setInitialTimeScope:(NSInteger)arg0 ;
-(BOOL)shouldUseTwoColumnLayoutForSize:(struct CGSize )arg0 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithGameRecord:(id)arg0 leaderboard:(id)arg1 ;
-(void)dataUpdated:(BOOL)arg0 withError:(id)arg1 ;
-(void)donePressed:(id)arg0 ;
-(void)setupNoContentView:(id)arg0 withError:(id)arg1 ;
-(void)timeScopePressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateColumnLayoutForSize:(struct CGSize )arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif