// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKGAMEINTERNAL_H
#define GKGAMEINTERNAL_H

@class NSSet, NSString, NSDictionary;


#import "GKGameDescriptor.h"
#import "GKStoreItemInternal.h"

@interface GKGameInternal : GKGameDescriptor {
    ? _flags;
}


@property (readonly, nonatomic) BOOL canBeIndexed;
@property (retain, nonatomic) NSSet *compatiblePlatforms; // ivar: _compatiblePlatforms
@property (retain, nonatomic) NSString *defaultLeaderboardIdentifier; // ivar: _defaultLeaderboardIdentifier
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) GKGameDescriptor *gameDescriptor;
@property (nonatomic) BOOL hasAggregateLeaderboard;
@property (retain, nonatomic) NSDictionary *icons; // ivar: _icons
@property (nonatomic) BOOL isArcadeGame;
@property (nonatomic) unsigned short maxAchievementPoints; // ivar: _maxAchievementPoints
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned short numberOfAchievements; // ivar: _numberOfAchievements
@property (nonatomic) unsigned short numberOfLeaderboardSets; // ivar: _numberOfLeaderboardSets
@property (nonatomic) unsigned short numberOfLeaderboards; // ivar: _numberOfLeaderboards
@property (nonatomic, getter=isPrerendered) BOOL prerendered;
@property (retain, nonatomic) GKStoreItemInternal *storeItem; // ivar: _storeItem
@property (nonatomic) BOOL supportsAchievements;
@property (nonatomic) BOOL supportsChallenges;
@property (nonatomic) BOOL supportsLeaderboardSets;
@property (nonatomic) BOOL supportsLeaderboards;
@property (nonatomic) BOOL supportsMultiplayer;
@property (nonatomic) BOOL supportsTurnBasedMultiplayer;
@property (nonatomic, getter=isValid) BOOL valid;


+(id)createGamedGameInternal;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)defaultCategory;
-(id)description;
-(id)serverRepresentation;
-(unsigned short)numberOfCategories;


@end


#endif