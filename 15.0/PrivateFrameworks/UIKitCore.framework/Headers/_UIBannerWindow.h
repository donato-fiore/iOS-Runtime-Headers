// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBANNERWINDOW_H
#define _UIBANNERWINDOW_H



#import "UIWindow.h"

@interface _UIBannerWindow : UIWindow



+(BOOL)_isSystemWindow;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(BOOL)_shouldForceTraitPropagationThroughHierarchy;
-(id)_roleHint;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;


@end


#endif