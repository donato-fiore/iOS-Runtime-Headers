// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MSXPCREMOTEPROXY_H
#define _MSXPCREMOTEPROXY_H

@class NSXPCInterface;
@protocol NSXPCProxyCreating;

#import <Foundation/Foundation.h>

#import "MSXPCConnection.h"

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating>

 {
    os_unfair_lock_s _selectorLock;
    *__CFDictionary _knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    id *_errorHandler;
}


@property (retain, nonatomic, setter=___setNSXPCRemoteObjectProxy:) id *___nsxpc_remoteObjectProxy; // ivar: ____nsxpc_remoteObjectProxy


-(BOOL)conformsToProtocol:(id)arg0 ;
-(id)initWithConnection:(id)arg0 interface:(id)arg1 errorHandler:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif