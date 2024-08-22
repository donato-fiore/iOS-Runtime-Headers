// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUIACTIVEWINDOW_H
#define AXUIACTIVEWINDOW_H



#import "AXUIWindow.h"

@interface AXUIActiveWindow : AXUIWindow



-(BOOL)_accessibilityWindowVisible;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;


@end


#endif