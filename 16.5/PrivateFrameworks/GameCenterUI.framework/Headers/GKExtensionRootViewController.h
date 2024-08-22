// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKEXTENSIONROOTVIEWCONTROLLER_H
#define GKEXTENSIONROOTVIEWCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint, UIVisualEffectView, UINavigationController;
@protocol GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface, UINavigationControllerDelegate;



@interface GKExtensionRootViewController : UIViewController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface, UINavigationControllerDelegate>



@property (nonatomic) BOOL adjustTopConstraint; // ivar: _adjustTopConstraint
@property (nonatomic) BOOL alwaysShowDoneButton; // ivar: _alwaysShowDoneButton
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSLayoutConstraint *effectBottomConstraint; // ivar: _effectBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *effectTopConstraint; // ivar: _effectTopConstraint
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (nonatomic) BOOL hasInitialData; // ivar: _hasInitialData
@property (readonly) NSUInteger hash;
@property (nonatomic) int hostPID; // ivar: _hostPID
@property (nonatomic) NSInteger hostUserInterfaceIdiom; // ivar: _hostUserInterfaceIdiom
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (nonatomic) BOOL requiresNavigationController; // ivar: _requiresNavigationController
@property (nonatomic) CGFloat statusBarHeight; // ivar: _statusBarHeight
@property (readonly) Class superclass;


-(BOOL)_useBackdropViewForWindowBackground;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shouldAddScrollToTopView;
-(id)hostObjectProxy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct UIEdgeInsets )_gkAdditionalSafeAreaInset;
-(void)addDoneButtonToViewController:(id)arg0 ;
-(void)addVisualEffectViewForView:(id)arg0 ;
-(void)clientDidCancel;
-(void)clientDidFinish;
-(void)clientWillTerminate;
-(void)configureContentViewController;
-(void)constructContentViewController;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)donePressed:(id)arg0 ;
-(void)extensionIsCanceling;
-(void)extensionIsFinishing;
-(void)finish;
-(void)logOnceGameControllerUsedInGameLayer;
-(void)messageFromClient:(id)arg0 ;
-(void)messageFromExtension:(id)arg0 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)refreshContentsForDataType:(unsigned int)arg0 userInfo:(id)arg1 ;
-(void)scrollToTopPressed:(id)arg0 ;
-(void)sendMessageToClient:(id)arg0 ;
-(void)setInitialState:(id)arg0 withReply:(id)arg1 ;
-(void)setToDarkBackground;
-(void)setToLightBackground;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;
-(void)setup;
-(void)setupVisualEffects;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateScrollToTopViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif