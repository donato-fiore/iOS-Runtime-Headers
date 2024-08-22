// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDWINDOW_H
#define _UIKEYSHORTCUTHUDWINDOW_H

@class NSArray;
@protocol _UIKeyShortcutHUDWindowDelegate;


#import "UIWindow.h"

@interface _UIKeyShortcutHUDWindow : UIWindow

@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDWindowDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *hudKeyCommands; // ivar: _hudKeyCommands


+(BOOL)_isSystemWindow;
-(BOOL)_wantsFocusEngine;
-(CGFloat)_adjustedWindowLevelFromLevel:(CGFloat)arg0 ;
-(id)_roleHint;
-(id)initWithWindowScene:(id)arg0 ;
-(id)keyCommands;
-(void)_hudWindowSceneDidResignTargetOfKeyboardEventDeferringEnvironment:(id)arg0 ;
-(void)resignKeyWindow;


@end


#endif