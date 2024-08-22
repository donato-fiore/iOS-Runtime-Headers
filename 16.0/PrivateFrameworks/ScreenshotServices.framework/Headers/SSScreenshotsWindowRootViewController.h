// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSSCREENSHOTSWINDOWROOTVIEWCONTROLLER_H
#define SSSCREENSHOTSWINDOWROOTVIEWCONTROLLER_H

@class UIViewController;



@interface SSScreenshotsWindowRootViewController : UIViewController

@property (retain, nonatomic) UIViewController *managedViewController; // ivar: _managedViewController


-(BOOL)_canShowWhileLocked;
-(NSUInteger)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)getRotationContentSettings:(struct ? *)arg0 forWindow:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif