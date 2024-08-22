// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINTERACTIVESCREENSHOTGESTUREROOTWINDOW_H
#define SBINTERACTIVESCREENSHOTGESTUREROOTWINDOW_H

@class UIRootWindow;



@interface SBInteractiveScreenshotGestureRootWindow : UIRootWindow



+(BOOL)_isSecure;
-(BOOL)_appearsInLoupe;
-(BOOL)_canBecomeKeyWindow;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_usesWindowServerHitTesting;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif