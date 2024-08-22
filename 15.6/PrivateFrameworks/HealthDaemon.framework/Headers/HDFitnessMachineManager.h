// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFITNESSMACHINEMANAGER_H
#define HDFITNESSMACHINEMANAGER_H

@class NSMutableArray, HKSynchronousObserverSet, NSString, NSDate;
@protocol HDFitnessMachinePairingManagerDelegate, HDFitnessMachineStateTimersDelegate, OS_dispatch_queue, HDFitnessMachineConnectionInitiatorProtocol, HDMetricsCollector;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDFitnessMachineDataCollector.h"
#import "HDFitnessMachinePairingManager.h"
#import "HDFitnessMachineSession.h"
#import "HDHealthServiceManager.h"
#import "HDFitnessMachineStateTimers.h"
#import "HDFitnessMachineAnalyticsCollector.h"
#import "HDFitnessMachineDataProducer.h"

@interface HDFitnessMachineManager : NSObject <HDFitnessMachinePairingManagerDelegate, HDFitnessMachineStateTimersDelegate>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_connections;
    HDFitnessMachineDataCollector *_collector;
    HDFitnessMachinePairingManager *_pairingManager;
    HDFitnessMachineSession *_fitnessMachineSession;
    BOOL _shouldReconnect;
    BOOL _resetInProgress;
    NSMutableArray *_characteristicDataBuffer;
    HKSynchronousObserverSet *_fitnessMachineSessionObservers;
    HDHealthServiceManager *_serviceManager;
    HDFitnessMachineStateTimers *_fitnessMachineStateTimers;
    HDFitnessMachineAnalyticsCollector *_analyticsCollector;
}


@property (readonly, nonatomic) NSObject<HDFitnessMachineConnectionInitiatorProtocol> *connectionInitiatorServer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HDFitnessMachineDataProducer *fitnessMachineDataProducer; // ivar: _fitnessMachineDataProducer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly, nonatomic) NSObject<HDMetricsCollector> *metricsCollector;
@property (readonly) Class superclass;


-(NSUInteger)fitnessMachineTypeForSessionUUID:(id)arg0 ;
-(id)currentSessionRecoveryConfiguration;
-(id)initWithProfile:(id)arg0 ;
-(id)pairingManagerRequestsOOBData:(id)arg0 error:(*id)arg1 ;
-(id)unitTest_currentFitnessMachineSession;
-(void)_queue_handleBeginPairing:(id)arg0 ;
-(void)_queue_handleReceivedCharacteristic:(id)arg0 device:(id)arg1 error:(id)arg2 ;
-(void)_queue_registerClient:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)_setQueue:(id)arg0 ;
-(void)addFitnessMachineSessionObserver:(id)arg0 ;
-(void)clientInvalidatedWithConnectionUUID:(id)arg0 ;
-(void)dealloc;
-(void)endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)endFitnessMachineConnectionWithUUID:(id)arg0 ;
-(void)endFitnessMachineSessionWithUUID:(id)arg0 ;
-(void)finishSessionWithConfiguration:(id)arg0 ;
-(void)markClientReadyWithConnectionUUID:(id)arg0 ;
-(void)pairingManager:(id)arg0 didChangeNFCEnabledState:(BOOL)arg1 ;
-(void)pairingManager:(id)arg0 discoveredHealthService:(id)arg1 machineType:(NSUInteger)arg2 ;
-(void)pairingManager:(id)arg0 failedPairingWithError:(id)arg1 ;
-(void)pairingManager:(id)arg0 updatedConnectionStateFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)pairingManagerDidBeginPairing:(id)arg0 ;
-(void)pairingManagerReadyToConnect:(id)arg0 ;
-(void)pairingManagerReceivedActivityTypeAndPermission:(id)arg0 ;
-(void)pairingManagerUpdatedMachineInformation:(id)arg0 ;
-(void)pairingManagerWillBeginPairing:(id)arg0 fitnessMachineToken:(id)arg1 ;
-(void)recoverSessionWithConfiguration:(id)arg0 ;
-(void)registerClient:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)removeFitnessMachineSessionObserver:(id)arg0 ;
-(void)simulateDisconnect;
-(void)stateTimersDisconnectTimeout:(id)arg0 ;
-(void)stateTimersMfaTimeout:(id)arg0 ;
-(void)stateTimersPauseTimeout:(id)arg0 ;
-(void)stateTimersRetryConnectionTimeout:(id)arg0 ;
-(void)stateTimersWaitForMachineStartTimeout:(id)arg0 ;
-(void)unitTest_fakeMachineDiscoveryForType:(NSUInteger)arg0 ;
-(void)unitTest_fakeSession:(id)arg0 ;
-(void)unitTest_receiveFakeCharacteristicUpdate:(id)arg0 ;


@end


#endif