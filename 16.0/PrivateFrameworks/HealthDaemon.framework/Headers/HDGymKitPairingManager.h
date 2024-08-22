// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDGYMKITPAIRINGMANAGER_H
#define HDGYMKITPAIRINGMANAGER_H

@class NSMutableDictionary, NSString;
@protocol HDFitnessMachineStateTimersDelegate, HDGymKitSettingsDelegate, HDWatchAppStateMonitorDelegate, HDNearFieldInterfaceDelegate, HDCurrentWorkoutObserver, HDFitnessMachineConnectionInitiatorProtocol, OS_dispatch_queue, HDGymKitPairingManagerDelegate;

#import <Foundation/Foundation.h>

#import "HDNearFieldInterface.h"
#import "HDPowerAssertion.h"
#import "HDFitnessMachineStateTimers.h"
#import "HDWatchAppStateMonitor.h"
#import "HDFitnessMachineSession.h"
#import "HDProfile.h"
#import "HDFitnessMachineSimulatorSupport.h"
#import "HDGymKitSettings.h"

@interface HDGymKitPairingManager : NSObject <HDFitnessMachineStateTimersDelegate, HDGymKitSettingsDelegate, HDWatchAppStateMonitorDelegate, HDNearFieldInterfaceDelegate, HDCurrentWorkoutObserver, HDFitnessMachineConnectionInitiatorProtocol>

 {
    HDNearFieldInterface *_nearFieldInterface;
    NSObject<OS_dispatch_queue> *_queue;
    HDPowerAssertion *_tagReadPowerAssertion;
    NSUInteger _bluetoothState;
    HDFitnessMachineStateTimers *_fitnessMachineStateTimers;
    HDWatchAppStateMonitor *_workoutAppStateMonitor;
    HDFitnessMachineSession *_fitnessMachineSession;
    HDProfile *_profile;
    NSUInteger _currentDiscovery;
    NSMutableDictionary *_connectionInitiatorClients;
    HDFitnessMachineSimulatorSupport *_simulatorSupport;
    BOOL _expressModeAssertionTaken;
    HDGymKitSettings *_gymKitSettings;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDGymKitPairingManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_newNearFieldInterface;
-(id)_newWatchAppStateMonitor;
-(id)initWithProfile:(id)arg0 ;
-(void)dealloc;
-(void)deliverError:(id)arg0 ;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)gymKitSettings:(id)arg0 didChangeFromNFCPermission:(NSUInteger)arg1 toNFCPermission:(NSUInteger)arg2 ;
-(void)handleBLEConnectionCompletedSuccessfully:(BOOL)arg0 ;
-(void)monitorDidDetectAppActivate:(id)arg0 ;
-(void)monitorDidDetectAppDeactivate:(id)arg0 ;
-(void)nearFieldInterfaceDidEnterField:(id)arg0 ;
-(void)nearFieldInterfaceDidReadTag:(id)arg0 ;
-(void)nearFieldInterfaceFieldDetectionDidEndUnexpectedly:(id)arg0 ;
-(void)nearFieldInterfaceTagSessionDidEndUnexpectedly:(id)arg0 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg0 activityType:(NSUInteger)arg1 withConnectionUUID:(id)arg2 ;
-(void)registerConnectionInitiatorClient:(id)arg0 withConnectionUUID:(id)arg1 ;
-(void)reset;
-(void)simulateAccept;
-(void)simulateTapWithFitnessMachineType:(NSUInteger)arg0 ;
-(void)stateTimersFieldDetectTimeout:(id)arg0 ;
-(void)stateTimersTagReadTimeout:(id)arg0 ;
-(void)stateTimersUserAcceptanceTimeout:(id)arg0 ;
-(void)updatedConnectionStateWithError:(id)arg0 ;
-(void)updatedFitnessMachine;
-(void)updatedFitnessMachineState:(NSUInteger)arg0 fitnessMachineSessionUUID:(id)arg1 ;
-(void)workoutAppIsReady;
-(void)workoutManager:(id)arg0 currentWorkout:(id)arg1 didChangeToState:(NSInteger)arg2 ;
-(void)workoutManager:(id)arg0 didUpdateCurrentWorkout:(id)arg1 ;


@end


#endif