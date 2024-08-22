// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCONTROLCENTERWINDOW_H
#define SBCONTROLCENTERWINDOW_H



#import "SBIgnoredForAutorotationSecureWindow.h"

@interface SBControlCenterWindow : SBIgnoredForAutorotationSecureWindow



+(id)_traitsArbiterOrientationActuationRole;
-(BOOL)_canBecomeKeyWindow;
-(id)_hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 windowServerHitTestWindow:(id)arg2 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)window;


@end


#endif