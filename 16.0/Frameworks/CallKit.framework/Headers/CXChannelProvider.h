// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCHANNELPROVIDER_H
#define CXCHANNELPROVIDER_H

@class NSString, NSArray, NSXPCConnection;
@protocol CXActionDelegateInternal, CXChannelPushClientProtocol, CXAbstractProvider, CXChannelProviderDelegate;

#import <Foundation/Foundation.h>

#import "CXAbstractProvider.h"
#import "CXChannelProviderConfiguration.h"

@interface CXChannelProvider : NSObject <CXActionDelegateInternal, CXChannelPushClientProtocol, CXAbstractProvider>



@property (readonly, nonatomic) CXAbstractProvider *abstractProvider; // ivar: _abstractProvider
@property (copy, nonatomic) CXChannelProviderConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXChannelProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *pendingTransactions;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSXPCConnection *voipApplicationControllerConnection; // ivar: _voipApplicationControllerConnection


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)requiresProxyingAVAudioSessionState;
-(id)channelProviderHostDelegate;
-(id)hostProtocolDelegate;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_didReceivePushPayload:(id)arg0 ;
-(void)_didReceivePushPayload:(id)arg0 channelUUID:(id)arg1 reply:(id)arg2 ;
-(void)_didReceivePushToken:(id)arg0 ;
-(void)_ensureApplicationControllerConnection;
-(void)commitTransaction:(id)arg0 ;
-(void)handleActionTimeout:(id)arg0 ;
-(void)handleAudioSessionActivationStateChangedTo:(id)arg0 ;
-(void)handleMediaServicesWereResetNotification:(id)arg0 ;
-(void)invalidate;
-(void)performAction:(id)arg0 ;
-(void)registerCurrentConfiguration;
-(void)reportChannelWithUUID:(id)arg0 connectedAtDate:(id)arg1 ;
-(void)reportChannelWithUUID:(id)arg0 disconnectedAtDate:(id)arg1 disconnectedReason:(NSInteger)arg2 ;
-(void)reportChannelWithUUID:(id)arg0 updated:(id)arg1 ;
-(void)reportChannelWithUUID:(id)arg0 updated:(id)arg1 completionHandler:(id)arg2 ;
-(void)reportIncomingTransmissionEndedForChannelWithUUID:(id)arg0 reason:(NSInteger)arg1 completionHandler:(id)arg2 ;
-(void)reportIncomingTransmissionStartedForChannelWithUUID:(id)arg0 update:(id)arg1 shouldReplaceOutgoingTransmission:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)requestChannelPushToken;
-(void)unregisterChannelPushToken;


@end


#endif