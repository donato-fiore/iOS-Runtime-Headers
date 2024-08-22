// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSECUREREMOTESESSION_H
#define HMDSECUREREMOTESESSION_H

@class HMFMessageTransport, NSMutableArray, NSArray, NSString;
@protocol HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDSecureRemoteSession, OS_dispatch_queue, HMDSecureRemoteSessionDataSource, HMFMessageTransportDelegate;


#import "HMDAccountRegistry.h"
#import "HMDDevice.h"

@interface HMDSecureRemoteSession : HMFMessageTransport <HMDSecureRemoteStreamDelegate, HMFLogging, HMFTimerDelegate, HMDRemoteDeviceMonitorDeviceRegistrationClient, HMDSecureRemoteSession>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_pendingMessages;
    NSMutableArray *_clientStreams;
    NSMutableArray *_serverStreams;
}


@property (readonly, nonatomic) HMDAccountRegistry *accountRegistry; // ivar: _accountRegistry
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (readonly, copy, nonatomic) NSArray *clientStreams;
@property (readonly, nonatomic) NSObject<HMDSecureRemoteSessionDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFMessageTransportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maximumRemoteStreams; // ivar: _maximumRemoteStreams
@property (readonly, copy, nonatomic) NSArray *pendingMessages;
@property (readonly, copy, nonatomic) NSArray *serverStreams;
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
-(id)initWithDevice:(id)arg0 accountRegistry:(id)arg1 ;
-(id)initWithDevice:(id)arg0 accountRegistry:(id)arg1 dataSource:(id)arg2 ;
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