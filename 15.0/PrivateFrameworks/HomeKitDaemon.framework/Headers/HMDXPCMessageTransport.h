// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDXPCMESSAGETRANSPORT_H
#define HMDXPCMESSAGETRANSPORT_H

@class HMFMessageTransport, NSMutableSet, NSXPCInterface, NSMutableDictionary, HMXPCMessageTransportConfiguration, NSArray, NSString, NSXPCListener;
@protocol NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate, HMFLocking, OS_dispatch_queue;


#import "HMDXPCMessageCountTracker.h"
#import "HMDProcessMonitor.h"

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate, HMFTimerDelegate>

 {
    id<HMFLocking> *_lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    HMDXPCMessageCountTracker *_xpcCounterTracker;
    NSMutableDictionary *_cachedResponses;
}


@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSXPCListener *listener; // ivar: _listener
@property (readonly) HMDProcessMonitor *processMonitor; // ivar: _processMonitor
@property (readonly) Class superclass;


+(id)accessorySetupTransport;
+(id)defaultTransport;
+(id)logCategory;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)__retrieveAndClearMessagesForCachedResponseEntry:(id)arg0 ;
-(id)activeRequests;
-(id)dumpState;
-(id)initWithConfiguration:(id)arg0 ;
-(id)logIdentifier;
-(id)retrieveAndClearMessagesForRequestInfo:(id)arg0 ;
-(void)_reportCompletion:(id)arg0 ;
-(void)cacheResponseMessage:(id)arg0 ;
-(void)cacheResponsesForMessageWithIdentifier:(id)arg0 transport:(id)arg1 reportContext:(id)arg2 ;
-(void)messageTransport:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)reportCompletionForMessageWithIdentifier:(id)arg0 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)submitCounters;
-(void)timerDidFire:(id)arg0 ;


@end


#endif