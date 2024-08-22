// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPBEACONSCANNINGSESSION_H
#define SPBEACONSCANNINGSESSION_H

@class NSString, FMXPCServiceDescription, FMXPCSession;
@protocol SPBeaconScanningXPCClientProtocol, OS_dispatch_queue, SPBeaconScanningXPCProtocol;

#import <Foundation/Foundation.h>


@interface SPBeaconScanningSession : NSObject <SPBeaconScanningXPCClientProtocol>



@property (copy, nonatomic) id *beaconDiscoveredCallback; // ivar: _beaconDiscoveredCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *discoveryFinishedCallback; // ivar: _discoveryFinishedCallback
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SPBeaconScanningXPCProtocol> *proxy; // ivar: _proxy
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription; // ivar: _serviceDescription
@property (retain, nonatomic) FMXPCSession *session; // ivar: _session
@property (copy, nonatomic) id *sessionInvalidatedCallback; // ivar: _sessionInvalidatedCallback
@property (readonly) Class superclass;


+(id)exportedInterface;
+(id)remoteInterface;
-(id)init;
-(void)discoveredObject:(id)arg0 ;
-(void)discoveryFinished:(id)arg0 ;
-(void)interruptionHandler:(id)arg0 ;
-(void)invalidationHandler:(id)arg0 ;
-(void)startScanningIncludeServiceCharacteristics:(BOOL)arg0 ;
-(void)stopScanning;


@end


#endif