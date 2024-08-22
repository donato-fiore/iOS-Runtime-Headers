// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISNAPSHOTWINDOW_H
#define _UISNAPSHOTWINDOW_H



#import "UIWindow.h"

@interface _UISnapshotWindow : UIWindow

@property BOOL _extendsScreenSceneLifetime; // ivar: __extendsScreenSceneLifetime


+(BOOL)_isSystemWindow;
-(BOOL)_alwaysGetsContexts;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_isSettingFirstResponder;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(BOOL)canBecomeKeyWindow;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(void)_setFirstResponder:(id)arg0 ;


@end


#endif