// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TFBETAAPPLAUNCHSCREENVIEWCONTROLLER_H
#define TFBETAAPPLAUNCHSCREENVIEWCONTROLLER_H

@class UIViewController, UIBarButtonItem, NSString;
@protocol TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView, TFBetaAppLaunchScreenHost;


#import "TFBetaAppLaunchScreenView.h"
#import "TFBetaAppLaunchPresenter.h"

@interface TFBetaAppLaunchScreenViewController : UIViewController <TFBetaAppLaunchPresenterView, TFHostedBetaAppLaunchScreenView>



@property (readonly, nonatomic) UIBarButtonItem *cancelBarButtonItem; // ivar: _cancelBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<TFBetaAppLaunchScreenHost> *launchScreenHost; // ivar: _launchScreenHost
@property (retain, nonatomic) TFBetaAppLaunchScreenView *launchScreenView; // ivar: _launchScreenView
@property (readonly, nonatomic) TFBetaAppLaunchPresenter *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(NSInteger)_currentInterfaceOrientation;
-(SEL)_selectorForPresentorViewEvent:(NSUInteger)arg0 ;
-(id)_fadeTransition;
-(id)_pushTransition;
-(id)initWithPresenter:(id)arg0 ;
// -(void)_animateLaunchScreenViewWithUpdateBlock:(id)arg0 transition:(unk)arg1  ;
-(void)_didPressExitLaunchScreenButton;
-(void)_didPressNavigationItemCancel;
-(void)_didPressOpenHowToSupportLinkButton;
-(void)_didPressShowHowToButton;
-(void)_updateForContainmentInHostEnvironment:(id)arg0 ;
-(void)_updateNavigationBarForHostTraitCollection:(id)arg0 ;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)launchScreenHost:(id)arg0 traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)showHowToWithTitle:(id)arg0 subtitle:(id)arg1 screenshotImageDict:(id)arg2 primaryButtonTitle:(id)arg3 primaryButtonEvent:(NSUInteger)arg4 secondaryButtonTitle:(id)arg5 secondaryButtonEvent:(NSUInteger)arg6 animated:(BOOL)arg7 ;
-(void)showLoadingAnimated:(BOOL)arg0 ;
-(void)showTestNotesWithTitle:(id)arg0 lockup:(id)arg1 testNotesTitle:(id)arg2 testNotesText:(id)arg3 primaryButtonTitle:(id)arg4 primaryButtonEvent:(NSUInteger)arg5 animated:(BOOL)arg6 fetchingOnImageFetcher:(id)arg7 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewSafeAreaInsetsDidChange;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif