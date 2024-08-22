// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKTURNBASEDMATCHESVIEWCONTROLLER_H
#define GKTURNBASEDMATCHESVIEWCONTROLLER_H

@class NSString, UIFocusGuide, GKGame, GKMatchRequest;
@protocol GKTurnBasedInviteViewControllerDelegateObsolete, GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate, GKTurnBasedMatchesDataSourceDelegate, UIPopoverControllerDelegate, UIStateRestoring, UIPopoverPresentationControllerDelegate, GKTurnBasedMatchesViewControllerDelegate;


#import "GKCollectionViewController.h"
#import "GKTurnBasedInviteViewController.h"
#import "GKTurnBasedInviteViewControllerObsolete.h"
#import "GKTurnBasedMatchesDataSource.h"

@interface GKTurnBasedMatchesViewController : GKCollectionViewController <GKTurnBasedInviteViewControllerDelegateObsolete, GKTurnBasedInviteViewControllerDelegate, GKTurnBasedMatchDetailViewControllerDelegate, GKTurnBasedMatchesDataSourceDelegate, UIPopoverControllerDelegate, UIStateRestoring, UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GKTurnBasedMatchesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFocusGuide *detailButtonFocusGuide; // ivar: _detailButtonFocusGuide
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat initialSectionHeaderHeight; // ivar: _initialSectionHeaderHeight
@property (retain, nonatomic) GKTurnBasedInviteViewController *inviteController; // ivar: _inviteController
@property (retain, nonatomic) GKTurnBasedInviteViewControllerObsolete *inviteControllerObsolete; // ivar: _inviteControllerObsolete
@property (weak, nonatomic) GKCollectionViewController *masterViewController; // ivar: _masterViewController
@property (retain, nonatomic) NSString *matchIDWaitingForTurnEvent; // ivar: _matchIDWaitingForTurnEvent
@property (retain, nonatomic) GKMatchRequest *matchRequest; // ivar: _matchRequest
@property (retain, nonatomic) GKTurnBasedMatchesDataSource *matchesDataSource; // ivar: _matchesDataSource
@property (nonatomic) NSInteger maxMatchesSeen; // ivar: _maxMatchesSeen
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly, nonatomic) NSObject<UIStateRestoring> *restorationParent;
@property (nonatomic) BOOL showExistingMatches; // ivar: _showExistingMatches
@property (nonatomic) BOOL showPlay; // ivar: _showPlay
@property (nonatomic) BOOL showQuit; // ivar: _showQuit
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(BOOL)isInGame;
-(BOOL)isLoadingOrRemovingPreloadedMatch;
-(id)init;
-(id)initWithMatchRequest:(id)arg0 ;
-(void)_gkRestorePopoverWithViewControllers:(id)arg0 completion:(id)arg1 ;
-(void)acceptInviteForMatch:(id)arg0 ;
-(void)addPressed;
-(void)applicationDidEnterBackground;
-(void)cancelButtonPressed;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)configureCollectionViewFocusGuide;
-(void)configureDataSource;
-(void)configureDetailButtonFocusGuide;
-(void)configureHeader:(id)arg0 indexPath:(id)arg1 ;
-(void)configureNavigationBarFocusGuide;
-(void)configureViewFactories;
-(void)dealloc;
-(void)detailPressedForMatch:(id)arg0 ;
-(void)didEnterNoContentState;
-(void)dismissDetailViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissDetailViewControllerInPopover:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleTurnBasedEvent:(id)arg0 ;
-(void)launchGameAndShowMatch:(id)arg0 ;
-(void)loadDataWithCompletionHandlerAndError:(id)arg0 ;
-(void)notifyGameWithMatch:(id)arg0 orError:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg0 ;
-(void)presentNavigationControllerInPopover:(id)arg0 fromCell:(id)arg1 completion:(id)arg2 ;
-(void)showDetailForMatch:(id)arg0 ;
-(void)showInviteControllerAnimated:(BOOL)arg0 ;
-(void)showMatch:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)turnBasedInviteViewController:(id)arg0 didCreateMatchID:(id)arg1 ;
-(void)turnBasedInviteViewController:(id)arg0 didCreateMatchID:(id)arg1 ;
-(void)turnBasedInviteViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)turnBasedInviteViewController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)turnBasedInviteViewControllerWasCancelled:(id)arg0 ;
-(void)turnBasedInviteViewControllerWasCancelled:(id)arg0 ;
-(void)turnBasedMatchDetailViewControllerDidAcceptInvitation:(id)arg0 ;
-(void)turnBasedMatchDetailViewControllerDidChooseMatch:(id)arg0 ;
-(void)turnBasedMatchDetailViewControllerDidDeclineInvitation:(id)arg0 ;
-(void)turnBasedMatchDetailViewControllerDidQuitMatch:(id)arg0 ;
-(void)turnBasedMatchDetailViewControllerDidRemoveMatch:(id)arg0 ;
-(void)turnBasedMatchDetailViewControllerDidShowStore:(id)arg0 ;
-(void)turnBasedMatchesDataSource:(id)arg0 didQuitMatch:(id)arg1 ;
-(void)updateUIBasedOnTraitCollection;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif