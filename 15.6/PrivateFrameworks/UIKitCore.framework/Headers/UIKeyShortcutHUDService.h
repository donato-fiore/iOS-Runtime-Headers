// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKEYSHORTCUTHUDSERVICE_H
#define UIKEYSHORTCUTHUDSERVICE_H

@class NSString, NSArray, NSValue, NSTimer;
@protocol _UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIKeyShortcutHUDKeyListenerDelegate;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDWindow.h"
#import "UIPhysicalKeyboardEvent.h"
#import "_UIKeyShortcutHUDModifierKeyListener.h"
#import "_UIKeyShortcutHUDConfiguration.h"

@interface UIKeyShortcutHUDService : NSObject <_UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIKeyShortcutHUDKeyListenerDelegate>

 {
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger hudPresentationState;
@property (readonly, nonatomic, getter=isHUDVisible) BOOL hudVisible;
@property (retain, nonatomic) _UIKeyShortcutHUDWindow *hudWindow; // ivar: _hudWindow
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent; // ivar: _lastKeyboardEvent
@property (nonatomic, getter=isModifierKeyDownForHUDDismissal) BOOL modifierKeyDownForHUDDismissal; // ivar: _modifierKeyDownForHUDDismissal
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener; // ivar: _modifierKeyListener
@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *scheduledHUDConfiguration; // ivar: _scheduledHUDConfiguration
@property (retain, nonatomic) NSArray *scheduledHUDHoverGestureRecognizers; // ivar: _scheduledHUDHoverGestureRecognizers
@property (retain, nonatomic) NSValue *scheduledHUDInitialPointerLocation; // ivar: _scheduledHUDInitialPointerLocation
@property (retain, nonatomic) NSTimer *scheduledHUDTimer; // ivar: _scheduledHUDTimer
@property (readonly) Class superclass;


+(id)sharedHUDService;
-(BOOL)_canSummonHUDWithModifierFlag:(NSInteger)arg0 ;
-(BOOL)_isHUDAllowedForConfiguration:(id)arg0 ;
-(BOOL)_isHUDAllowedOverCurrentWindow;
-(BOOL)_isHUDAllowedToBePresentedForPresentationState:(NSInteger)arg0 ;
-(BOOL)_isHUDAllowedToBeScheduledForPresentationState:(NSInteger)arg0 ;
-(BOOL)_isHUDSupported;
-(NSInteger)_shortcutTypeForHUDPresentedWithModifierFlag:(NSInteger)arg0 ;
-(id)init;
-(void)_addPresentationObserversIfNeeded;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_didTakeScreenshot:(id)arg0 ;
-(void)_discardScheduledHUDBookkeeping;
-(void)_handleScheduledHUDPointerHover:(id)arg0 ;
-(void)_handleSystemHUDPresentationDarwinNotification;
-(void)_handleSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
-(void)_hardwareKeyboardAvailabilityChanged:(id)arg0 ;
-(void)_registerForSystemHUDPresentationDarwinNotifications;
-(void)_registerForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
-(void)_removePresentationObserversIfNeeded;
-(void)_sendSystemHUDPresentationDarwinNotificationIfNeeded;
-(void)_sendSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
-(void)_unregisterForSystemHUDPresentationDarwinNotifications;
-(void)_unregisterForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
-(void)beginSearching;
-(void)cancelScheduledHUDPresentationIfNeeded;
-(void)dealloc;
-(void)dismissHUDIfNeeded;
-(void)dismissHUDIfNeededWithCompletionHandler:(id)arg0 ;
-(void)dismissOrCancelHUDPresentationIfNeeded;
-(void)handleKeyboardEvent:(id)arg0 ;
-(void)keyShortcutHUDViewController:(id)arg0 didSelectKeyCommand:(id)arg1 withOriginalTarget:(id)arg2 ;
-(void)keyShortcutHUDViewControllerDidBeginTypeAheadSearch:(id)arg0 ;
-(void)keyShortcutHUDViewControllerDidRequestDismissal:(id)arg0 ;
-(void)keyShortcutHUDWindowDidResignKey:(id)arg0 ;
-(void)keyShortcutHUDWindowSceneDidResignKeyboardFocus:(id)arg0 ;
-(void)modifierKeyListener:(id)arg0 didUpdateModifierFlag:(NSInteger)arg1 withEvent:(id)arg2 ;
-(void)modifierKeyListenerDidPressNonModifierKey:(id)arg0 ;
-(void)presentHUD;
-(void)presentHUDIfAllowedWithConfiguration:(id)arg0 ;
-(void)presentHUDWithConfiguration:(id)arg0 ;
-(void)preventUnintendedSystemHUDPresentationIfNeeded;
-(void)scheduleHUDPresentation;


@end


#endif