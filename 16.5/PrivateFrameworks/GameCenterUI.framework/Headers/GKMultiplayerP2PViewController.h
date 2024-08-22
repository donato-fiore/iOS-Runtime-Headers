// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMULTIPLAYERP2PVIEWCONTROLLER_H
#define GKMULTIPLAYERP2PVIEWCONTROLLER_H

@class GKInvite, NSSet, NSString;
@protocol TUConversationManagerDelegate, OS_dispatch_queue, GKMultiplayerP2PViewControllerDelegate;


#import "GKMultiplayerViewController.h"

@interface GKMultiplayerP2PViewController : GKMultiplayerViewController <TUConversationManagerDelegate>



@property (retain, nonatomic) GKInvite *acceptedInvite; // ivar: _acceptedInvite
@property (retain, nonatomic) NSSet *activeRemoteParticipants; // ivar: _activeRemoteParticipants
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *conversationManagerQueue; // ivar: _conversationManagerQueue
@property BOOL datasourceConfigured; // ivar: _datasourceConfigured
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKMultiplayerP2PViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHosted) BOOL hosted; // ivar: _hosted
@property (nonatomic) CGFloat inviteeConnectionTimeStamp; // ivar: _inviteeConnectionTimeStamp
@property (nonatomic) NSInteger mode; // ivar: _mode
@property BOOL sharePlayEnabled; // ivar: _sharePlayEnabled
@property (nonatomic) BOOL startStagedActivity; // ivar: _startStagedActivity
@property (readonly) Class superclass;
@property BOOL userCancelledMatching; // ivar: _userCancelledMatching


-(BOOL)canStartForcedAutomatch;
-(BOOL)haveInvitedPlayers;
-(BOOL)havePendingPlayers;
-(BOOL)isCanceling;
-(BOOL)isInSetupMode;
-(BOOL)shouldChangeModeFromOldMode:(NSInteger)arg0 toNewMode:(NSInteger)arg1 ;
-(NSInteger)automatchParticipantStatus;
-(id)initWithAcceptedInvite:(id)arg0 ;
-(id)initWithMatchRequest:(id)arg0 ;
-(void)applicationWillEnterForeground;
-(void)cancel;
-(void)cancelAlertWithoutDelegateCallback;
-(void)cancelPendingInvites;
-(void)configureDataSource;
-(void)configureDataSourceWithCompletionHandler:(id)arg0 ;
-(void)configureWhenEnteringTheLobby;
-(void)configureWhenLeavingTheLobby;
-(void)conversationManager:(id)arg0 activeRemoteParticipantsChangedForConversation:(id)arg1 ;
-(void)dealloc;
-(void)didUpdateAutoMatchPlayerCount;
-(void)displayCancelConfirmationDialog;
-(void)finishWithError:(id)arg0 ;
-(void)groupActivityJoiningPlayer:(id)arg0 devicePushToken:(id)arg1 participantServerIdentifier:(id)arg2 ;
-(void)incrementOneAutoMatchPlayerCountIfPossible;
-(void)inviteFriendsButtonPressed;
-(void)invitePlayers:(id)arg0 ;
-(void)inviterCancelled;
-(void)loadShareURLWithCompletion:(id)arg0 ;
-(void)performActionsForButtonCancelCurrentMatching:(BOOL)arg0 ;
-(void)playNow;
-(void)playerConnected:(id)arg0 ;
-(void)playerDisconnected:(id)arg0 ;
-(void)prepopulateSharePlayActiveParticipants;
-(void)presentSharePlaySharingController;
-(void)processStatusUpdateMessageFromPlayer:(id)arg0 bytes:(char *)arg1 withLength:(unsigned int)arg2 ;
-(void)removedPlayer:(id)arg0 ;
-(void)resetInviteesStatus;
-(void)sendInvitesToContactPlayers:(id)arg0 legacyPlayers:(id)arg1 ;
-(void)sendInvitesToSharePlayPlayer:(id)arg0 devicePushToken:(id)arg1 ;
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
-(void)sharePlayFetchFirstActiveConversationWithHandler:(id)arg0 ;
-(void)showAutomatchingErrorAlert;
-(void)showInviterDisconnectedAlert;
-(void)showMatchDisconnectedAlertForPlayer:(id)arg0 ;
-(void)showNoInternetAlert;
-(void)showParentalControlsRestrictionAlert;
-(void)startGame;
-(void)startGameButtonPressed;
-(void)updateFooterButtonStates;
-(void)updateForNewMode;
-(void)updateMode;
-(void)updateStartGameButtonTitle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willPresentPlayerPicker:(id)arg0 ;


@end


#endif