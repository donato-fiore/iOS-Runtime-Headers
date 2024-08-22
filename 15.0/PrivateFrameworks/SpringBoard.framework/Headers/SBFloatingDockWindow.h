// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOATINGDOCKWINDOW_H
#define SBFLOATINGDOCKWINDOW_H



#import "SBMainScreenActiveInterfaceOrientationWindow.h"

@interface SBFloatingDockWindow : SBMainScreenActiveInterfaceOrientationWindow



+(BOOL)sb_autorotates;
+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)isContentHidden;
-(id)floatingDockRootViewController;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif