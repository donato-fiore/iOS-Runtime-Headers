// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENEORIENTATIONFOLLOWINGWINDOWROOTVIEWCONTROLLER_H
#define SBSCENEORIENTATIONFOLLOWINGWINDOWROOTVIEWCONTROLLER_H

@class UIViewController, UIView;


#import "SBIsolatedSceneOrientationFollowingWrapperViewController.h"

@interface SBSceneOrientationFollowingWindowRootViewController : UIViewController

@property (weak, nonatomic) SBIsolatedSceneOrientationFollowingWrapperViewController *hostingViewController; // ivar: _hostingViewController
@property (retain, nonatomic) UIView *overlayContentView; // ivar: _overlayContentView


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)initWithHostingViewController:(id)arg0 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif