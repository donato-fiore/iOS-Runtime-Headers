// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFITNESSMACHINECONNECTIONINITIATORSERVER_H
#define HDFITNESSMACHINECONNECTIONINITIATORSERVER_H

@class NSString;
@protocol HKFitnessMachineConnectionInitiatorServerInterface, HDFitnessMachineConnectionInitiatorProtocol;


#import "HDStandardTaskServer.h"

@interface HDFitnessMachineConnectionInitiatorServer : HDStandardTaskServer <HKFitnessMachineConnectionInitiatorServerInterface>

 {
    id<HDFitnessMachineConnectionInitiatorProtocol> *_connectionInitiatorServer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)createTaskServerWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 error:(*id)arg4 ;
+(id)requiredEntitlements;
+(id)taskIdentifier;
-(id)exportedInterface;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)remote_forbidConnectionForFitnessMachineSessionUUID:(id)arg0 ;
-(void)remote_permitConnectionForFitnessMachineSessionUUID:(id)arg0 activityType:(NSUInteger)arg1 ;
-(void)remote_registerConnectionInitiatorClient:(id)arg0 ;
-(void)remote_simulateAccept;
-(void)remote_simulateTapWithFitnessMachineType:(NSUInteger)arg0 ;


@end


#endif