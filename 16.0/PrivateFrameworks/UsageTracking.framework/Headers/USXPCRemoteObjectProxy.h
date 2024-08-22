// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef USXPCREMOTEOBJECTPROXY_H
#define USXPCREMOTEOBJECTPROXY_H


#import <Foundation/Foundation.h>


@interface USXPCRemoteObjectProxy : NSObject



+(void)proxyFromConnection:(id)arg0 withRetryCount:(NSUInteger)arg1 proxyHandler:(id)arg2 ;
+(void)synchronousProxyFromConnection:(id)arg0 withRetryCount:(NSUInteger)arg1 proxyHandler:(id)arg2 ;


@end


#endif