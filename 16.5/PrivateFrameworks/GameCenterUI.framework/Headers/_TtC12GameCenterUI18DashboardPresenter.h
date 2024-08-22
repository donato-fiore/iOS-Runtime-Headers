// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI18DASHBOARDPRESENTER_H
#define _TTC12GAMECENTERUI18DASHBOARDPRESENTER_H

@class TtC12GameCenterUI18BaseSplitPresenter, NSIndexPath, NSString;



@interface _TtC12GameCenterUI18DashboardPresenter : TtC12GameCenterUI18BaseSplitPresenter {
    ? pageMetricsPresenter;
    ? launchContext;
    ? request;
    ? primarySections;
    ? secondarySections;
    ? game;
    ? scrollToIndexPath;
    ? scrollToActivityInfo;
    ? onFriendRequestsCountChanged;
    ? sections;
    ? requiredData;
    ? requiredDataPresenter;
}


@property (nonatomic) BOOL didScrollToIndexPath; // ivar: didScrollToIndexPath
@property (nonatomic) BOOL displayInSplitView;
@property (nonatomic, copy) NSIndexPath *scrollToIndexPath;
@property (nonatomic) BOOL shouldUseLargeTitle; // ivar: shouldUseLargeTitle
@property (nonatomic, readonly) NSString *title;


+(void)presentLeaderboardsFrom:(id)arg0 request:(id)arg1 gameRecord:(id)arg2 leaderboard:(id)arg3 animated:(BOOL)arg4 ;
+(void)processLeaderboardRequestFrom:(id)arg0 request:(id)arg1 gameRecord:(id)arg2 ;
-(id)initWithPlayerId:(id)arg0 ;
-(void)handleViewDidLoad;
-(void)loadMoreActivityFeedWithContinuationToken:(id)arg0 ;
-(void)presentAchievementsFrom:(id)arg0 request:(id)arg1 gameRecord:(id)arg2 ;
-(void)presentChallengesFrom:(id)arg0 gameRecord:(id)arg1 shouldShowPlayForChallenge:(BOOL)arg2 ;
-(void)presentLeaderboardsFrom:(id)arg0 request:(id)arg1 gameBundleID:(id)arg2 ;
-(void)presentPlayerProfileFrom:(id)arg0 request:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateSnapshot;


@end


#endif