// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXFULLSCREENCANVASVIEWCONTROLLER_H
#define SXFULLSCREENCANVASVIEWCONTROLLER_H

@class UIViewController;
@protocol SXFullscreenCanvasViewControllerDelegate;



@interface SXFullscreenCanvasViewController : UIViewController

@property (weak, nonatomic) NSObject<SXFullscreenCanvasViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (nonatomic) NSInteger statusBarStyle; // ivar: _statusBarStyle


-(BOOL)canBecomeFirstResponder;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)preferredStatusBarUpdateAnimation;
-(id)keyCommands;
-(void)dismiss;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif