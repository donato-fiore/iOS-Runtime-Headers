// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMFHTTPSERVER_H
#define HMFHTTPSERVER_H

@class NSMutableArray, NSArray, NSString;
@protocol _HMFCFHTTPServerDelegate, HMFHTTPClientConnectionDelegate, HMFLogging, HMFDumpState, OS_dispatch_queue, HMFHTTPServerDelegate;


#import "HMFObject.h"
#import "_HMFCFHTTPServer.h"
#import "HMFMutableNetService.h"

@interface HMFHTTPServer : HMFObject <_HMFCFHTTPServerDelegate, HMFHTTPClientConnectionDelegate, HMFLogging, HMFDumpState>

 {
    os_unfair_lock_s _lock;
    NSMutableArray *_requestHandlers;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property CGFloat connectionIdleTimeout; // ivar: _connectionIdleTimeout
@property (readonly, copy) NSArray *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMFHTTPServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _HMFCFHTTPServer *internal; // ivar: _internal
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) HMFMutableNetService *netService; // ivar: _netService
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly) NSUInteger port; // ivar: _port
@property (readonly, copy) NSArray *requestHandlers;
@property (readonly, copy, nonatomic) NSString *serviceType; // ivar: _serviceType
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)dumpState;
-(id)init;
-(id)initWithServiceType:(id)arg0 name:(id)arg1 port:(NSUInteger)arg2 options:(NSUInteger)arg3 ;
-(id)logIdentifier;
-(id)shortDescription;
-(void)_handleClosedConnection:(id)arg0 ;
-(void)_handleOpenedConnection:(id)arg0 ;
-(void)_handleReceivedRequest:(id)arg0 connection:(id)arg1 ;
-(void)_stopWithError:(id)arg0 ;
-(void)addConnection:(id)arg0 ;
-(void)connection:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)dealloc;
-(void)registerRequestHandler:(id)arg0 ;
-(void)removeConnection:(id)arg0 ;
-(void)server:(id)arg0 didCloseConnection:(id)arg1 ;
-(void)server:(id)arg0 didOpenConnection:(id)arg1 ;
-(void)serverDidInvalidate:(id)arg0 ;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;
-(void)stopWithError:(id)arg0 ;
-(void)unregisterRequestHandler:(id)arg0 ;


@end


#endif