// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKMATCHMAKERVIEWCONTROLLER_H
#define GKMATCHMAKERVIEWCONTROLLER_H

@class UINavigationController, GKInvite, UIAlertController, NSString, NSMutableArray, GKDispatchGroup, GKMatch, GKMatchRequest;
@protocol GKMatchDelegate, GKMatchDelegatePrivate, GKExtensionParentViewControllerProtocol, OS_dispatch_queue, GKMatchmakerViewControllerDelegate;


#import "GKMatchmakerHostViewController.h"

@interface GKMatchmakerViewController : UINavigationController <GKMatchDelegate, GKMatchDelegatePrivate, GKExtensionParentViewControllerProtocol>



@property (retain, nonatomic) GKInvite *acceptedInvite; // ivar: _acceptedInvite
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (nonatomic) BOOL canStartWithMinimumPlayers; // ivar: _canStartWithMinimumPlayers
@property (readonly) NSObject<OS_dispatch_queue> *cancellingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultInvitationMessage;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHosted) BOOL hosted; // ivar: _hosted
@property (retain, nonatomic) NSMutableArray *hostedPlayers; // ivar: _hostedPlayers
@property (retain, nonatomic) GKDispatchGroup *invitationGroup; // ivar: _invitationGroup
@property (readonly) NSObject<OS_dispatch_queue> *invitationQueue;
@property (nonatomic) BOOL inviterCancelNotificaitonReceived; // ivar: _inviterCancelNotificaitonReceived
@property (retain, nonatomic) GKMatch *match; // ivar: _match
@property (retain, nonatomic) GKMatchRequest *matchRequest; // ivar: _matchRequest
@property (weak, nonatomic) NSObject<GKMatchmakerViewControllerDelegate> *matchmakerDelegate; // ivar: matchmakerDelegate
@property (nonatomic) NSInteger matchmakingMode; // ivar: _matchmakingMode
@property (retain, nonatomic) GKMatchmakerHostViewController *remoteViewController; // ivar: _remoteViewController
@property (readonly) Class superclass;
@property (nonatomic) BOOL userCancelledMatching; // ivar: _userCancelledMatching


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithInvite:(id)arg0 ;
-(id)initWithMatchRequest:(id)arg0 ;
-(id)registerGroupActivitySharingControllerItemProvider:(id)arg0 ;
-(void)_setupChildViewController;
-(void)_setupRemoteViewController;
-(void)activateGroupActivities;
-(void)addPlayersToMatch:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)authenticationChanged:(id)arg0 ;
-(void)cancel;
-(void)cancelMatching;
-(void)cancelPendingInviteToPlayer:(id)arg0 ;
-(void)cancelWithoutNotifyingDelegate;
-(void)createMatchForAcceptedInvite;
-(void)dealloc;
-(void)disconnectFromMatch;
-(void)endGroupActivities;
-(void)extensionDidFinishWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithMatch;
-(void)finishWithPlayers;
-(void)groupActivityJoiningPlayer:(id)arg0 devicePushToken:(id)arg1 participantServerIdentifier:(id)arg2 ;
-(void)inviteSharePlayPlayer:(id)arg0 ;
-(void)invitedPlayer:(id)arg0 responded:(NSInteger)arg1 ;
-(void)inviterCancelledNotification:(id)arg0 ;
-(void)localPlayerAcceptedGameInvite:(id)arg0 ;
-(void)match:(id)arg0 didFailWithError:(id)arg1 ;
-(void)match:(id)arg0 didReceiveData:(id)arg1 fromRemotePlayer:(id)arg2 ;
-(void)match:(id)arg0 player:(id)arg1 didChangeConnectionState:(NSInteger)arg2 ;
-(void)playersToInvite:(id)arg0 ;
-(void)presentSharePlaySharingController;
-(void)sendData:(id)arg0 ;
-(void)setBrowsingForNearbyPlayers:(BOOL)arg0 ;
-(void)setConnectingStateForPlayer:(id)arg0 ;
-(void)setShareInvitees:(id)arg0 ;
-(void)setupNotifications;
-(void)shareMatchWithRequest:(id)arg0 handler:(id)arg1 ;
-(void)sharePlayEligibilityChanged:(id)arg0 ;
-(void)sharePlaySharingControllerResultSucceeded:(BOOL)arg0 ;
-(void)startMatchingWithRequest:(id)arg0 devicePushToken:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif