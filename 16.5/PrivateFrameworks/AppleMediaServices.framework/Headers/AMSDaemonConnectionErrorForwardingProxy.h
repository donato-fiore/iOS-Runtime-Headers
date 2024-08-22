// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDAEMONCONNECTIONERRORFORWARDINGPROXY_H
#define AMSDAEMONCONNECTIONERRORFORWARDINGPROXY_H

@class NSProxy, NSXPCInterface;
@protocol NSXPCProxyCreating;



@interface AMSDaemonConnectionErrorForwardingProxy : NSProxy

@property (readonly, nonatomic) NSXPCInterface *interface; // ivar: _interface
@property (readonly, nonatomic) BOOL isSync; // ivar: _isSync
@property (readonly, nonatomic) NSObject<NSXPCProxyCreating> *proxy; // ivar: _proxy


-(id)_blockToInvokeWithErrorForwardingForInvocation:(id)arg0 errorArgumentIndex:(*NSUInteger)arg1 ;
-(id)initWithProxy:(id)arg0 fromInterface:(id)arg1 ;
-(id)initWithProxy:(id)arg0 fromInterface:(id)arg1 isSync:(BOOL)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif