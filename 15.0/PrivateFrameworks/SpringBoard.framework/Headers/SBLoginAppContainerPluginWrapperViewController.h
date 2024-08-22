// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLOGINAPPCONTAINERPLUGINWRAPPERVIEWCONTROLLER_H
#define SBLOGINAPPCONTAINERPLUGINWRAPPERVIEWCONTROLLER_H

@class UIViewController;


#import "SBLockScreenPluginOverlayViewController.h"
#import "SBLoginAppContainerOverlayWrapperView.h"
#import "SBLoginAppContainerPluginWrapperView.h"
#import "SBLockScreenPlugin.h"

@interface SBLoginAppContainerPluginWrapperViewController : UIViewController {
    SBLockScreenPluginOverlayViewController *_overlayController;
    SBLoginAppContainerOverlayWrapperView *_overlayWrapperView;
    SBLoginAppContainerPluginWrapperView *_containerView;
}


@property (readonly, retain, nonatomic) SBLockScreenPlugin *plugin; // ivar: _plugin


-(BOOL)handleVolumeDownButtonPress;
-(BOOL)handleVolumeUpButtonPress;
-(id)initWithPlugin:(id)arg0 ;
-(void)loadView;


@end


#endif