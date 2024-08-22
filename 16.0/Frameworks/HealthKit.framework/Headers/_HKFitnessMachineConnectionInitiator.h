// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKFITNESSMACHINECONNECTIONINITIATOR_H
#define _HKFITNESSMACHINECONNECTIONINITIATOR_H

@class NSUUID, NSString;
@protocol HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable, _HKFitnessMachineConnectionInitiatorDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface _HKFitnessMachineConnectionInitiator : NSObject <HKFitnessMachineConnectionInitiatorClientInterface, _HKXPCExportable>

 {
    uint8_t _requiresRegistration;
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_HKFitnessMachineConnectionInitiatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_fetchProxyWithHandler:(id)arg0 ;
-(void)_simulateAccept;
-(void)_simulateTapWithFitnessMachineType:(NSUInteger)arg0 ;
-(void)clientRemote_encounteredError:(id)arg0 ;
-(void)clientRemote_updatedConnectionState:(NSUInteger)arg0 fitnessMachineSessionUUID:(id)arg1 ;
-(void)clientRemote_updatedFitnessMachine:(id)arg0 fitnessMachineSessionUUID:(id)arg1 ;
-(void)clientRemote_updatedFitnessMachineState:(NSUInteger)arg0 fitnessMachineSessionUUID:(id)arg1 ;
-(void)clientRemote_workoutAppReady;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)forbidConnectionForFitnessMachineSessionUUID:(id)arg0 ;
-(void)permitConnectionForFitnessMachineSessionUUID:(id)arg0 activityType:(NSUInteger)arg1 ;
-(void)registerClientIfNeeded;


@end


#endif