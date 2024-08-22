// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDSXPCSERVER_H
#define PDSXPCSERVER_H

@class NSMutableArray, NSArray, NSString;
@protocol PDSXPCListenerDelegate, PDSXPCListener, PDSDaemonListenerVendor, PDSXPCInterfaceVendor, OS_dispatch_workloop;

#import <Foundation/Foundation.h>


@interface PDSXPCServer : NSObject <PDSXPCListenerDelegate>



@property (retain, nonatomic) NSMutableArray *XPCClients; // ivar: _XPCClients
@property (retain, nonatomic) NSObject<PDSXPCListener> *XPCListener; // ivar: _XPCListener
@property (readonly, nonatomic) NSArray *connectedClients;
@property (retain, nonatomic) NSObject<PDSDaemonListenerVendor> *daemonListenerVendor; // ivar: _daemonListenerVendor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<PDSXPCInterfaceVendor> *interfaceVendor; // ivar: _interfaceVendor
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_workloop> *workloop; // ivar: _workloop


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithServiceName:(id)arg0 listenerVendor:(id)arg1 interfaceVendor:(id)arg2 daemonListenerVendor:(id)arg3 queue:(id)arg4 workloop:(id)arg5 ;
-(void)resume;


@end


#endif