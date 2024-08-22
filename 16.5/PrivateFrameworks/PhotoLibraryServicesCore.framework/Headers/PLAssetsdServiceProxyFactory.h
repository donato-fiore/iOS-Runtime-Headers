// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLASSETSDSERVICEPROXYFACTORY_H
#define PLASSETSDSERVICEPROXYFACTORY_H

@class NSString;
@protocol PLXPCProxyCreating, PLXPCAsyncProxyCreating, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating>

 {
    SEL _proxyGetterSelector;
    id<PLXPCProxyCreating> *_serviceProxy;
    id<PLXPCProxyCreating> *_proxyCreating;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)_inq_createServiceProxyWithCallStackSymbols:(id)arg0 errorHandler:(id)arg1 ;
-(id)_inq_createServiceProxyWithErrorHandler:(id)arg0 ;
-(id)_unboostingRemoteObjectProxy;
-(id)initWithQueue:(id)arg0 proxyCreating:(id)arg1 proxyGetter:(SEL)arg2 ;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)serviceProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_logReplyError:(id)arg0 withCallStackSymbols:(id)arg1 ;
-(void)addBarrierBlock:(id)arg0 ;
// -(void)remoteObjectProxyWithErrorHandler:(id)arg0 handler:(unk)arg1  ;


@end


#endif