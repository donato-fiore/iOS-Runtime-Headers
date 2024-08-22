// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STXPCREMOTEOBJECTPROXY_H
#define STXPCREMOTEOBJECTPROXY_H


#import <Foundation/Foundation.h>


@interface STXPCRemoteObjectProxy : NSObject



+(void)_proxyFromConnection:(id)arg0 withRetryCount:(NSUInteger)arg1 proxyHandler:(id)arg2 ;
+(void)_synchronousProxyFromConnection:(id)arg0 withRetryCount:(NSUInteger)arg1 proxyHandler:(id)arg2 ;
+(void)proxyFromConnection:(id)arg0 proxyHandler:(id)arg1 ;
+(void)synchronousProxyFromConnection:(id)arg0 proxyHandler:(id)arg1 ;


@end


#endif