// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKLEADERBOARD_H
#define GKLEADERBOARD_H

@class NSString, NSDate, NSArray;
@protocol GKLeaderboardDelegate;

#import <Foundation/Foundation.h>

#import "GKLeaderboardInternal.h"
#import "GKScore.h"

@interface GKLeaderboard : NSObject

@property (readonly, nonatomic) NSString *baseLeaderboardID;
@property (copy, nonatomic) NSString *category;
@property (weak, nonatomic) NSObject<GKLeaderboardDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGFloat duration;
@property (readonly, nonatomic) NSInteger friendRank;
@property (readonly, nonatomic) NSInteger friendRankCount;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (retain) GKLeaderboardInternal *internal; // ivar: _internal
@property (readonly, getter=isLoading) BOOL loading;
@property (nonatomic) int loadingCount; // ivar: _loadingCount
@property (retain, nonatomic) GKScore *localPlayerScore; // ivar: _localPlayerScore
@property (readonly, nonatomic) NSString *localizedTitle;
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSUInteger maxRange;
@property (readonly, nonatomic) NSDate *nextStartDate;
@property (readonly, nonatomic) NSInteger overallRank;
@property (readonly, nonatomic) NSInteger overallRankCount;
@property (nonatomic) NSInteger playerScope; // ivar: _playerScope
@property (retain, nonatomic) NSArray *players; // ivar: _players
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSArray *scores; // ivar: _scores
@property (readonly, nonatomic) NSDate *startDate;
@property (nonatomic) NSInteger timeScope; // ivar: _timeScope
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(void)loadCategoriesWithCompletionHandler:(id)arg0 ;
+(void)loadHighlightsWithPlayerScope:(NSInteger)arg0 timeScope:(NSInteger)arg1 game:(id)arg2 handler:(id)arg3 ;
+(void)loadHighlightsWithPlayerScope:(NSInteger)arg0 timeScope:(NSInteger)arg1 handler:(id)arg2 ;
+(void)loadLeaderboardWithIdentifier:(id)arg0 forGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3 ;
+(void)loadLeaderboardsForGame:(id)arg0 forSet:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(id)arg3 ;
+(void)loadLeaderboardsForGame:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadLeaderboardsForGame:(id)arg0 withPlayer:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)loadLeaderboardsWithCompletionHandler:(id)arg0 ;
+(void)loadLeaderboardsWithIDs:(id)arg0 completionHandler:(id)arg1 ;
+(void)loadLeaderboardsWithIDs:(id)arg0 game:(id)arg1 completionHandler:(id)arg2 ;
+(void)setDefaultLeaderboard:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)submitScore:(NSInteger)arg0 context:(NSUInteger)arg1 player:(id)arg2 leaderboardIDs:(id)arg3 completionHandler:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)hash;
-(id)creator;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)initWithPlayerIDs:(id)arg0 ;
-(id)initWithPlayers:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)scoreRequestForGame:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)decrementLoadingCountAtomically;
-(void)deleteWithHandler:(id)arg0 ;
-(void)endWithHandler:(id)arg0 ;
-(void)incrementLoadingCountAtomically;
-(void)loadEntriesForPlayerScope:(NSInteger)arg0 timeScope:(NSInteger)arg1 range:(struct _NSRange )arg2 completionHandler:(id)arg3 ;
-(void)loadEntriesForPlayers:(id)arg0 timeScope:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)loadEntriesWithGameDescriptor:(id)arg0 fetchOptions:(NSUInteger)arg1 playerScope:(NSInteger)arg2 timeScope:(NSInteger)arg3 range:(struct _NSRange )arg4 completionHandler:(id)arg5 ;
-(void)loadEntriesWithGameDescriptor:(id)arg0 playerScope:(NSInteger)arg1 timeScope:(NSInteger)arg2 range:(struct _NSRange )arg3 completionHandler:(id)arg4 ;
-(void)loadPreviousOccurrenceWithCompletionHandler:(id)arg0 ;
-(void)loadScoresForGame:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)loadScoresForRequest:(id)arg0 handler:(id)arg1 ;
-(void)loadScoresWithCompletionHandler:(id)arg0 ;
-(void)loadSummaryWithTimeScope:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)startWithHandler:(id)arg0 ;
-(void)submitScore:(NSInteger)arg0 context:(NSUInteger)arg1 player:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif