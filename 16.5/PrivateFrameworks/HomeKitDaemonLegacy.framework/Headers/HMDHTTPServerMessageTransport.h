// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHTTPSERVERMESSAGETRANSPORT_H
#define HMDHTTPSERVERMESSAGETRANSPORT_H

@class HMFObject, NSMutableArray, NSDictionary, NSArray, NSString, NSUUID, HMFHTTPServer;
@protocol HMFHTTPServerDelegate, HMFTimerDelegate, HMFDumpState, HMDHTTPServerMessageTransportDelegate;



@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate, HMFDumpState>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_clientConnections;
}


@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly, nonatomic) NSArray *clientConnections;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDHTTPServerMessageTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *devices;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) HMFHTTPServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)maximumSupportedProtocolVersion;
+(id)shortDescription;
-(BOOL)server:(id)arg0 shouldAcceptConnection:(id)arg1 ;
-(id)_clientConnectionForDevice:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithServerIdentifier:(id)arg0 ;
-(id)shortDescription;
-(void)__registerPingHandler;
-(void)__registerReceiveMessageHandler;
-(void)__registerSendMessageHandler;
-(void)__registerSendResponseHandler;
-(void)_stopWithError:(id)arg0 ;
-(void)addClientConnection:(id)arg0 ;
-(void)confirmDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllClientConnections;
-(void)removeClientConnection:(id)arg0 ;
-(void)removeTXTRecordValueForKey:(id)arg0 ;
-(void)sendMessage:(id)arg0 toDevices:(id)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)server:(id)arg0 didCloseConnection:(id)arg1 ;
-(void)server:(id)arg0 didOpenConnection:(id)arg1 ;
-(void)server:(id)arg0 didStopWithError:(id)arg1 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;
-(void)timerDidFire:(id)arg0 ;


@end


#endif