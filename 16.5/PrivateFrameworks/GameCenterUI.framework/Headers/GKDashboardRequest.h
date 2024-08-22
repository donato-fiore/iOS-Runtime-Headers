// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKDASHBOARDREQUEST_H
#define GKDASHBOARDREQUEST_H

@class GKAchievement, NSString, GKGameRecord, GKLeaderboard, UIVisualEffectView;

#import <Foundation/Foundation.h>


@interface GKDashboardRequest : NSObject

@property (retain, nonatomic) GKAchievement *achievement; // ivar: _achievement
@property (retain, nonatomic) NSString *achievementID; // ivar: _achievementID
@property (retain, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (retain, nonatomic) NSString *gameBundleID; // ivar: _gameBundleID
@property (retain, nonatomic) GKGameRecord *gameRecord; // ivar: _gameRecord
@property (nonatomic) BOOL isArcade; // ivar: _isArcade
@property (nonatomic) BOOL launchedFromAccessPoint; // ivar: _launchedFromAccessPoint
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) NSString *leaderboardID; // ivar: _leaderboardID
@property (nonatomic) NSInteger leaderboardPlayerScope; // ivar: _leaderboardPlayerScope
@property (nonatomic) NSInteger leaderboardTimeScope; // ivar: _leaderboardTimeScope
@property (retain, nonatomic) NSString *leaderboardTitle; // ivar: _leaderboardTitle
@property (retain, nonatomic) NSString *playerAlias; // ivar: _playerAlias
@property (retain, nonatomic) NSString *playerID; // ivar: _playerID
@property (nonatomic) BOOL shouldShowPlayForChallenge; // ivar: _shouldShowPlayForChallenge
@property (nonatomic) BOOL shouldShowPlayForTurnBasedMatch; // ivar: _shouldShowPlayForTurnBasedMatch
@property (nonatomic) BOOL shouldShowQuitForTurnBasedMatch; // ivar: _shouldShowQuitForTurnBasedMatch
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView




@end


#endif