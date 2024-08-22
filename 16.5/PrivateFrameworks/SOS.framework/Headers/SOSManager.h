// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOSMANAGER_H
#define SOSMANAGER_H

@class NSXPCConnection, NSString, NSMapTable;
@protocol SOSInternalClientProtocol, SOSClientProtocol, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "SOSButtonPressState.h"

@interface SOSManager : NSObject <SOSInternalClientProtocol, SOSClientProtocol>

 {
    BOOL _sendingLocationUpdate;
    NSInteger _sosInitiationState;
    NSInteger _sosInteractiveState;
    SOSButtonPressState *_sosButtonPressState;
    NSObject<OS_dispatch_semaphore> *_initialStateSemaphore;
}


@property (nonatomic, getter=isAllowedToMessageSOSContacts) BOOL allowedToMessageSOSContacts;
@property (nonatomic, getter=isAutomaticCallCountdownEnabled) BOOL automaticCallCountdownEnabled;
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (nonatomic) int connectionRequestNotificationToken; // ivar: _connectionRequestNotificationToken
@property (copy, nonatomic) SOSButtonPressState *currentSOSButtonPressState;
@property (nonatomic) NSInteger currentSOSInitiationState;
@property (nonatomic) NSInteger currentSOSInteractiveState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *observerToQueue; // ivar: _observerToQueue
@property (readonly) Class superclass;


+(BOOL)deviceSupportsSOS;
+(BOOL)shouldTriggerSOS;
+(id)sharedInstance;
+(void)notifySOSTriggerMechanismChanged;
+(void)triggerSOS;
+(void)triggerSOSWithCompletion:(id)arg0 ;
+(void)triggerSOSWithUUID:(id)arg0 completion:(id)arg1 ;
+(void)triggerSOSWithUUID:(id)arg0 triggerMechanism:(NSInteger)arg1 completion:(id)arg2 ;
-(BOOL)isSendingLocationUpdate;
-(BOOL)longPressTriggersEmergencySOS;
-(id)init;
-(void)_resetStateWithCompletion:(id)arg0 ;
-(void)_waitForInitialState;
-(void)addObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)didDismissClientSOSBeforeSOSCall:(NSInteger)arg0 ;
-(void)didDismissSOSBeforeSOSCall:(NSInteger)arg0 ;
-(void)didUpdateSOSStatus:(id)arg0 ;
-(void)dismissClientSOSWithCompletion:(id)arg0 ;
-(void)dismissSOSWithCompletion:(id)arg0 ;
-(void)mostRecentLocationSentWithCompletion:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setLongPressTriggersEmergencySOS:(BOOL)arg0 ;
-(void)setSendingLocationUpdate:(BOOL)arg0 ;
-(void)startSendingLocationUpdateForReason:(NSInteger)arg0 withCompletion:(id)arg1 ;
-(void)startSendingLocationUpdateWithCompletion:(id)arg0 ;
-(void)stopSendingLocationUpdate;
-(void)updateClientCurrentSOSButtonPressState:(id)arg0 ;
-(void)updateClientCurrentSOSInitiationState:(NSInteger)arg0 ;
-(void)updateClientCurrentSOSInteractiveState:(NSInteger)arg0 ;
-(void)willStartSendingLocationUpdate;


@end


#endif