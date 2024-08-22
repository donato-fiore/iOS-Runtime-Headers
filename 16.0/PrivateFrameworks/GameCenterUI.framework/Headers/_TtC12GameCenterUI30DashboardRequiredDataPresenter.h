// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI30DASHBOARDREQUIREDDATAPRESENTER_H
#define _TTC12GAMECENTERUI30DASHBOARDREQUIREDDATAPRESENTER_H

@class SwiftObject;



@interface _TtC12GameCenterUI30DashboardRequiredDataPresenter : SwiftObject {
    ? game;
    ? localPlayer;
    ? playerId;
    ? playerInternal;
    ? totalAchievementsCount;
    ? completedAchievementsCount;
    ? continuePlaying;
    ? achievementHighlights;
    ? leaderboardHighlights;
    ? arcadeHighlights;
    ? challengesHighlights;
    ? supportsChallenges;
    ? leaderboardCaption;
    ? leaderboardFriends;
    ? leaderboardFriendTotalCount;
    ? activityFeedData;
    ? activityFeedFirstLoad;
    ? activityFeedError;
    ? recommendedFriends;
    ? friendRequests;
    ? bidirectionalFriends;
    ? recommendedGroups;
    ? gameCenterDataUpdatePresenter;
    ? onRequiredDataFetched;
    ? onRequiredDataError;
    ? onRequiredDataUpdated;
    ? contentSources;
    ? metadataPresenter;
}




-(void)updateSections:(id)arg0 ;


@end


#endif