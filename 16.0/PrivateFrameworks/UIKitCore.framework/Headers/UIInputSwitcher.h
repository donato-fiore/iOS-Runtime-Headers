// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINPUTSWITCHER_H
#define UIINPUTSWITCHER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "UIDelayedAction.h"
#import "UIInputSwitcherView.h"

@interface UIInputSwitcher : NSObject {
    UIDelayedAction *m_showSwitcherDelay;
    UIDelayedAction *m_hideSwitcherDelay;
    int m_state;
    UIInputSwitcherView *m_switcherView;
    CGFloat m_lastGlobeKeyUpTime;
    NSString *_newMode;
}


@property (nonatomic) BOOL dismissingEmojiPopover; // ivar: _dismissingEmojiPopover
@property (copy, nonatomic) NSString *loadedIdentifier; // ivar: _loadedIdentifier
@property (nonatomic) BOOL usingCapsLockLanguageSwitch; // ivar: _usingCapsLockLanguageSwitch


+(id)activeInstance;
+(id)sharedInstance;
-(BOOL)handleEmojiPicker;
-(BOOL)handleGlobeKeyEvent:(id)arg0 switcherIsVisible:(BOOL)arg1 ;
-(BOOL)handleModifiersChangedEvent:(id)arg0 ;
-(BOOL)handleNavigationEvent:(id)arg0 ;
-(BOOL)handleSwitchCommand:(BOOL)arg0 ;
-(BOOL)handleSwitchCommand:(BOOL)arg0 withHUD:(BOOL)arg1 withDelay:(BOOL)arg2 ;
-(BOOL)handleSwitchingKeyEvent:(id)arg0 ;
-(BOOL)isVisible;
-(BOOL)isVisibleOrHiding;
-(BOOL)needsFullHUD;
-(BOOL)switchMode:(id)arg0 withHUD:(BOOL)arg1 withDelay:(BOOL)arg2 ;
-(BOOL)switchMode:(id)arg0 withHUD:(BOOL)arg1 withDelay:(BOOL)arg2 fromCapsLock:(BOOL)arg3 ;
-(id)init;
-(id)inputModeIdentifierWithNextFlag:(BOOL)arg0 ;
-(void)_showSwitcherViewAsHUD;
-(void)cancelHideSwitcherTimer;
-(void)cancelShowSwitcherTimer;
-(void)cleanUpAfterHide;
-(void)clearHideSwitcherTimer;
-(void)clearShowSwitcherTimer;
-(void)dealloc;
-(void)handleRotate:(id)arg0 ;
-(void)hideSwitcher;
-(void)hideSwitcherIfNeeded;
-(void)showSwitcherShouldAutoHide:(BOOL)arg0 ;
-(void)showSwitcherWithAutoHide;
-(void)showSwitcherWithoutAutoHide;
-(void)touchHideSwitcherTimer;
-(void)touchShowSwitcherTimer;
-(void)updateHardwareLayout;


@end


#endif