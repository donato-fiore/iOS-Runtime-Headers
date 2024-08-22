// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDHTTPCLIENTMESSAGETRANSPORT_H
#define HMDHTTPCLIENTMESSAGETRANSPORT_H

@class HMFObject, HMFHTTPClient, NSString, NSUUID, HMFNetService;
@protocol HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate, HMFDumpState, HMDHTTPClientMessageTransportDelegate;


#import "HMDHTTPDevice.h"

@interface HMDHTTPClientMessageTransport : HMFObject <HMFHTTPClientDelegate, HMFLogging, HMFNetServiceDelegate, HMFDumpState>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) HMFHTTPClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDHTTPClientMessageTransportDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) HMFNetService *netService; // ivar: _netService
@property (readonly, nonatomic, getter=isReachable) BOOL reachable;
@property (readonly, nonatomic) HMDHTTPDevice *remoteDevice; // ivar: _remoteDevice
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, copy) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
+(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)dumpState;
-(id)init;
-(id)initWithIdentifier:(id)arg0 netService:(id)arg1 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)_receiveMessage;
-(void)_sendResponseMessage:(id)arg0 forTransactionIdentifier:(id)arg1 ;
-(void)_stopWithError:(id)arg0 ;
-(void)client:(id)arg0 didRequestPingWithCompletionHandler:(id)arg1 ;
-(void)clientDidBecomeUnreachable:(id)arg0 ;
-(void)dealloc;
-(void)netService:(id)arg0 didUpdateTXTRecord:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)sendMessage:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)sendPingWithCompletionHandler:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;


@end


#endif