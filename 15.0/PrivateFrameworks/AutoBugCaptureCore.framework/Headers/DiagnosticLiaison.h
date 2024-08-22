// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DIAGNOSTICLIAISON_H
#define DIAGNOSTICLIAISON_H

@class NSString;
@protocol IDSCrossDeviceTransportEndpoint, OS_dispatch_source, DiagnosticLiaisonDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HomeKitAgent.h"
#import "IDSCrossDeviceTransport.h"
#import "PrimaryInterfaceUtils.h"

@interface DiagnosticLiaison : NSObject <IDSCrossDeviceTransportEndpoint>

 {
    BOOL _allowRemoteTrigger;
    NSObject<OS_dispatch_source> *_homekitRelayTimer;
    BOOL _homekitRelayTimedOut;
    HomeKitAgent *_homeKitAgent;
    IDSCrossDeviceTransport *_idsTransport;
    PrimaryInterfaceUtils *_interfaceUtils;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DiagnosticLiaisonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)abcPayloadForIDSTransport:(BOOL)arg0 ;
-(id)basicSignatureFrom:(id)arg0 ;
-(id)caseSignatureForRemoteSignature:(id)arg0 groupIdentifier:(id)arg1 ;
-(id)homeKitAgent;
-(id)idsTransport;
-(id)init;
-(id)remoteCasePayloadForIDSTransport:(id)arg0 groupID:(id)arg1 ;
-(void)checkForUIImpactScenarioForCase:(id)arg0 ;
-(void)dealloc;
-(void)messageReceivedFromIDS:(id)arg0 ;
-(void)messageWithIdentifier:(id)arg0 didSendWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)messageWithIdentifierHasBeenDelivered:(id)arg0 ;
-(void)processPayloadFromIDSTransport:(id)arg0 incomingTime:(id)arg1 ;
-(void)processPayloadVersionOneFromIDSTransport:(id)arg0 incomingTime:(id)arg1 ;
-(void)processPayloadVersionTwoFromIDSTransport:(id)arg0 incomingTime:(id)arg1 ;
-(void)registerAdministrativeTransports;
-(void)registerAutoBugCaptureTransports:(id)arg0 ;
-(void)remotelyDisableAutoBugCapture:(id)arg0 ;
-(void)remotelyEnableAutoBugCapture:(id)arg0 ;
-(void)remotelyTriggerSessionForSignature:(id)arg0 groupIdentifier:(id)arg1 event:(id)arg2 queue:(id)arg3 reply:(id)arg4 ;
-(void)remotelyTriggerSessionWithSignature:(id)arg0 forDestinations:(id)arg1 groupIdentifier:(id)arg2 validFor:(CGFloat)arg3 queue:(id)arg4 reply:(id)arg5 ;
-(void)residentDevicesIDSIdentifiersWithReply:(id)arg0 ;
-(void)sendPayloadToHomeKitRelays:(id)arg0 additionalPredicate:(id)arg1 toEndpoint:(id)arg2 reply:(id)arg3 ;
-(void)startRemotelyTriggeredSessionForSignature:(id)arg0 groupIdentifier:(id)arg1 events:(id)arg2 ;
-(void)unregisterAllTransports:(id)arg0 ;
-(void)unregisterAllTransportsSync;


@end


#endif