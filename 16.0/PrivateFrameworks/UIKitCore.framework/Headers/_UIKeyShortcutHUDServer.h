// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYSHORTCUTHUDSERVER_H
#define _UIKEYSHORTCUTHUDSERVER_H

@class NSString;
@protocol _UIOServiceConnectionObserver, _UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIKeyShortcutHUDKeyListenerDelegate, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDViewController.h"
#import "_UIKeyShortcutHUDWindow.h"
#import "UIPhysicalKeyboardEvent.h"
#import "_UIKeyShortcutHUDModifierKeyListener.h"
#import "_UIKeyShortcutHUDServerSession.h"
#import "_UIEventDeferringOwnershipToken.h"

@interface _UIKeyShortcutHUDServer : NSObject <_UIOServiceConnectionObserver, _UIKeyShortcutHUDViewControllerDelegate, _UIKeyShortcutHUDWindowDelegate, _UIKeyShortcutHUDKeyListenerDelegate>

 {
    ? _flags;
}


@property (retain, nonatomic) NSObject<BSInvalidatable> *additionalEventDeferringRulesToken; // ivar: _additionalEventDeferringRulesToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger hudPresentationState;
@property (readonly, nonatomic) _UIKeyShortcutHUDViewController *hudVC;
@property (retain, nonatomic) _UIKeyShortcutHUDWindow *hudWindow; // ivar: _hudWindow
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent; // ivar: _lastKeyboardEvent
@property (nonatomic, getter=isModifierKeyDownForHUDDismissal) BOOL modifierKeyDownForHUDDismissal; // ivar: _modifierKeyDownForHUDDismissal
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener; // ivar: _modifierKeyListener
@property (retain, nonatomic) _UIKeyShortcutHUDServerSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIEventDeferringOwnershipToken *systemKeyboardShortcutOverlayEnvironmentEventDeferringToken; // ivar: _systemKeyboardShortcutOverlayEnvironmentEventDeferringToken


+(id)sharedHUDServer;
-(id)init;
-(void)_addPresentationObserversIfNeeded;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_dismissHUD;
-(void)_dismissHUDWithSelectedShortcut:(id)arg0 ;
-(void)_hardwareKeyboardAvailabilityChanged:(id)arg0 ;
-(void)_removePresentationObserversIfNeeded;
-(void)_sendResponse:(id)arg0 withSession:(id)arg1 ;
-(void)dismissHUDForConnection:(id)arg0 ;
-(void)handleKeyboardEvent:(id)arg0 ;
-(void)keyShortcutHUDViewController:(id)arg0 didSelectShortcut:(id)arg1 ;
-(void)keyShortcutHUDViewControllerDidBeginTypeAheadSearch:(id)arg0 ;
-(void)keyShortcutHUDViewControllerDidRequestDismissal:(id)arg0 ;
-(void)keyShortcutHUDWindowDidResignKey:(id)arg0 ;
-(void)keyShortcutHUDWindowSceneDidResignKeyboardFocus:(id)arg0 ;
-(void)modifierKeyListener:(id)arg0 didUpdateModifierFlag:(NSInteger)arg1 ;
-(void)modifierKeyListenerDidPressNonModifierKey:(id)arg0 ;
-(void)presentHUDWithConfiguration:(id)arg0 inWindowScene:(id)arg1 forConnection:(id)arg2 completionHandler:(id)arg3 ;
-(void)releaseInitialHeldModifierFlag:(NSInteger)arg0 forConnection:(id)arg1 ;
-(void)serviceConnectionDidInvalidate:(id)arg0 ;


@end


#endif