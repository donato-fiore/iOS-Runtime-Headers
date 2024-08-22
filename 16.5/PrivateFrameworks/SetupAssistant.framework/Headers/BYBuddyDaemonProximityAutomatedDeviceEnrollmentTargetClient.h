// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYBUDDYDAEMONPROXIMITYAUTOMATEDDEVICEENROLLMENTTARGETCLIENT_H
#define BYBUDDYDAEMONPROXIMITYAUTOMATEDDEVICEENROLLMENTTARGETCLIENT_H

@class NSXPCConnection, NSString;
@protocol BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetClient : NSObject <BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // ivar: _connectionQueue
@property (readonly, nonatomic) NSXPCConnection *daemonConnection; // ivar: _daemonConnection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BYBuddyDaemonProximityAutomatedDeviceEnrollmentTargetProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)clientInterface;
-(id)connectionToMachService:(id)arg0 ;
-(id)init;
-(void)activateUsingWiFiWithCompletion:(id)arg0 ;
-(void)beginAdvertisingProximityAutomatedDeviceEnrollment;
-(void)configuratorPairingSuccessfulWithViewModel:(id)arg0 ;
-(void)dismissProximityPinCodeWithError:(id)arg0 ;
-(void)displayProximityPinCode:(id)arg0 ;
-(void)displayShutdownUI;
-(void)endAdvertisingProximityAutomatedDeviceEnrollment;
-(void)enrollmentCompleteWithViewModel:(id)arg0 ;
-(void)enrollmentHasStatusUpdateWithViewModel:(id)arg0 ;
-(void)fetchActivationStateWithCompletion:(id)arg0 ;
-(void)shutdown;


@end


#endif