// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXNETWORKEXTENSIONMESSAGECONTROLLERHOST_H
#define CXNETWORKEXTENSIONMESSAGECONTROLLERHOST_H

@class NSMutableSet, NSString, NSMapTable, NSXPCListener;
@protocol NSXPCListenerDelegate, CXNetworkExtensionMessageControllerHostConnectionDelegate;

#import <Foundation/Foundation.h>


@interface CXNetworkExtensionMessageControllerHost : NSObject <NSXPCListenerDelegate, CXNetworkExtensionMessageControllerHostConnectionDelegate>



@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) NSMutableSet *connections; // ivar: _connections
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCListener *xpcListener; // ivar: _xpcListener


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)networkExtensionMessageControllerHostConnection:(id)arg0 didReceiveIncomingMessage:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(void)networkExtensionMessageControllerHostConnectionInvalidated:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif