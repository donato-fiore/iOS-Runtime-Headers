// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMTBUDDYDAEMONPROXIMITYAUTOMATEDDEVICEENROLLMENTCONTROLLER_H
#define DMTBUDDYDAEMONPROXIMITYAUTOMATEDDEVICEENROLLMENTCONTROLLER_H

@class NSString, NSError, CATTaskServer;
@protocol CATTaskServerDelegate, DMTRemoteSetupBroadcasting, DMTRemoteSetupBroadcastingProvider, DMTBuddyDaemonProximityAutomatedDeviceEnrollmentControllerDelegate, DMTDeviceInformationPrimitives;

#import <Foundation/Foundation.h>

#import "DMTAutomatedDeviceEnroller.h"
#import "DMTTaskOperationBuilder.h"

@interface DMTBuddyDaemonProximityAutomatedDeviceEnrollmentController : NSObject <CATTaskServerDelegate>



@property (retain, nonatomic) NSObject<DMTRemoteSetupBroadcasting> *broadcaster; // ivar: _broadcaster
@property (readonly, nonatomic, getter=isBroadcasting) BOOL broadcasting;
@property (readonly, nonatomic) NSObject<DMTRemoteSetupBroadcastingProvider> *broadcastingProvider; // ivar: _broadcastingProvider
@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<DMTBuddyDaemonProximityAutomatedDeviceEnrollmentControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<DMTDeviceInformationPrimitives> *deviceInformationPrimitives; // ivar: _deviceInformationPrimitives
@property (readonly, nonatomic) DMTAutomatedDeviceEnroller *enroller; // ivar: _enroller
@property (readonly, nonatomic) NSError *enrollmentError; // ivar: _enrollmentError
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isObservingEnroller) BOOL observingEnroller; // ivar: _observingEnroller
@property (readonly, nonatomic) DMTTaskOperationBuilder *operationBuilder; // ivar: _operationBuilder
@property (readonly) Class superclass;
@property (readonly, nonatomic) CATTaskServer *taskServer; // ivar: _taskServer


+(id)keyPathsForValuesAffectingBroadcasting;
-(id)initWithBroadcastingProvider:(id)arg0 enrollmentPrimitives:(id)arg1 deviceInformationPrimitives:(id)arg2 enrollmentInformationPrimitives:(id)arg3 reachabilityPrimitives:(id)arg4 wifiActivationPrimitives:(id)arg5 wifiPrimitives:(id)arg6 profileInstallationPrimitives:(id)arg7 destructiveErasePrimitives:(id)arg8 powerOffPrimitives:(id)arg9 delegate:(id)arg10 ;
-(id)makeFailureCompletionViewModelWithError:(id)arg0 ;
-(id)makeStatusViewModelForCurrentEnrollerState;
-(id)makeSuccessfulCompletionViewModel;
-(id)server:(id)arg0 clientSession:(id)arg1 operationForRequest:(id)arg2 error:(*id)arg3 ;
-(void)addHandlersToBroadcaster:(id)arg0 ;
-(void)beginBroadcasting;
-(void)beginEraseAndShutdown;
-(void)beginObservingEnroller;
-(void)broadcasterEncounteredError:(id)arg0 ;
-(void)broadcasterHasPairedTransport:(id)arg0 ;
-(void)broadcasterUpdatedDisplayedPin:(id)arg0 ;
-(void)dealloc;
-(void)delegateEnrollmentError:(id)arg0 ;
-(void)endBroadcasting;
-(void)endObservingEnrollerIfNeeded;
-(void)handleServerFailureWithError:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeHandlersFromBroadcaster:(id)arg0 ;
-(void)resetNetworking;
-(void)server:(id)arg0 clientSession:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)server:(id)arg0 clientSessionDidDisconnect:(id)arg1 ;
-(void)serverDidInvalidate:(id)arg0 ;


@end


#endif