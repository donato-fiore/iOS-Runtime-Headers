// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBOLDFLOATINGDOCKWINDOW_H
#define SBOLDFLOATINGDOCKWINDOW_H



#import "SBMainScreenActiveInterfaceOrientationWindow.h"

@interface SBOldFloatingDockWindow : SBMainScreenActiveInterfaceOrientationWindow



+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isContentHidden;
-(BOOL)sb_preventStatusBarEffectivelyHiddenForContentOverlayInsets;
-(id)floatingDockRootViewController;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif