// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTURNBASEDINVITEVIEWCONTROLLEROBSOLETE_H
#define GKTURNBASEDINVITEVIEWCONTROLLEROBSOLETE_H

@class NSMutableDictionary, GKTurnBasedMatch;
@protocol GKTurnBasedInviteViewControllerDelegateObsolete;


#import "GKMultiplayerViewControllerObsolete.h"

@interface GKTurnBasedInviteViewControllerObsolete : GKMultiplayerViewControllerObsolete

@property (weak, nonatomic) NSObject<GKTurnBasedInviteViewControllerDelegateObsolete> *delegate; // ivar: _delegate
@property (nonatomic) BOOL deletePreloadedMatch; // ivar: _deletePreloadedMatch
@property (retain, nonatomic) NSMutableDictionary *inviteMessageDictionary; // ivar: _inviteMessageDictionary
@property (readonly, nonatomic, getter=isLoadingOrRemovingPreloadedMatch) BOOL loadingOrRemovingPreloadedMatch;
@property (retain, nonatomic) GKTurnBasedMatch *match; // ivar: _match
@property (nonatomic) NSInteger mode; // ivar: _mode


-(BOOL)isInSetupMode;
-(void)cancel;
-(void)cleanupStateForCancelOrErrorWithHandler:(id)arg0 ;
-(void)createGameWithPlayersToInvite:(id)arg0 forSharing:(BOOL)arg1 handler:(id)arg2 ;
-(void)didClickCancelForServiceUnavailableAlert;
-(void)didInviteContactPlayers;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithMatchID:(id)arg0 ;
-(void)handleNewParticipantCount:(NSInteger)arg0 ;
-(void)invitePlayers:(id)arg0 ;
-(void)performActionsForButtonCancelCurrentMatching;
-(void)playNow;
-(void)removeCurrentMatchAndSetFlagIfNotLoaded:(BOOL)arg0 withHandler:(id)arg1 ;
-(void)sendInvitesToContactPlayers:(id)arg0 legacyPlayers:(id)arg1 ;
-(void)setInvitesFailedWithError:(id)arg0 ;
-(void)startGameButtonPressed;
-(void)updateStartGameButtonTitle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif