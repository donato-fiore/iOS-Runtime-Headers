// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDLEADERBOARDLISTVIEWCONTROLLER_H
#define GKDASHBOARDLEADERBOARDLISTVIEWCONTROLLER_H

@class GKLeaderboardSet;


#import "GKDashboardCollectionViewController.h"

@interface GKDashboardLeaderboardListViewController : GKDashboardCollectionViewController

@property (retain, nonatomic) GKLeaderboardSet *leaderboardSet; // ivar: _leaderboardSet


-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithGameRecord:(id)arg0 leaderboardSet:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif