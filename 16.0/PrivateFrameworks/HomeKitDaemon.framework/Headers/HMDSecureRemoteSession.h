// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSECUREREMOTESESSION_H
#define HMDSECUREREMOTESESSION_H

@class HMFMessageTransport, NSMutableArray, NSString;
@protocol HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMDSecureRemoteSession, OS_dispatch_queue, HMFMessageTransportDelegate;


#import "HMDAccountRegistry.h"
#import "HMDDevice.h"
#import "HMDRemoteDeviceMonitor.h"

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMDSecureRemoteSession>



@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, nonatomic) NSMutableArray *clientStreams; // ivar: _clientStreams
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFMessageTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device; // ivar: _device
@property (readonly, nonatomic) HMDRemoteDeviceMonitor *deviceMonitor; // ivar: _deviceMonitor
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumRemoteStreams; // ivar: _maximumRemoteStreams
@property (readonly, nonatomic) NSMutableArray *pendingMessages; // ivar: _pendingMessages
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (readonly, nonatomic) NSMutableArray *serverStreams; // ivar: _serverStreams
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(BOOL)isSecureRemoteSessionMessage:(id)arg0 ;
+(id)logCategory;
-(id)_clientStreamForMessage:(id)arg0 ;
-(id)_clientStreamWithIdentiifer:(id)arg0 ;
-(id)_dequeMessage;
-(id)_serverStreamWithIdentifier:(id)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithDevice:(id)arg0 deviceMonitor:(id)arg1 accountRegistry:(id)arg2 ;
-(id)logIdentifier;
-(void)_closeClientStream:(id)arg0 error:(id)arg1 ;
-(void)_closeServerStream:(id)arg0 error:(id)arg1 ;
-(void)_closeWithError:(id)arg0 ;
-(void)_handleSecureClientMessage:(id)arg0 fromDevice:(id)arg1 transport:(id)arg2 ;
-(void)_handleSecureServerMessage:(id)arg0 fromDevice:(id)arg1 transport:(id)arg2 ;
-(void)_handleStreamInvalidationMessage:(id)arg0 ;
-(void)_openClientStreamWithCompletionHandler:(id)arg0 ;
-(void)_openServerStreamWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)_queueMessage:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)handleDeviceIsNotReachable:(id)arg0 ;
-(void)handleDeviceIsReachable:(id)arg0 ;
-(void)messageTransport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)openWithCompletionHandler:(id)arg0 ;
-(void)receivedSecureMessage:(id)arg0 fromDevice:(id)arg1 fromTransport:(id)arg2 ;
-(void)secureRemoteStream:(id)arg0 didCloseWithError:(id)arg1 ;
-(void)secureRemoteStream:(id)arg0 receivedRequestToSendMessage:(id)arg1 ;
-(void)secureRemoteStreamIsIdle:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif