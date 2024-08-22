// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLSOURCE_H
#define CXCALLSOURCE_H

@class NSString, NSURL;
@protocol CXProviderHostProtocol, CXProviderVendorProtocol, CXCallSourceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CXCallSource : NSObject <CXProviderHostProtocol, CXProviderVendorProtocol>



@property (readonly, nonatomic) ? auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXCallSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isPermittedToUseBluetoothAccessories) BOOL permittedToUseBluetoothAccessories;
@property (readonly, nonatomic, getter=isPermittedToUsePrivateAPI) BOOL permittedToUsePrivateAPI;
@property (readonly, nonatomic, getter=isPermittedToUsePublicAPI) BOOL permittedToUsePublicAPI;
@property (readonly, nonatomic) int processIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CXProviderVendorProtocol> *vendorProtocolDelegate;


-(id)initWithIdentifier:(id)arg0 ;
-(void)actionCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)beginWithCompletionHandler:(id)arg0 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleAudioSessionActivationStateChangedTo:(id)arg0 ;
-(void)registerWithConfiguration:(id)arg0 ;
-(void)reportAudioFinishedForCallWithUUID:(id)arg0 ;
-(void)reportAudioFinishedForCallWithUUID:(id)arg0 reply:(id)arg1 ;
-(void)reportCallWithUUID:(id)arg0 changedFrequencyData:(id)arg1 forDirection:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 changedFrequencyData:(id)arg1 forDirection:(NSInteger)arg2 reply:(id)arg3 ;
-(void)reportCallWithUUID:(id)arg0 changedMeterLevel:(float)arg1 forDirection:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 changedMeterLevel:(float)arg1 forDirection:(NSInteger)arg2 reply:(id)arg3 ;
-(void)reportCallWithUUID:(id)arg0 crossDeviceIdentifier:(id)arg1 changedBytesOfDataUsed:(NSInteger)arg2 ;
-(void)reportCallWithUUID:(id)arg0 crossDeviceIdentifier:(id)arg1 changedBytesOfDataUsed:(NSInteger)arg2 reply:(id)arg3 ;
-(void)reportCallWithUUID:(id)arg0 endedAtDate:(id)arg1 privateReason:(NSInteger)arg2 failureContext:(id)arg3 ;
-(void)reportCallWithUUID:(id)arg0 endedAtDate:(id)arg1 privateReason:(NSInteger)arg2 failureContext:(id)arg3 reply:(id)arg4 ;
-(void)reportCallWithUUID:(id)arg0 updated:(id)arg1 ;
-(void)reportCallWithUUID:(id)arg0 updated:(id)arg1 reply:(id)arg2 ;
-(void)reportNewIncomingCallWithUUID:(id)arg0 update:(id)arg1 reply:(id)arg2 ;
-(void)reportNewOutgoingCallWithUUID:(id)arg0 update:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 connectedAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 connectedAtDate:(id)arg1 reply:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 sentInvitationAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 sentInvitationAtDate:(id)arg1 reply:(id)arg2 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 startedConnectingAtDate:(id)arg1 ;
-(void)reportOutgoingCallWithUUID:(id)arg0 startedConnectingAtDate:(id)arg1 reply:(id)arg2 ;
-(void)requestTransaction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif