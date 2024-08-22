// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCHANNELMANAGER_H
#define PTCHANNELMANAGER_H

@class NSUUID, CXCallController, NSString, NSMutableArray, CXChannelProvider;
@protocol CXChannelProviderDelegate, OS_dispatch_queue, PTChannelManagerDelegate, PTChannelRestorationDelegate;

#import <Foundation/Foundation.h>


@interface PTChannelManager : NSObject <CXChannelProviderDelegate>



@property (readonly, nonatomic) NSUUID *activeChannelUUID; // ivar: _activeChannelUUID
@property (nonatomic) BOOL attemptingChannelRestoration; // ivar: _attemptingChannelRestoration
@property (readonly, nonatomic) CXCallController *callController; // ivar: _callController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // ivar: _callbackQueue
@property (weak, nonatomic) NSObject<PTChannelManagerDelegate> *channelEventDelegate; // ivar: _channelEventDelegate
@property (weak, nonatomic) NSObject<PTChannelRestorationDelegate> *channelRestorationDelegate; // ivar: _channelRestorationDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *instantiationCompletionBlock; // ivar: _instantiationCompletionBlock
@property BOOL isWaitingForPushResult; // ivar: _isWaitingForPushResult
@property (retain, nonatomic) NSMutableArray *pendingPushes; // ivar: _pendingPushes
@property BOOL stopTransmitRequestedWhileWaitingForPushResult; // ivar: _stopTransmitRequestedWhileWaitingForPushResult
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *suppressRejoinForRecentlyDisconnectedChannelUUID; // ivar: _suppressRejoinForRecentlyDisconnectedChannelUUID
@property (readonly, nonatomic) CXChannelProvider *underlyingProvider; // ivar: _underlyingProvider
@property (retain) NSUUID *waitingForPushResultChannelUUID; // ivar: _waitingForPushResultChannelUUID


+(void)channelManagerWithDelegate:(id)arg0 restorationDelegate:(id)arg1 completionHandler:(id)arg2 ;
-(id)_initWithEventDelegate:(id)arg0 restorationDelegate:(id)arg1 instantiationCompletion:(id)arg2 ;
-(void)_appendPendingPushForUUID:(id)arg0 payload:(id)arg1 reply:(id)arg2 ;
-(void)_deliverChannelManagerInstanceToClientIfNeeded;
-(void)_deliverPendingPushes;
-(void)_ensureDelegateIsReadyToReceiveActions:(id)arg0 joinReason:(NSInteger)arg1 ;
-(void)_handleLeaveCheckinResult:(id)arg0 ;
-(void)_handlePushResult:(id)arg0 pendingPush:(id)arg1 ;
-(void)_performChannelRestorationAndUpdateChannelDescriptor:(id)arg0 pushPayload:(id)arg1 ;
-(void)_requestJoinChannelWithUUID:(id)arg0 channelDescriptor:(id)arg1 originator:(NSInteger)arg2 completion:(id)arg3 ;
-(void)_setActiveRemoteParticipant:(id)arg0 forChannelUUID:(id)arg1 shouldReplaceOutgoingTransmission:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)leaveChannelWithUUID:(id)arg0 ;
-(void)provider:(id)arg0 didActivateAudioSession:(id)arg1 ;
-(void)provider:(id)arg0 didDeactivateAudioSession:(id)arg1 ;
-(void)provider:(id)arg0 didReceiveChannelPushToken:(id)arg1 ;
-(void)provider:(id)arg0 didReceiveCheckInResult:(NSInteger)arg1 channelUUID:(id)arg2 ;
-(void)provider:(id)arg0 didReceivePushPayload:(id)arg1 channelUUID:(id)arg2 reply:(id)arg3 ;
-(void)provider:(id)arg0 performChannelJoinAction:(id)arg1 ;
-(void)provider:(id)arg0 performChannelLeaveAction:(id)arg1 ;
-(void)provider:(id)arg0 performChannelTransmitStartAction:(id)arg1 ;
-(void)provider:(id)arg0 performChannelTransmitStopAction:(id)arg1 ;
-(void)providerDidBegin:(id)arg0 ;
-(void)providerDidReset:(id)arg0 ;
-(void)requestBeginTransmittingWithChannelUUID:(id)arg0 ;
-(void)requestJoinChannelWithUUID:(id)arg0 descriptor:(id)arg1 ;
-(void)setActiveRemoteParticipant:(id)arg0 forChannelUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)setChannelDescriptor:(id)arg0 forChannelUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)setServiceStatus:(NSInteger)arg0 forChannelUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)setTransmissionMode:(NSInteger)arg0 forChannelUUID:(id)arg1 completionHandler:(id)arg2 ;
-(void)stopTransmittingWithChannelUUID:(id)arg0 ;
-(void)unregisterChannelPushToken;


@end


#endif