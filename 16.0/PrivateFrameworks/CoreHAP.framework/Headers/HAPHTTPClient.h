// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPHTTPCLIENT_H
#define HAPHTTPCLIENT_H

@class HMFObject, NSString, NSError, HMFNetAddress;
@protocol HAPHTTPClientDebugDelegate, HMFLogging, OS_dispatch_queue, HAPHTTPClientDelegate;



@interface HAPHTTPClient : HMFObject <HAPHTTPClientDebugDelegate, HMFLogging>

 {
    *HTTPClientPrivate _httpClient;
}


@property (weak, nonatomic) NSObject<HAPHTTPClientDebugDelegate> *debugDelegate; // ivar: _debugDelegate
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *debugDelegateQueue; // ivar: _debugDelegateQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPHTTPClientDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *dnsName; // ivar: _dnsName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSError *invalidateReason; // ivar: _invalidateReason
@property (nonatomic) BOOL invalidateRequested; // ivar: _invalidateRequested
@property (nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) HMFNetAddress *peerAddress;
@property (readonly, nonatomic) HMFNetAddress *peerAddressEx;
@property (readonly, nonatomic) NSString *peerEndpointDescription;
@property (readonly, nonatomic) NSInteger port; // ivar: _port
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *wakeAddress; // ivar: _wakeAddress


+(id)logCategory;
-(?)_handleHTTPResponseForMessagecompletionHandler;
-(BOOL)_debugDelegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)_delegateRespondsToSelector:(SEL)arg0 ;
-(BOOL)enableUAPSessionSecurityWithReadKey:(unsigned char)arg0 writeKey:(unsigned char)arg1 error:(*id)arg2 ;
-(id)_connectionDestination;
-(id)_deserializeUAPJSONData:(id)arg0 error:(*id)arg1 ;
-(id)_serializeUAPJSONObject:(id)arg0 error:(*id)arg1 ;
-(id)initWithDNSName:(id)arg0 port:(NSInteger)arg1 eventsEnabled:(BOOL)arg2 queue:(id)arg3 ;
-(id)initWithDNSName:(id)arg0 port:(NSInteger)arg1 eventsEnabled:(BOOL)arg2 queue:(id)arg3 wakeAddress:(id)arg4 ;
-(id)initWithDNSName:(id)arg0 queue:(id)arg1 ;
-(id)logIdentifier;
-(int)_initializeCoreUtilsHTTPClientWithPort:(NSInteger)arg0 withEventsEnabled:(BOOL)arg1 ;
-(void)_sendHTTPRequestToURL:(id)arg0 withMethod:(int)arg1 requestObject:(id)arg2 serializationType:(NSUInteger)arg3 timeout:(CGFloat)arg4 activity:(id)arg5 completionHandler:(id)arg6 ;
-(void)dealloc;
-(void)httpClient:(id)arg0 didReceiveHTTPMessageWithHeaders:(id)arg1 body:(id)arg2 ;
-(void)httpClient:(id)arg0 willSendHTTPMessageWithHeaders:(id)arg1 body:(id)arg2 ;
-(void)invalidate;
-(void)invalidateWithError:(id)arg0 ;
-(void)sendDELETERequestToURL:(id)arg0 withRequestObject:(id)arg1 serializationType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)sendGETRequestToURL:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)sendPOSTRequestToURL:(id)arg0 withRequestObject:(id)arg1 serializationType:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)sendPUTRequestToURL:(id)arg0 withRequestObject:(id)arg1 serializationType:(NSUInteger)arg2 timeout:(CGFloat)arg3 completionHandler:(id)arg4 ;


@end


#endif