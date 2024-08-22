// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKREMOTEVIEWSERVICECONTROLLER_H
#define GKREMOTEVIEWSERVICECONTROLLER_H

@class UIRemoteViewController, NSString, NSMutableDictionary, GKGame, UIColor;
@protocol GKExtensionHostProtocol;


#import "GKHostedViewController.h"

@interface GKRemoteViewServiceController : UIRemoteViewController <GKExtensionHostProtocol>



@property (copy, nonatomic) id *blockToPerformAfterViewDidAppear; // ivar: _blockToPerformAfterViewDidAppear
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetRemoteGame; // ivar: _didSetRemoteGame
@property (retain, nonatomic) NSMutableDictionary *dirtyProperties; // ivar: _dirtyProperties
@property (retain, nonatomic) GKGame *game; // ivar: _game
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) GKHostedViewController *managingViewController; // ivar: _managingViewController
@property (retain, nonatomic) UIColor *previousStatusBarColor; // ivar: _previousStatusBarColor
@property (readonly, nonatomic) BOOL serviceNeedsCurrentGame;
@property (readonly, nonatomic) BOOL serviceNeedsLocalPlayer;
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewDidAppear; // ivar: _viewDidAppear


+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(BOOL)_dismissSelfAfterGettingShouldCancel;
-(BOOL)_dismissSelfAfterGettingShouldFinish;
-(BOOL)serviceNeedsFriendCode;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(NSInteger)_desiredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)observedKeyPaths;
-(void)_performBlockAfterViewDidAppearIfNeeded;
-(void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg0 ;
-(void)dealloc;
-(void)messageFromExtension:(id)arg0 ;
-(void)nudge;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)populateInitialStateForRemoteView:(id)arg0 ;
-(void)readyToPresentInController:(id)arg0 ;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setupRemoteView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif