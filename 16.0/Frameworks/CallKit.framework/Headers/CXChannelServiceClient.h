// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELSERVICECLIENT_H
#define CXCHANNELSERVICECLIENT_H

@class NSString;
@protocol CXChannelProviderHostProtocol, CXChannelProviderVendorProtocol, CXChannelServiceClientDelegate;


#import "CXServiceClient.h"

@interface CXChannelServiceClient : CXServiceClient <CXChannelProviderHostProtocol, CXChannelProviderVendorProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXChannelServiceClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPermittedToUsePublicAPI;
-(id)initWithConnection:(id)arg0 ;
-(void)actionCompleted:(id)arg0 completionHandler:(id)arg1 ;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleAudioSessionActivationStateChangedTo:(id)arg0 ;
-(void)registerWithConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportAudioFinishedForChannelWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)reportChannelWithUUID:(id)arg0 connectedAtDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportChannelWithUUID:(id)arg0 disconnectedAtDate:(id)arg1 disconnectedReason:(id)arg2 completionHandler:(id)arg3 ;
-(void)reportChannelWithUUID:(id)arg0 startedConnectingAtDate:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportChannelWithUUID:(id)arg0 updated:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportIncomingTransmissionEndedForChannelWithUUID:(id)arg0 reason:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportIncomingTransmissionStartedForChannelWithUUID:(id)arg0 update:(id)arg1 shouldReplaceOutgoingTransmission:(id)arg2 completionHandler:(id)arg3 ;
-(void)requestTransaction:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif