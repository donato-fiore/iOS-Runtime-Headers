// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHARDWAREBUTTONSERVICE_H
#define SBHARDWAREBUTTONSERVICE_H

@class FBServiceClientAuthenticator, RBSProcessMonitor, NSMutableArray, BSMutableIntegerMap, NSString;
@protocol SBSystemServiceServerHardwareButtonDelegate;

#import <Foundation/Foundation.h>

#import "SBSystemServiceServer.h"

@interface SBHardwareButtonService : NSObject <SBSystemServiceServerHardwareButtonDelegate>

 {
    SBSystemServiceServer *_systemServiceServer;
    FBServiceClientAuthenticator *_serviceClientHomeHardwareButtonHintSuppressionEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientEventConsumerEntitlement;
    RBSProcessMonitor *_processMonitor;
    NSMutableArray *_observers;
    BSMutableIntegerMap *_eventMaskPerKind;
}


@property (retain, nonatomic) BSMutableIntegerMap *clientsByPID; // ivar: _clientsByPID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSMutableIntegerMap *registrationsByButtonKind; // ivar: _registrationsByButtonKind
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)_sendEvent:(NSInteger)arg0 buttonKind:(NSInteger)arg1 withPriority:(NSInteger)arg2 ;
-(BOOL)_sendEvent:(NSInteger)arg0 buttonKind:(NSInteger)arg1 withPriority:(NSInteger)arg2 continuation:(*id)arg3 ;
-(BOOL)consumeHeadsetPlayPauseSinglePressDownWithPriority:(NSInteger)arg0 continuation:(*id)arg1 ;
-(BOOL)consumeHeadsetPlayPauseSinglePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeHomeButtonDoublePressDownWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeHomeButtonLongPressWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeHomeButtonSinglePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeHomeButtonTriplePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeLockButtonDoublePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeLockButtonLongPressWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeLockButtonSinglePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeRingerSwitchToggleStateOffWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeRingerSwitchToggleStateOnWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeVolumeDecreaseButtonSinglePressDownWithPriority:(NSInteger)arg0 continuation:(*id)arg1 ;
-(BOOL)consumeVolumeDecreaseButtonSinglePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)consumeVolumeIncreaseButtonSinglePressDownWithPriority:(NSInteger)arg0 continuation:(*id)arg1 ;
-(BOOL)consumeVolumeIncreaseButtonSinglePressUpWithPriority:(NSInteger)arg0 ;
-(BOOL)hasConsumersForHomeButtonPresses;
-(BOOL)hasConsumersForHomeButtonSinglePress;
-(BOOL)hasConsumersForLockButtonDoublePressUp;
-(BOOL)hasConsumersForLockButtonPresses;
-(id)_applicationForClientInfo:(id)arg0 ;
-(id)_init;
-(id)_initWithSystemServiceServer:(id)arg0 ;
-(id)_mutableRegistrationsForButtonKind:(NSInteger)arg0 ;
-(id)_mutableRegistrationsForButtonKind:(NSInteger)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)_registrationsForButtonKind:(NSInteger)arg0 ;
-(id)addObserver:(id)arg0 ;
-(id)init;
-(void)_addRegistration:(id)arg0 toClient:(id)arg1 ;
-(void)_performButtonRegistrationChangeAndNotifyObservers:(id)arg0 ;
-(void)_process:(id)arg0 stateDidUpdate:(id)arg1 ;
-(void)_reconfigureProcessMonitor;
-(void)_reconfigureProcessMonitorForPredicates:(id)arg0 ;
-(void)_removeRegistration:(id)arg0 fromClient:(id)arg1 ;
-(void)_sendXPCMessageForEvent:(NSInteger)arg0 buttonKind:(NSInteger)arg1 priority:(NSInteger)arg2 toClient:(id)arg3 ;
-(void)_setSystemServiceClient:(id)arg0 buttonKind:(NSInteger)arg1 eventMask:(NSUInteger)arg2 priority:(NSInteger)arg3 ;
-(void)_updateAllButtonEventMasks;
-(void)_updateEventMasksForButtonKind:(NSInteger)arg0 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 acquireAssertionOfType:(NSInteger)arg2 forReason:(id)arg3 withCompletion:(id)arg4 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 fetchHapticTypeForButtonKind:(NSInteger)arg2 completion:(id)arg3 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 requestsHIDEvents:(BOOL)arg2 token:(id)arg3 forButtonKind:(NSInteger)arg4 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setEventMask:(NSUInteger)arg2 buttonKind:(NSInteger)arg3 priority:(NSInteger)arg4 ;
-(void)systemServiceServer:(id)arg0 client:(id)arg1 setHapticType:(NSInteger)arg2 buttonKind:(NSInteger)arg3 ;
-(void)systemServiceServer:(id)arg0 clientDidDisconnect:(id)arg1 ;


@end


#endif