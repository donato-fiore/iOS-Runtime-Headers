// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMULTIPLAYERP2PVIEWCONTROLLEROBSOLETE_H
#define GKMULTIPLAYERP2PVIEWCONTROLLEROBSOLETE_H

@class GKInvite;
@protocol GKMultiplayerP2PViewControllerDelegateObsolete;


#import "GKMultiplayerViewControllerObsolete.h"

@interface GKMultiplayerP2PViewControllerObsolete : GKMultiplayerViewControllerObsolete

@property (retain, nonatomic) GKInvite *acceptedInvite; // ivar: _acceptedInvite
@property (weak, nonatomic) NSObject<GKMultiplayerP2PViewControllerDelegateObsolete> *delegate; // ivar: _delegate
@property (nonatomic, getter=isHosted) BOOL hosted; // ivar: _hosted
@property (nonatomic) CGFloat inviteeConnectionTimeStamp; // ivar: _inviteeConnectionTimeStamp
@property (nonatomic) NSInteger mode; // ivar: _mode
@property BOOL userCancelledMatching; // ivar: _userCancelledMatching


-(BOOL)canStartForcedAutomatch;
-(BOOL)haveInvitedPlayers;
-(BOOL)havePendingPlayers;
-(BOOL)isCanceling;
-(BOOL)isInSetupMode;
-(NSInteger)automatchParticipantStatus;
-(id)initWithAcceptedInvite:(id)arg0 ;
-(void)applicationWillEnterForeground;
-(void)cancel;
-(void)cancelAlertWithoutDelegateCallback;
-(void)cancelPendingInvites;
-(void)configureDataSource;
-(void)dealloc;
-(void)displayCancelConfirmationDialog;
-(void)finishWithError:(id)arg0 ;
-(void)invitePlayers:(id)arg0 ;
-(void)inviterCancelled;
-(void)loadShareURLWithCompletion:(id)arg0 ;
-(void)performActionsForButtonCancelCurrentMatching;
-(void)playNow;
-(void)playerConnected:(id)arg0 ;
-(void)playerDisconnected:(id)arg0 ;
-(void)processStatusUpdateMessageFromBytes:(char *)arg0 withLength:(unsigned int)arg1 ;
-(void)removedPlayer:(id)arg0 ;
-(void)resetInviteesStatus;
-(void)sendInvitesToContactPlayers:(id)arg0 legacyPlayers:(id)arg1 ;
-(void)sendStatusUpdate;
-(void)setAutomatchFailedWithError:(id)arg0 ;
-(void)setAutomatchPlayerCount:(NSInteger)arg0 ;
-(void)setConnectingStateForPlayer:(id)arg0 ;
-(void)setExistingPlayers:(id)arg0 ;
-(void)setFailedWithError:(id)arg0 ;
-(void)setInvitesFailedWithError:(id)arg0 ;
-(void)setPlayer:(id)arg0 connected:(BOOL)arg1 ;
-(void)setPlayer:(id)arg0 responded:(NSInteger)arg1 ;
-(void)setPlayer:(id)arg0 sentData:(id)arg1 ;
-(void)setShareInvitees;
-(void)showAutomatchingErrorAlert;
-(void)showInviterDisconnectedAlert;
-(void)showMatchDisconnectedAlertForPlayer:(id)arg0 ;
-(void)showParentalControlsRestrictionAlert;
-(void)startGame;
-(void)startGameButtonPressed;
-(void)updateForNewMode;
-(void)updateStartGameButtonTitle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willPresentPlayerPicker:(id)arg0 ;


@end


#endif