// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC19CONTACTLESSREADERUI28TAPREMOTEALERTVIEWCONTROLLER_H
#define _TTC19CONTACTLESSREADERUI28TAPREMOTEALERTVIEWCONTROLLER_H

@class SBUIRemoteAlertServiceViewController;



@interface _TtC19ContactlessReaderUI28TapRemoteAlertViewController : SBUIRemoteAlertServiceViewController {
    ? viewModel;
    ? tapViewController;
    ? subscriptions;
    ? allowsMenuButtonDismissal;
    ? hideMenuIndicatorTimer;
    ? showStatusBar;
    ? walletSuppressor;
    ? proxCardSuppressor;
}


@property (nonatomic, readonly) NSUInteger preferredScreenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) NSInteger preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) NSUInteger supportedInterfaceOrientations;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)configureWithContext:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)handleHomeButtonPressed;
-(void)handlePanWithSender:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif