// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WATCHQUICKACTIONSSERVICES_H
#define WATCHQUICKACTIONSSERVICES_H

@class NSHashTable, NSString, AXUIClient;
@protocol AXUIClientDelegate, BLSBacklightStateObserving, WQAOverlayDataSource, WQAHostLifecycleObserver, AXUIService;

#import <Foundation/Foundation.h>

#import "WQAOverlayCoordinator.h"

@interface WatchQuickActionsServices : NSObject <AXUIClientDelegate, BLSBacklightStateObserving, WQAOverlayDataSource, WQAHostLifecycleObserver>

 {
    os_unfair_lock_s _quickActionHolderLock;
    NSHashTable *_lock_quickActionHolders;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AXUIService> *localService; // ivar: _localService
@property (readonly, nonatomic) WQAOverlayCoordinator *overlayCoordinator; // ivar: _overlayCoordinator
@property (readonly, nonatomic) AXUIClient *serverClient; // ivar: _serverClient
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_shouldObserveBacklightServicesForAppStateChange;
-(BOOL)shouldUseLocalServiceBundle;
-(id)_init;
-(id)_retrieveQuickActionForIdentifier:(id)arg0 ;
-(id)_sendMessageToServer:(id)arg0 withIdentifier:(NSInteger)arg1 ;
-(id)_sendMessageToServer:(id)arg0 withIdentifier:(NSInteger)arg1 error:(*id)arg2 ;
-(id)quickActionsForOverlayCoordinator:(id)arg0 ;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)_handleAppDidBecomeActiveNotification;
-(void)_handleAppDidEnterBackgroundNotification;
-(void)_local_removeQuickActionsWithIdentifiers:(id)arg0 ;
-(void)_performBlockAccessingQuickActionHolders:(id)arg0 ;
-(void)_sendAsyncMessageToServer:(id)arg0 withIdentifier:(NSInteger)arg1 completion:(id)arg2 ;
-(void)animateInstructionalBannerWithScaleFactor:(struct CGPoint )arg0 interstepDuration:(CGFloat)arg1 ;
-(void)backlight:(id)arg0 didCompleteUpdateToState:(NSInteger)arg1 forEvent:(id)arg2 ;
-(void)clearQuickActions;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)hideInstructionalBanner;
-(void)quickActionHostInvalidated:(id)arg0 ;
-(void)registerQuickActions:(id)arg0 ;
-(void)registerQuickActions:(id)arg0 startupCallback:(id)arg1 ;
-(void)requestFeedbackForQuickActionType:(NSInteger)arg0 ;
-(void)requestStartScrollWithDirection:(NSInteger)arg0 ;
-(void)requestStopScroll;
-(void)showInstructionalBannerWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)unregisterQuickActions:(id)arg0 ;
-(void)unregisterQuickActions:(id)arg0 startupCallback:(id)arg1 ;


@end


#endif