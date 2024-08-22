// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPREVIEWINTERACTIONTRANSITIONWINDOW_H
#define _UIPREVIEWINTERACTIONTRANSITIONWINDOW_H



#import "UIWindow.h"

@interface _UIPreviewInteractionTransitionWindow : UIWindow



+(BOOL)_isSystemWindow;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg0 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_isSettingFirstResponder;
-(BOOL)canBecomeKeyWindow;
-(BOOL)isInternalWindow;
-(id)_roleHint;
-(id)init;
-(void)_setFirstResponder:(id)arg0 ;


@end


#endif