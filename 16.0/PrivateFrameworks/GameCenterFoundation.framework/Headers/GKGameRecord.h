// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKGAMERECORD_H
#define GKGAMERECORD_H

@class NSString, NSDate;


#import "GKGame.h"
#import "GKGameRecordInternal.h"
#import "GKPlayer.h"

@interface GKGameRecord : GKGame

@property (readonly, nonatomic) NSUInteger achievementPoints;
@property (readonly, nonatomic) NSUInteger achievements;
@property (readonly, nonatomic) NSString *defaultLeaderboardIdentifier;
@property (readonly, nonatomic) NSUInteger friendRank;
@property (readonly, retain) GKGameRecordInternal *internal;
@property (readonly, nonatomic) BOOL isArcadeGame;
@property (readonly, nonatomic) NSDate *lastPlayedDate;
@property (readonly, nonatomic) NSUInteger maxAchievementPoints;
@property (readonly, nonatomic) NSUInteger maxAchievements;
@property (readonly, nonatomic) NSUInteger maxFriendRank;
@property (readonly, nonatomic) NSUInteger maxRank;
@property (readonly, nonatomic) NSUInteger numberOfAchievements;
@property (readonly, nonatomic) NSUInteger numberOfCategories;
@property (readonly, nonatomic) NSUInteger numberOfLeaderboardSets;
@property (readonly, nonatomic) NSUInteger numberOfLeaderboards;
@property (readonly, nonatomic) BOOL played;
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (readonly, nonatomic) NSDate *purchaseDate;
@property (readonly, nonatomic) NSUInteger rank;
@property (readonly, nonatomic) BOOL supportsAchievements;
@property (readonly, nonatomic) BOOL supportsChallenges;
@property (readonly, nonatomic) BOOL supportsLeaderboardSets;
@property (readonly, nonatomic) BOOL supportsLeaderboards;


+(BOOL)supportsSecureCoding;
+(id)cacheKeyForPlayer:(id)arg0 bundleIdentifier:(id)arg1 ;
+(id)cacheKeyForPlayer:(id)arg0 game:(id)arg1 ;
+(id)cacheKeyForPlayer:(id)arg0 internal:(id)arg1 ;
+(id)gameRecordForPlayer:(id)arg0 game:(id)arg1 ;
+(id)internalRepresentationForPlayer:(id)arg0 game:(id)arg1 ;
+(void)invalidateCaches;
+(void)loadGameRecordForPlayer:(id)arg0 game:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)loadGameRecordsForPlayer:(id)arg0 bundleIDs:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)loadGameRecordsForPlayer:(id)arg0 games:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)partitionGameRecords:(id)arg0 returniOS:(*id)arg1 returnMac:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 player:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif