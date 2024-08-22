// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHTTPMESSAGETRANSPORT_H
#define HMDHTTPMESSAGETRANSPORT_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSDictionary, HMFNetServiceBrowser, NSArray, NSString;
@protocol HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate, HMDHTTPClientMessageTransportDelegate, OS_dispatch_queue;


#import "HMDRemoteMessageTransport.h"
#import "HMDHTTPDevice.h"
#import "HMDHTTPServerMessageTransport.h"

@interface HMDHTTPMessageTransport : HMDRemoteMessageTransport <HMDHTTPServerMessageTransportDelegate, HMFNetServiceBrowserDelegate, HMDHTTPClientMessageTransportDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_residentDevices;
    NSMutableSet *_transientDevices;
    NSMutableDictionary *_txtRecord;
    NSMutableArray *_clientTransports;
}


@property (readonly, copy, nonatomic) NSDictionary *TXTRecord;
@property (readonly, nonatomic) HMFNetServiceBrowser *clientBrowser; // ivar: _clientBrowser
@property (readonly, nonatomic) NSArray *clientTransports;
@property (readonly, nonatomic) HMDHTTPDevice *currentDevice; // ivar: _currentDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (getter=isServerEnabled) BOOL serverEnabled; // ivar: _serverEnabled
@property (readonly, nonatomic) HMDHTTPServerMessageTransport *serverTransport; // ivar: _serverTransport
@property (readonly) Class superclass;


+(BOOL)protocolVersionSupportsExtendedMessages:(id)arg0 ;
+(BOOL)shouldHostMessageServer;
+(NSUInteger)restriction;
+(id)logCategory;
+(id)protocolVersion;
+(id)shortDescription;
-(BOOL)canSendMessage:(id)arg0 ;
-(BOOL)isDeviceConnected:(id)arg0 ;
-(NSInteger)qualityOfService;
-(id)_serviceForDevice:(id)arg0 ;
-(id)clientTransportForDevice:(id)arg0 ;
-(id)clientTransportForService:(id)arg0 ;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)deviceForHTTPDevice:(id)arg0 ;
-(id)dumpState;
-(id)initWithAccountRegistry:(id)arg0 ;
-(id)initWithAccountRegistry:(id)arg0 clientBrowser:(id)arg1 ;
-(id)logIdentifier;
-(id)shortDescription;
-(int)transportType;
-(void)_connectToDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleReceivedRequestMessage:(id)arg0 fromDevice:(id)arg1 completionHandler:(id)arg2 ;
-(void)_sendMessage:(id)arg0 destination:(id)arg1 timeout:(CGFloat)arg2 responseHandler:(id)arg3 ;
-(void)_startServerWithDevice:(id)arg0 ;
-(void)_stopServer;
-(void)addClientTransport:(id)arg0 ;
-(void)client:(id)arg0 didReceiveMessage:(id)arg1 completionHandler:(id)arg2 ;
-(void)client:(id)arg0 didStopWithError:(id)arg1 ;
-(void)configureWithDevice:(id)arg0 ;
-(void)handleServerEnabled:(BOOL)arg0 ;
-(void)netServiceBrowser:(id)arg0 didAddService:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didRemoveService:(id)arg1 ;
-(void)netServiceBrowser:(id)arg0 didStopBrowsingWithError:(id)arg1 ;
-(void)removeAllClientTransports;
-(void)removeClientTransport:(id)arg0 ;
-(void)removeTXTRecordValueForKey:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)server:(id)arg0 didAddDevice:(id)arg1 ;
-(void)server:(id)arg0 didReceiveMessage:(id)arg1 fromDevice:(id)arg2 completionHandler:(id)arg3 ;
-(void)server:(id)arg0 didRemoveDevice:(id)arg1 ;
-(void)server:(id)arg0 didStopWithError:(id)arg1 ;
-(void)startObservingIsPublishingForService:(id)arg0 ;


@end


#endif