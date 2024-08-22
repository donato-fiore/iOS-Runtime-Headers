// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTOURNAMENT_H
#define GKTOURNAMENT_H

@class NSURL, NSDate, NSString;
@protocol NSSecureCoding, GKCustomTournamentDelegate;

#import <Foundation/Foundation.h>

#import "GKScore.h"
#import "GKTournamentInternal.h"
#import "GKLeaderboard.h"
#import "GKTournamentParticipant.h"
#import "GKTournamentDefinition.h"
#import "GKPlayer.h"

@interface GKTournament : NSObject <NSSecureCoding>



@property (retain, nonatomic) GKScore *bestScore; // ivar: _bestScore
@property (retain, nonatomic) NSObject<GKCustomTournamentDelegate> *customTournamentDelegate; // ivar: _customTournamentDelegate
@property (readonly, nonatomic) CGFloat duration;
@property (retain) GKTournamentInternal *internal; // ivar: _internal
@property (retain, nonatomic) NSURL *inviteURLForMessages;
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) GKTournamentParticipant *localParticipant; // ivar: _localParticipant
@property (readonly, nonatomic) NSInteger maxPlayers;
@property (readonly, nonatomic) NSInteger maxReplays;
@property (readonly, nonatomic) NSInteger minPlayers;
@property (readonly, nonatomic) NSDate *nextTournamentBeginDate;
@property (readonly, nonatomic) NSString *nextTournamentID;
@property (readonly, nonatomic) NSInteger playerCount;
@property (readonly, nonatomic) NSInteger randomSeed;
@property (readonly, nonatomic) NSDate *registrationBeginDate;
@property (readonly, nonatomic) NSDate *registrationEndDate;
@property (readonly, nonatomic) BOOL registrationOpen;
@property (readonly, nonatomic) NSInteger scoringMethod;
@property (readonly, nonatomic) NSDate *tournamentBeginDate;
@property (retain, nonatomic) GKTournamentDefinition *tournamentDefinition; // ivar: _tournamentDefinition
@property (readonly, nonatomic) NSDate *tournamentEndDate;
@property (readonly, nonatomic) NSInteger tournamentError;
@property (readonly, nonatomic) NSString *tournamentID;
@property (readonly, nonatomic) NSString *tournamentName;
@property (readonly, nonatomic) NSInteger tournamentState;
@property (retain, nonatomic) GKPlayer *winningPlayer; // ivar: _winningPlayer


+(BOOL)supportsSecureCoding;
+(id)defaultCustomTournamentForTournamentDefinition:(id)arg0 ;
+(void)loadTournamentWithID:(id)arg0 completionHandler:(id)arg1 ;
+(void)lookForAcceptedCustomTournament;
+(void)notifyPlayerForTournament:(id)arg0 completionHandler:(id)arg1 ;
+(void)resetTournamentDataForTournamentsWithTournamentDefinitionIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(void)acceptInvitationWithCompletionHandler:(id)arg0 ;
-(void)addCreator:(id)arg0 completionHandler:(id)arg1 ;
-(void)addInvitees:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginPlayWithCompletionHandler:(id)arg0 ;
-(void)declineInvitationWithCompletionHandler:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getFriendCountForGroup:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getLocalParticipantWithCompletionHandler:(id)arg0 ;
-(void)getShareURLWithCompletionHandler:(id)arg0 ;
-(void)getTotalPlayerCountForGroup:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)getTournamentStateWithCompletionHandler:(id)arg0 ;
-(void)loadParticipantsWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadScoresWithScope:(NSInteger)arg0 range:(struct _NSRange )arg1 completionHandler:(id)arg2 ;
-(void)registerPlayerInGroup:(NSInteger)arg0 completionHandler:(id)arg1 ;
-(void)removeCreator:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeInvitees:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportProgressScore:(NSInteger)arg0 withTryToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportScore:(NSInteger)arg0 withTryToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)resignFromTournamentWithCompletionHandler:(id)arg0 ;
-(void)resumePlayWithTryToken:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateWithCompletionHandler:(id)arg0 ;
-(void)verifyPlayerForMatchmaking:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif