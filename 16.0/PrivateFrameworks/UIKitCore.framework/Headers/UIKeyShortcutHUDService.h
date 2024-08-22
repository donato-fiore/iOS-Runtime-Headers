// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIKEYSHORTCUTHUDSERVICE_H
#define UIKEYSHORTCUTHUDSERVICE_H

@class NSString, NSArray, NSValue, NSTimer;
@protocol _UIOverlayServiceDelegate, _UIKeyShortcutHUDKeyListenerDelegate, UIKeyShortcutHUDMetricsProvider, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDDismissalResponse.h"
#import "_UIKeyShortcutHUDClientSession.h"
#import "UIPhysicalKeyboardEvent.h"
#import "_UIKeyShortcutHUDModifierKeyListener.h"
#import "_UIOverlayService.h"
#import "_UIKeyShortcutHUDConfiguration.h"

@interface UIKeyShortcutHUDService : NSObject <_UIOverlayServiceDelegate, _UIKeyShortcutHUDKeyListenerDelegate, UIKeyShortcutHUDMetricsProvider>

 {
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UIKeyShortcutHUDDismissalResponse *deferredResponse; // ivar: _deferredResponse
@property (retain, nonatomic) _UIKeyShortcutHUDClientSession *deferredResponseSession; // ivar: _deferredResponseSession
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deferredResponseTimer; // ivar: _deferredResponseTimer
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger hudPresentationState;
@property (retain, nonatomic) UIPhysicalKeyboardEvent *lastKeyboardEvent; // ivar: _lastKeyboardEvent
@property (retain, nonatomic) NSObject<UIKeyShortcutHUDMetricsProvider> *metricsProvider; // ivar: _metricsProvider
@property (readonly, nonatomic) _UIKeyShortcutHUDModifierKeyListener *modifierKeyListener; // ivar: _modifierKeyListener
@property (retain, nonatomic) _UIOverlayService *overlayService; // ivar: _overlayService
@property (retain, nonatomic) _UIKeyShortcutHUDConfiguration *scheduledHUDConfiguration; // ivar: _scheduledHUDConfiguration
@property (retain, nonatomic) NSArray *scheduledHUDHoverGestureRecognizers; // ivar: _scheduledHUDHoverGestureRecognizers
@property (retain, nonatomic) NSValue *scheduledHUDInitialPointerLocation; // ivar: _scheduledHUDInitialPointerLocation
@property (retain, nonatomic) NSTimer *scheduledHUDTimer; // ivar: _scheduledHUDTimer
@property (retain, nonatomic) _UIKeyShortcutHUDClientSession *session; // ivar: _session
@property (readonly) Class superclass;


+(BOOL)_isOOPFeatureEnabled;
+(id)_existingHUDService;
+(id)sharedHUDService;
-(BOOL)_canSummonHUDWithModifierFlag:(NSInteger)arg0 ;
-(BOOL)_isHUDAllowedForConfiguration:(id)arg0 ;
-(BOOL)_isHUDAllowedForCurrentResponder;
-(BOOL)_isHUDAllowedOverCurrentWindow;
-(BOOL)_isHUDAllowedToAppearForProcess;
-(BOOL)_isHUDAllowedToBePresentedForPresentationState:(NSInteger)arg0 ;
-(BOOL)_isHUDAllowedToBeScheduledForPresentationState:(NSInteger)arg0 ;
-(BOOL)_isHUDSupportedOnPlatform;
-(id)init;
-(id)metricsForWindow:(id)arg0 ;
-(void)_addPresentationObserversIfNeeded;
-(void)_applicationDidBeginIgnoringInteractionEvents:(id)arg0 ;
-(void)_applicationWillResignActive:(id)arg0 ;
-(void)_cancelAllScheduledHUDPresentationsIfNeeded;
-(void)_didTakeScreenshot:(id)arg0 ;
-(void)_discardScheduledHUDBookkeeping;
-(void)_handleCancelScheduledHUDPresentationDarwinNotification;
-(void)_handleDeferredDismissalResponse:(id)arg0 ;
-(void)_handleKeyCommandFromResponse:(id)arg0 withSession:(id)arg1 ;
-(void)_handleScheduledHUDPointerHover:(id)arg0 ;
-(void)_handleSystemHUDPresentationDarwinNotification;
-(void)_handleSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
-(void)_hardwareKeyboardAvailabilityChanged:(id)arg0 ;
-(void)_registerForScheduledHUDCancellationDarwinNotifications;
-(void)_registerForSystemHUDPresentationDarwinNotifications;
-(void)_registerForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
-(void)_removePresentationObserversIfNeeded;
-(void)_requestHUDDismissal;
-(void)_requestHUDPresentationIfAllowedWithUnpreparedConfiguration:(id)arg0 ;
-(void)_requestHUDPresentationWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestHUDPresentationWithUnpreparedConfiguration:(id)arg0 ;
-(void)_sendSystemHUDPresentationDarwinNotificationIfNeeded;
-(void)_sendSystemHUDPreventUnintendedPresentationDarwinNotificationIfNeeded;
-(void)_unregisterForScheduledHUDCancellationDarwinNotifications;
-(void)_unregisterForSystemHUDPresentationDarwinNotifications;
-(void)_unregisterForSystemHUDPreventUnintendedPresentationDarwinNotificationsIfNeeded;
-(void)cancelScheduledHUDPresentationIfNeeded;
-(void)dealloc;
-(void)dismissAllNonSystemHUDs;
-(void)dismissOrCancelHUDPresentationIfNeeded;
-(void)handleKeyboardEvent:(id)arg0 ;
-(void)handleTouchEvent:(id)arg0 ;
-(void)keyShortcutHUDDidDismissWithResponse:(id)arg0 toOverlayService:(id)arg1 ;
-(void)modifierKeyListener:(id)arg0 didUpdateModifierFlag:(NSInteger)arg1 ;
-(void)modifierKeyListenerDidPressNonModifierKey:(id)arg0 ;
-(void)overlayServiceDidInvalidate:(id)arg0 ;
-(void)presentHUD;
-(void)preventUnintendedSystemHUDPresentationIfNeeded;
-(void)requestHUDPresentationIntoSearchMode;
-(void)scheduleHUDPresentation;


@end


#endif