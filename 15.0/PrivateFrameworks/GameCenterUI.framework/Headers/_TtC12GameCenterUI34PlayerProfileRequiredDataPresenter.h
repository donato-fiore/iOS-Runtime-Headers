// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12GAMECENTERUI34PLAYERPROFILEREQUIREDDATAPRESENTER_H
#define _TTC12GAMECENTERUI34PLAYERPROFILEREQUIREDDATAPRESENTER_H

@class SwiftObject;



@interface _TtC12GameCenterUI34PlayerProfileRequiredDataPresenter : SwiftObject {
    ? sinks;
    ? localPlayer;
    ? playerId;
    ? playerInternal;
    ? isBidirectionalFriend;
    ? bidirectionalFriends;
    ? recentlyPlayedWithFriends;
    ? recommendedFriends;
    ? recommendedGroups;
    ? friendRequests;
    ? recentlyPlayedGames;
    ? gameCount;
    ? achievementCount;
    ? appStoreLockupBatchPresenter;
    ? gameCenterDataUpdatePresenter;
    ? onRequiredDataFetched;
    ? onRequiredDataError;
    ? onRequiredDataUpdated;
    ? logTimer;
}




-(void)updateSections:(id)arg0 ;


@end


#endif