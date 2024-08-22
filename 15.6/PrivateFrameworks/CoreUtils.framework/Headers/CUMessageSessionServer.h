// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUMESSAGESESSIONSERVER_H
#define CUMESSAGESESSIONSERVER_H

@class NSMutableSet, NSXPCListenerEndpoint, NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUMessageSession.h"

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate>

 {
    NSMutableSet *_xpcConnections;
    NSXPCListenerEndpoint *_xpcEndpoint;
    NSXPCListener *_xpcListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *deregisterRequestHandler; // ivar: _deregisterRequestHandler
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *registerRequestHandler; // ivar: _registerRequestHandler
@property (copy, nonatomic) id *sendRequestHandler; // ivar: _sendRequestHandler
@property (readonly) Class superclass;
@property (retain, nonatomic) CUMessageSession *templateSession; // ivar: _templateSession


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_connectionInvalidated:(id)arg0 ;
-(void)activate;
-(void)invalidate;


@end


#endif