// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKSERVICEVIEWCONTROLLER_H
#define GKSERVICEVIEWCONTROLLER_H

@class NSString, GKGame, UIViewController;
@protocol GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface;


#import "GKNavigationController.h"

@interface GKServiceViewController : GKNavigationController <GKExtensionProtocol, GKDaemonProxyDataUpdateDelegate, GKDashboardServiceInterface>



@property (nonatomic) BOOL alwaysShowDoneButton; // ivar: _alwaysShowDoneButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (nonatomic) int hostPID; // ivar: _hostPID
@property (retain, nonatomic) UIViewController *privateViewController; // ivar: _privateViewController
@property (nonatomic) CGFloat statusBarHeight; // ivar: _statusBarHeight
@property (readonly) Class superclass;


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(BOOL)_useBackdropViewForWindowBackground;
-(BOOL)shouldAnimatePresentationForPrivateViewController:(id)arg0 ;
-(id)init;
-(id)observedKeyPaths;
-(void)_addDoneButtonToViewController:(id)arg0 ;
-(void)_startObservingChangesToProperties;
-(void)_stopObservingChangesToProperties;
-(void)cancelServiceViewController;
-(void)constructPrivateViewController;
-(void)dashboardDidChangeToLeaderboardIdentifier:(id)arg0 ;
-(void)dashboardDidChangeToLeaderboardPlayerScope:(NSInteger)arg0 ;
-(void)dashboardDidChangeToLeaderboardTimeScope:(NSInteger)arg0 ;
-(void)dashboardDidChangeToViewState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)didRotateFromInterfaceOrientation:(NSInteger)arg0 ;
-(void)donePressed:(id)arg0 ;
-(void)finish;
-(void)finishAndPlayChallenge:(id)arg0 ;
-(void)finishWithTurnBasedMatch:(id)arg0 ;
-(void)messageFromClient:(id)arg0 ;
-(void)nudge;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performSelectorOnHostController:(SEL)arg0 ;
-(void)performSelectorOnHostController:(SEL)arg0 withObject:(id)arg1 ;
-(void)performSelectorOnHostController:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)presentInitialViewController:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)quitTurnBasedMatch:(id)arg0 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)remoteViewControllerDidCancel;
-(void)remoteViewControllerDidFinish;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(void)requestDashboardLogoImageWithHandler:(id)arg0 ;
-(void)requestImagesForLeaderboardSetsWithHandler:(id)arg0 ;
-(void)requestImagesForLeaderboardsInSet:(id)arg0 handler:(id)arg1 ;
-(void)serviceViewControllerCreated:(id)arg0 ;
-(void)setInitialState:(id)arg0 withReply:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 withReply:(id)arg2 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif