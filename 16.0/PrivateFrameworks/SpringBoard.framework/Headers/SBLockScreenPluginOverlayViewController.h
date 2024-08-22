// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLOCKSCREENPLUGINOVERLAYVIEWCONTROLLER_H
#define SBLOCKSCREENPLUGINOVERLAYVIEWCONTROLLER_H



#import "SBLockOverlayViewController.h"
#import "SBLockScreenPlugin.h"

@interface SBLockScreenPluginOverlayViewController : SBLockOverlayViewController {
    SBLockScreenPlugin *_plugin;
}




+(BOOL)_pluginNeedsOverlay:(id)arg0 ;
-(id)_newOverlayView;
-(id)initWithPlugin:(id)arg0 ;
-(void)loadView;


@end


#endif