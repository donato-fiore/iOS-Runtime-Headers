// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKHOSTEDVIEWCONTROLLER_H
#define GKHOSTEDVIEWCONTROLLER_H

@class UIViewController, GKGame;


#import "GKRemoteViewServiceController.h"

@interface GKHostedViewController : UIViewController

@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (nonatomic) BOOL gkIsDisappearing; // ivar: _gkIsDisappearing
@property (nonatomic) BOOL isRequestingRemoteViewController; // ivar: _isRequestingRemoteViewController
@property (nonatomic) BOOL presentingRemoteViewController; // ivar: _presentingRemoteViewController
@property (retain, nonatomic) GKRemoteViewServiceController *remoteViewController; // ivar: _remoteViewController
@property (copy, nonatomic) id *remoteViewReadyHandler; // ivar: _remoteViewReadyHandler
@property (nonatomic) BOOL shouldPresentRemoteViewController; // ivar: _shouldPresentRemoteViewController


-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_presentingViewController;
-(id)hostSideViewControllerClassName;
-(id)init;
-(id)serviceSideViewControllerClassName;
-(void)didGetRemoteViewController;
-(void)didReceiveMemoryWarning;
-(void)dismissModalViewControllerAnimated:(BOOL)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)donePressed:(id)arg0 ;
-(void)presentRemoteViewControllerIfNeeded;
-(void)requestRemoteViewControllerIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif