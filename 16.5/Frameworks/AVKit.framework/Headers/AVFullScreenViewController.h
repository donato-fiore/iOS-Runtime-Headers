// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFULLSCREENVIEWCONTROLLER_H
#define AVFULLSCREENVIEWCONTROLLER_H

@class UIViewController, UIView, UIViewController<AVFullScreenViewControllerDelegate>;


#import "AVFullScreenViewController.h"

@interface AVFullScreenViewController : UIViewController

@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController; // ivar: _associatedFullScreenViewController
@property (weak, nonatomic) UIView *contentView; // ivar: _contentView
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController; // ivar: _sourceFullScreenViewController


-(BOOL)_canShowWhileLocked;
-(BOOL)avkit_isEffectivelyFullScreen;
-(BOOL)canBecomeFirstResponder;
-(BOOL)modalPresentationCapturesStatusBarAppearance;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(BOOL)prefersStatusBarHidden;
-(BOOL)shouldAutorotate;
-(NSInteger)preferredInterfaceOrientationForPresentation;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredWhitePointAdaptivityStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)keyCommands;
-(id)targetForAction:(SEL)arg0 withSender:(id)arg1 ;
-(void)attachContentView;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillMoveToWindow:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif