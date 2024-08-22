// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKTURNBASEDMATCHMAKERVIEWCONTROLLER_H
#define GKTURNBASEDMATCHMAKERVIEWCONTROLLER_H

@class UINavigationController, UIAlertController, NSString, GKMatchRequest;
@protocol GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol, GKTurnBasedMatchmakerViewControllerDelegate;


#import "GKTurnBasedMatchmakerHostViewController.h"

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GKMatchRequest *matchRequest; // ivar: _matchRequest
@property (nonatomic) NSInteger matchmakingMode; // ivar: _matchmakingMode
@property (retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController; // ivar: _remoteViewController
@property (nonatomic) BOOL showExistingMatches; // ivar: _showExistingMatches
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<GKTurnBasedMatchmakerViewControllerDelegate> *turnBasedMatchmakerDelegate; // ivar: turnBasedMatchmakerDelegate


+(BOOL)_preventsAppearanceProxyCustomization;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldShowPlayForTurnBasedMatch;
-(BOOL)shouldShowQuitForTurnBasedMatch;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initWithMatchRequest:(id)arg0 ;
-(void)_setupChildViewController;
-(void)_setupRemoteViewController;
-(void)authenticationChanged:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)extensionDidFinishWithError:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithMatch:(id)arg0 ;
-(void)loadView;
-(void)player:(id)arg0 receivedTurnEventForMatch:(id)arg1 didBecomeActive:(BOOL)arg2 ;
-(void)playerQuitMatch:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif