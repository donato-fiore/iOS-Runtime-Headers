// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ANONYMOUSDAEMON_H
#define ANONYMOUSDAEMON_H

@class NSString, NSXPCListenerEndpoint, NSXPCInterface, NSXPCListener;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface anonymousDaemon : NSObject <NSXPCListenerDelegate>



@property (readonly) Class clientClass; // ivar: _clientClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint; // ivar: _endpoint
@property (readonly) NSUInteger hash;
@property (readonly) NSXPCInterface *interface; // ivar: _interface
@property (readonly) NSXPCListener *listener; // ivar: _listener
@property (readonly) NSObject *proxy; // ivar: _proxy
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initUsingInterface:(id)arg0 clientClass:(Class)arg1 queue:(id)arg2 andProxy:(id)arg3 ;
-(id)initWithListener:(id)arg0 ;
-(void)dealloc;


@end


#endif