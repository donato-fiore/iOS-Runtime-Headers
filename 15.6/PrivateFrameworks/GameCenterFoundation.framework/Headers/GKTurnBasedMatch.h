// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKTURNBASEDMATCH_H
#define GKTURNBASEDMATCH_H

@class NSArray, NSString, NSDate, NSData;
@protocol GKSessionDelegate;

#import <Foundation/Foundation.h>

#import "GKTurnBasedParticipant.h"
#import "GKPlayer.h"
#import "GKGame.h"
#import "GKTurnBasedMatchInternal.h"

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate>



@property (readonly, nonatomic) NSArray *activeExchanges;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSArray *completedExchanges;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) GKTurnBasedParticipant *currentParticipant;
@property (readonly, nonatomic) GKPlayer *currentPlayer;
@property (readonly, nonatomic) NSDate *dateSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger exchangeDataMaximumSize;
@property (readonly, nonatomic) NSUInteger exchangeMaxInitiatedExchangesPerPlayer;
@property (readonly, nonatomic) NSArray *exchanges; // ivar: _exchanges
@property (readonly, nonatomic) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property (readonly, nonatomic) GKGame *game;
@property (readonly) NSUInteger hash;
@property (retain) GKTurnBasedMatchInternal *internal; // ivar: _internal
@property (readonly, nonatomic) BOOL isMyTurn;
@property (copy, nonatomic) NSDate *lastTurnDate;
@property (readonly, nonatomic) BOOL localPlayerHasRecentTurn;
@property (readonly, nonatomic) GKTurnBasedParticipant *localPlayerParticipant;
@property (readonly, nonatomic) NSData *matchData;
@property (nonatomic) NSUInteger matchDataMaximumSize;
@property (readonly, nonatomic) NSString *matchID;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly, nonatomic) NSInteger platform;
@property (readonly, nonatomic) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property (readonly, nonatomic) GKTurnBasedParticipant *previousParticipant;
@property (readonly, nonatomic) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property (retain, nonatomic) NSString *shortBundleVersion;
@property (readonly, nonatomic) GKPlayer *showcasePlayer;
@property (nonatomic) unsigned int state; // ivar: _state
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger turnNumber;


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
+(id)_localizableMessageWithKey:(id)arg0 arguments:(id)arg1 defaultMessage:(id)arg2 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg0 ;
+(id)keyPathsForValuesAffectingStatus;
+(id)matchesWithInternalRepresentations:(id)arg0 ;
+(void)findMatchForRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)getTurnBasedBadgeCountWithHandler:(id)arg0 ;
+(void)loadMatchWithID:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadMatchesIncludingCompatibleBundleID:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadMatchesWithCompletionHandler:(id)arg0 ;
+(void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg0 loadGameData:(BOOL)arg1 withCompletionHandler:(id)arg2 ;
+(void)loadTurnBasedMatchSummaries:(id)arg0 ;
+(void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
+(void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)_exchangesForInternalRepresentation:(id)arg0 participants:(id)arg1 ;
-(id)_participantsForInternalRepresentation:(id)arg0 ;
-(id)exchangeForID:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)indexesForParticipants:(id)arg0 ;
-(id)init;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_updateWithInternal:(id)arg0 ;
-(void)acceptInviteWithCompletionHandler:(id)arg0 ;
-(void)declineInviteWithCompletionHandler:(id)arg0 ;
-(void)endMatchInTurnWithMatchData:(id)arg0 completionHandler:(id)arg1 ;
-(void)endMatchInTurnWithMatchData:(id)arg0 leaderboardScores:(id)arg1 achievements:(id)arg2 completionHandler:(id)arg3 ;
-(void)endMatchInTurnWithMatchData:(id)arg0 scores:(id)arg1 achievements:(id)arg2 completionHandler:(id)arg3 ;
-(void)endTurnWithNextParticipant:(id)arg0 matchData:(id)arg1 completionHandler:(id)arg2 ;
-(void)endTurnWithNextParticipants:(id)arg0 turnTimeout:(CGFloat)arg1 matchData:(id)arg2 completionHandler:(id)arg3 ;
-(void)loadMatchDataWithCompletionHandler:(id)arg0 ;
-(void)loadURLWithMatchRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)participantQuitInTurnWithOutcome:(NSInteger)arg0 nextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id)arg3 ;
-(void)participantQuitInTurnWithOutcome:(NSInteger)arg0 nextParticipants:(id)arg1 turnTimeout:(CGFloat)arg2 matchData:(id)arg3 completionHandler:(id)arg4 ;
-(void)participantQuitOutOfTurnWithOutcome:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
-(void)rematchWithCompletionHandler:(id)arg0 ;
-(void)removeWithCompletionHandler:(id)arg0 ;
-(void)reserveShareParticipantSlots:(NSInteger)arg0 minPlayerCount:(NSInteger)arg1 maxPlayerCount:(NSInteger)arg2 andInvitePlayers:(id)arg3 withMessage:(id)arg4 handler:(id)arg5 ;
-(void)saveCurrentTurnWithMatchData:(id)arg0 completionHandler:(id)arg1 ;
-(void)saveMergedMatchData:(id)arg0 withResolvedExchanges:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendExchangeToParticipants:(id)arg0 data:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 timeout:(CGFloat)arg4 completionHandler:(id)arg5 ;
-(void)sendReminderToParticipants:(id)arg0 localizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(id)arg3 ;
-(void)setLocalizableMessageWithKey:(id)arg0 arguments:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif