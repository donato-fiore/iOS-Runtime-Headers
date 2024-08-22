// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EMREMOTEINTERFACEDISTANTOBJECT_H
#define _EMREMOTEINTERFACEDISTANTOBJECT_H

@protocol EMXPCProxyCreating, EMRemoteProxyGenerator;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface _EMRemoteInterfaceDistantObject : NSObject <EMXPCProxyCreating>



@property (retain, nonatomic) NSObject<EMRemoteProxyGenerator> *proxyGenerator; // ivar: _proxyGenerator
@property (readonly, copy, nonatomic) id *reattemptHandler; // ivar: _reattemptHandler
@property (readonly, nonatomic) EMRemoteConnection *remoteInterface; // ivar: _remoteInterface
@property (readonly, nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous


-(BOOL)conformsToProtocol:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithRemoteInterface:(id)arg0 proxyGenerator:(id)arg1 synchronous:(BOOL)arg2 reattemptHandler:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)reattemptingRemoteObjectProxy;
-(id)reattemptingRemoteObjectProxyWithReattemptHandler:(id)arg0 ;
-(id)remoteObjectProxy;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)_forwardStackInvocation:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif