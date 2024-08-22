// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKGAMECENTERVIEWCONTROLLER_H
#define GKGAMECENTERVIEWCONTROLLER_H

@class UINavigationController, NSString, GKGame, UIAlertController, GKLeaderboard;
@protocol GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate, GKGameCenterControllerDelegate;


#import "GKDashboardHostViewController.h"

@interface GKGameCenterViewController : UINavigationController <GKExtensionParentViewControllerProtocol, UIViewControllerAnimatedTransitioning, UIViewControllerTransitioningDelegate>



@property (retain, nonatomic) NSString *achievementIdentifier; // ivar: _achievementIdentifier
@property (retain, nonatomic) GKGame *actualGame; // ivar: _actualGame
@property (nonatomic) int actualHostPID; // ivar: _actualHostPID
@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *gameBundleID; // ivar: _gameBundleID
@property (weak, nonatomic) NSObject<GKGameCenterControllerDelegate> *gameCenterDelegate; // ivar: _gameCenterDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isArcade; // ivar: _isArcade
@property (retain, nonatomic) GKLeaderboard *leaderboard; // ivar: _leaderboard
@property (retain, nonatomic) NSString *leaderboardCategory;
@property (retain, nonatomic) NSString *leaderboardIdentifier; // ivar: _leaderboardIdentifier
@property (nonatomic) NSInteger leaderboardPlayerScope; // ivar: _leaderboardPlayerScope
@property (nonatomic) NSInteger leaderboardTimeScope; // ivar: _leaderboardTimeScope
@property (retain, nonatomic) NSString *playerIdentifier; // ivar: _playerIdentifier
@property (nonatomic, getter=isPresenting) BOOL presenting; // ivar: _presenting
@property (retain, nonatomic) GKDashboardHostViewController *remoteViewController; // ivar: _remoteViewController
@property (nonatomic) NSInteger restrictionMode; // ivar: _restrictionMode
@property (readonly) Class superclass;
@property (nonatomic) NSInteger viewState; // ivar: _viewState


+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)accessInstanceVariablesDirectly;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldShowPlayForChallenge;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(CGFloat)transitionDuration:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)animationControllerForDismissedController:(id)arg0 ;
-(id)animationControllerForPresentedController:(id)arg0 presentingController:(id)arg1 sourceController:(id)arg2 ;
-(id)init;
-(id)initWithAchievementID:(id)arg0 ;
-(id)initWithGame:(id)arg0 hostPID:(int)arg1 restrictionMode:(NSInteger)arg2 deeplink:(id)arg3 ;
-(id)initWithLeaderboard:(id)arg0 playerScope:(NSInteger)arg1 ;
-(id)initWithLeaderboardID:(id)arg0 playerScope:(NSInteger)arg1 timeScope:(NSInteger)arg2 ;
-(id)initWithState:(NSInteger)arg0 ;
-(void)_commonInit;
-(void)_setupChildViewController;
-(void)_setupRemoteViewController;
-(void)animateTransition:(id)arg0 ;
-(void)animationEnded:(BOOL)arg0 ;
-(void)checkArcadeStateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)extensionDidFinishWithError:(id)arg0 ;
-(void)loadView;
-(void)notifyDelegateOnWillFinish;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif