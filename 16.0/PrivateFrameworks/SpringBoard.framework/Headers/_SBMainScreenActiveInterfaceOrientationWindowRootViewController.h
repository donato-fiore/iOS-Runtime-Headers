// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBMAINSCREENACTIVEINTERFACEORIENTATIONWINDOWROOTVIEWCONTROLLER_H
#define _SBMAINSCREENACTIVEINTERFACEORIENTATIONWINDOWROOTVIEWCONTROLLER_H

@class SBFTouchPassThroughViewController, UIViewController;



@interface _SBMainScreenActiveInterfaceOrientationWindowRootViewController : SBFTouchPassThroughViewController

@property (weak, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldAutorotate;
-(id)_viewControllerForSupportedInterfaceOrientationsWithDismissCheck:(BOOL)arg0 ;


@end


#endif