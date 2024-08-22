// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDFITNESSMACHINECONNECTIONSERVER_H
#define HDFITNESSMACHINECONNECTIONSERVER_H

@class NSString;
@protocol HKFitnessMachineConnectionServerInterface;


#import "HDStandardTaskServer.h"
#import "HDFitnessMachineManager.h"

@interface HDFitnessMachineConnectionServer : HDStandardTaskServer <HKFitnessMachineConnectionServerInterface>

 {
    HDFitnessMachineManager *_fitnessMachineManager;
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
-(void)remote_endFitnessMachineConnection;
-(void)remote_endFitnessMachineConnectionForFitnessMachineSessionUUID:(id)arg0 ;
-(void)remote_markClientReady;
-(void)remote_registerClient:(id)arg0 ;
-(void)remote_simulateDisconnect;


@end


#endif