// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPSERVICE_H
#define FPSERVICE_H

@class NSXPCConnection, NSXPCInterface;
@protocol FPDLifetimeServicing, NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface FPService : NSObject <FPDLifetimeServicing>

 {
    id<FPDLifetimeServicing> *_extender;
    NSXPCConnection *_connection;
    id<NSXPCProxyCreating> *_proxy;
    NSXPCInterface *_interface;
}


@property (readonly) id *remoteObjectProxy;
@property (readonly) id *synchronousRemoteObjectProxy;


-(id)initWithEndpoint:(id)arg0 interface:(id)arg1 lifetimeExtender:(id)arg2 providerDomainID:(id)arg3 ;
-(id)initWithProxy:(id)arg0 interface:(id)arg1 lifetimeExtender:(id)arg2 providerDomainID:(id)arg3 ;
-(void)dealloc;
-(void)invalidate;
-(void)stopExtendingLifetime;


@end


#endif