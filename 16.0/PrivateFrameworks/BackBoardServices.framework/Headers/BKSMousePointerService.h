// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSMOUSEPOINTERSERVICE_H
#define BKSMOUSEPOINTERSERVICE_H

@class BSServiceConnection, NSMutableDictionary, BSCompoundAssertion, NSSet, NSString;
@protocol BKSMousePointerServiceServerToClientInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BKSMousePointerDevicePreferences.h"

@interface BKSMousePointerService : NSObject <BKSMousePointerServiceServerToClientInterface>

 {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    os_unfair_lock_s _lock;
    BSServiceConnection *_connection;
    NSMutableDictionary *_displayUUIDToPerDisplayInfo;
    BSCompoundAssertion *_deviceConnectionObservers;
    BSCompoundAssertion *_preferencesObservers;
    NSSet *_attachedDevices;
    BOOL _isObservingDeviceConnection;
    BOOL _isObservingPreferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) BKSMousePointerDevicePreferences *globalDevicePreferences;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)new;
+(id)sharedInstance;
-(id)_init;
-(id)_locked_infoForDisplayUUID:(id)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_locked_serverTarget;
-(id)_unlocked_serverTarget;
-(id)acquireButtonDownPointerRepositionAssertionForReason:(id)arg0 contextRelativePointerPosition:(id)arg1 onDisplay:(id)arg2 restrictingToPID:(int)arg3 ;
-(id)addPointerDeviceObserver:(id)arg0 ;
-(id)addPointerPreferencesObserver:(id)arg0 ;
-(id)init;
-(id)pointerSuppressionAssertionOnDisplay:(id)arg0 forReason:(id)arg1 withOptionsMask:(NSUInteger)arg2 ;
-(id)preferencesForDevice:(id)arg0 ;
-(id)requestGlobalMouseEventsForDisplay:(id)arg0 targetContextID:(unsigned int)arg1 ;
-(id)requestGlobalMouseEventsForDisplay:(id)arg0 targetContextID:(unsigned int)arg1 options:(id)arg2 ;
-(struct CGPoint )globalPointerPosition;
-(void)_activateServerConnection;
-(void)_locked_pointingDevicesDidChange:(id)arg0 ;
-(void)_locked_reactivateConnection;
-(void)_locked_sendCurrentAssertionParameters:(id)arg0 forDisplayUUID:(id)arg1 ;
-(void)_locked_setMousePointerDeviceObservationEnabled:(BOOL)arg0 ;
-(void)_locked_setMousePointerPreferencesObservationEnabled:(BOOL)arg0 ;
-(void)_locked_updateEventRoutesFromContext:(id)arg0 forDisplayUUID:(id)arg1 ;
-(void)_locked_updateObserver:(id)arg0 withPointingDevices:(id)arg1 ;
-(void)_locked_updateServerWithPointerDeviceObservationState;
-(void)_locked_updateServerWithPreferencesObservationState;
-(void)dealloc;
-(void)getHitTestContextsAtPoint:(id)arg0 withAdditionalContexts:(id)arg1 onDisplay:(id)arg2 withCompletion:(id)arg3 ;
-(void)pointerGlobalDevicePreferencesDidChange:(id)arg0 ;
-(void)pointingDevicesDidChange:(id)arg0 ;
-(void)setContextRelativePointerPosition:(id)arg0 onDisplay:(id)arg1 withAnimationParameters:(id)arg2 restrictingToPID:(int)arg3 ;
-(void)setContextRelativePointerPosition:(id)arg0 withInitialVelocity:(id)arg1 onDisplay:(id)arg2 withDecelerationRate:(CGFloat)arg3 restrictingToPID:(int)arg4 ;
-(void)setGlobalPointerPosition:(struct CGPoint )arg0 ;
-(void)setPointerPosition:(struct CGPoint )arg0 onDisplay:(id)arg1 withAnimationParameters:(id)arg2 ;
-(void)setPreferences:(id)arg0 forDevice:(id)arg1 ;


@end


#endif