// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISNAPSHOTWINDOW_H
#define _UISNAPSHOTWINDOW_H



#import "UIWindow.h"

@interface _UISnapshotWindow : UIWindow



+(BOOL)_isSystemWindow;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_isSettingFirstResponder;
-(BOOL)canBecomeKeyWindow;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(void)_setFirstResponder:(id)arg0 ;


@end


#endif