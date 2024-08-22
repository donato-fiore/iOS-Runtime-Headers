// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXPROVIDEREXTENSIONHOSTCONTEXT_H
#define CXPROVIDEREXTENSIONHOSTCONTEXT_H

@class NSString;
@protocol CXProviderVendorProtocol, CXProviderHostProtocol;


#import "CXProviderExtensionContext.h"

@interface CXProviderExtensionHostContext : CXProviderExtensionContext <CXProviderVendorProtocol, CXProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXProviderHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)actionCompleted:(id)arg0 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleAudioSessionActivationStateChangedTo:(BOOL)arg0 ;
-(void)registerWithConfiguration:(id)arg0 ;
-(void)reportAudioFinishedForCallWithUUID:(id)arg0 ;
-(void)reportCallWithUUID:(id)arg0 changedFrequencyData:(id)arg1 forDirection:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 changedMeterLevel:(float)arg1 forDirection:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 crossDeviceIdentifier:(id)arg1 changedBytesOfDataUsed:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 endedAtDate:(id)arg1 privateReason:(NSInteger)arg2 failureContext:(id)arg3 ;
-(void)reportCallWithUUID:(id)arg0 updated:(id)arg1 ;
-(void)reportNewIncomingCallWithUUID:(id)arg0 update:(id)arg1 reply:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 connectedAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 sentInvitationAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 startedConnectingAtDate:(id)arg1 ;
-(void)requestTransaction:(id)arg0 reply:(id)arg1 ;


@end


#endif