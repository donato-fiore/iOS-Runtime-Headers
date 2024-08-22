// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREHOSTWINDOW_H
#define SBINTERACTIVESCREENSHOTGESTUREHOSTWINDOW_H



#import "SBIgnoredForAutorotationSecureWindow.h"

@interface SBInteractiveScreenshotGestureHostWindow : SBIgnoredForAutorotationSecureWindow



+(BOOL)sb_autorotates;
-(BOOL)_canBecomeKeyWindow;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif