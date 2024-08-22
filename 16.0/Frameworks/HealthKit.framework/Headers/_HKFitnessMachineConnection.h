// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HKFITNESSMACHINECONNECTION_H
#define _HKFITNESSMACHINECONNECTION_H

@class NSUUID, NSLock, NSString;
@protocol _HKXPCExportable, HKFitnessMachineConnectionClientInterface, _HKFitnessMachineConnectionDelegate;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"
#import "_HKFitnessMachine.h"
#import "HKDevice.h"

@interface _HKFitnessMachineConnection : NSObject <_HKXPCExportable, HKFitnessMachineConnectionClientInterface>

 {
    HKTaskServerProxyProvider *_proxyProvider;
    NSUUID *_currentSessionUUID;
    _HKFitnessMachine *_fitnessMachine;
    HKDevice *_deviceForFinalWorkout;
    NSLock *_lock;
}


@property (readonly, nonatomic) NSUInteger connectionState; // ivar: _connectionState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_HKFitnessMachineConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) HKDevice *deviceForFinalWorkout;
@property (readonly, copy) _HKFitnessMachine *fitnessMachine;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger machineState; // ivar: _machineState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid;


+(id)taskIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)currentSessionConfiguration;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)_clientQueue_deliverFailedWithError:(id)arg0 ;
-(void)_connectionInterruptedWithError:(id)arg0 ;
// -(void)_fetchProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)_registerClient;
-(void)_simulateDisconnect;
-(void)clientRemote_deliverConnectionChangedToState:(NSUInteger)arg0 fromState:(NSUInteger)arg1 fitnessMachineSessionUUID:(id)arg2 error:(id)arg3 ;
-(void)clientRemote_deliverDetectedNFC:(id)arg0 ;
-(void)clientRemote_deliverFailedWithError:(id)arg0 ;
-(void)clientRemote_deliverMachineChangedToState:(NSUInteger)arg0 fromState:(NSUInteger)arg1 fitnessMachineSessionUUID:(id)arg2 date:(id)arg3 ;
-(void)clientRemote_deliverMachineInformationUpdated:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)end;
-(void)endWithFitnessMachineSessionUUID:(id)arg0 ;
-(void)markClientReady;


@end


#endif