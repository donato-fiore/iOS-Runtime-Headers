// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMULTIPLAYERVIEWCONTROLLEROBSOLETE_H
#define GKMULTIPLAYERVIEWCONTROLLEROBSOLETE_H

@class NSString, GKGame, GKMatchRequest, NSURL;
@protocol GKDashboardMultiplayerPickerDelegateObsolete, GKMultiplayerCustomInviteMessageViewControllerDelegate, GKMultiplayerDataSourceDelegateObsolete, GKDashboardNearbyBrowserDelegate;


#import "GKCollectionViewController.h"
#import "_TtC12GameCenterUI37GKMultiplayerButtonHeaderViewObsolete.h"
#import "_TtC12GameCenterUI31GKMultiplayerFooterViewObsolete.h"
#import "GKMultiplayerDataSourceObsolete.h"
#import "GKDashboardMultiplayerPickerViewControllerObsolete.h"

@interface GKMultiplayerViewControllerObsolete : GKCollectionViewController <GKDashboardMultiplayerPickerDelegateObsolete, GKMultiplayerCustomInviteMessageViewControllerDelegate, GKMultiplayerDataSourceDelegateObsolete>



@property (nonatomic) BOOL addButtonEnabled; // ivar: _addButtonEnabled
@property (retain, nonatomic) _TtC12GameCenterUI37GKMultiplayerButtonHeaderViewObsolete *buttonHeaderView; // ivar: _buttonHeaderView
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultInvitationMessage; // ivar: _defaultInvitationMessage
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAcceptGameInvite; // ivar: _didAcceptGameInvite
@property (nonatomic) BOOL didStartForcedAutomatch; // ivar: _didStartForcedAutomatch
@property (retain, nonatomic) _TtC12GameCenterUI31GKMultiplayerFooterViewObsolete *footerView; // ivar: _footerView
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger invitationType; // ivar: _invitationType
@property (readonly, copy, nonatomic) GKMatchRequest *matchRequest; // ivar: _matchRequest
@property (nonatomic) NSInteger matchmakingMode; // ivar: _matchmakingMode
@property (nonatomic) NSUInteger messagesInviteStatus; // ivar: _messagesInviteStatus
@property (readonly, nonatomic) GKMultiplayerDataSourceObsolete *multiplayerDataSource;
@property (weak, nonatomic) NSObject<GKDashboardNearbyBrowserDelegate> *nearbyDelegate; // ivar: _nearbyDelegate
@property (readonly, copy, nonatomic) GKMatchRequest *originalMatchRequest; // ivar: _originalMatchRequest
@property (retain, nonatomic) GKDashboardMultiplayerPickerViewControllerObsolete *playerPickerViewController; // ivar: _playerPickerViewController
@property (retain, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton
@property (readonly) Class superclass;


-(BOOL)allowPlayerCountSelection;
-(BOOL)canStartForcedAutomatch;
-(BOOL)isCanceling;
-(BOOL)isInSetupMode;
-(BOOL)isLoading;
-(NSInteger)automatchParticipantStatus;
-(NSInteger)maxAvailablePlayers;
-(NSInteger)multiplayerCellLayoutMode;
-(id)existingMessageForInviteViewController:(id)arg0 ;
-(id)init;
-(id)initWithMatchRequest:(id)arg0 ;
-(id)makeButtonHeaderView;
-(id)viewControllerLayout;
-(struct UIEdgeInsets )collectionViewContentInset;
-(void)addAutomatchPlayer;
-(void)addMessageButtonPressed;
-(void)cancel;
-(void)cancelButtonPressed;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)configureDataSource;
-(void)customInviteViewController:(id)arg0 didFinishWithMessage:(id)arg1 ;
-(void)dataSource:(id)arg0 didRefreshSections:(id)arg1 ;
-(void)dealloc;
-(void)determineInvitationType;
-(void)didClickCancelForServiceUnavailableAlert;
-(void)didEnterLoadedState;
-(void)didInviteContactPlayers;
-(void)didTapInviteOnCell:(id)arg0 ;
-(void)didTapRemoveParticipant:(id)arg0 ;
-(void)didUpdateParticipants;
-(void)dismissPickerViewController;
-(void)handleNewParticipantCount:(NSInteger)arg0 ;
-(void)handleServiceUnavailable:(id)arg0 ;
-(void)inviteContactPlayers:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invitePlayers:(id)arg0 ;
-(void)layoutSubviews;
-(void)loadShareURLWithCompletion:(id)arg0 ;
-(void)localPlayerAcceptedGameInvite:(id)arg0 ;
-(void)multiplayerPicker:(id)arg0 didPickPlayers:(id)arg1 ;
-(void)multiplayerPickerDidCancel:(id)arg0 ;
-(void)performActionsForButtonCancelCurrentMatching;
-(void)performActionsForButtonStartGame;
-(void)playNow;
-(void)playersToInvite:(id)arg0 ;
-(void)preparePlayerPicker;
-(void)presentPlayerPicker;
-(void)refreshHeaderAndFooterMaterials;
-(void)removeAutomatchPlayer;
-(void)removePlayer:(id)arg0 ;
-(void)removedPlayer:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)sendInvitesToContactPlayers:(id)arg0 legacyPlayers:(id)arg1 ;
-(void)setInvitesFailedWithError:(id)arg0 ;
-(void)setShareInvitees;
-(void)setViewNeedsLayout;
-(void)setupCancelButton;
-(void)startGameButtonPressed;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateAddMessageButtonVisibility;
-(void)updateCollectionViewContentInset;
-(void)updateDataSourceInvitationEnabled;
-(void)updateHeaderFooterLayoutMargins;
-(void)updateStartGameButtonTitle;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willPresentPlayerPicker:(id)arg0 ;


@end


#endif