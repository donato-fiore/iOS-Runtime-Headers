// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOXPCREMOTEOBJECTPROXY_H
#define MOXPCREMOTEOBJECTPROXY_H


#import <Foundation/Foundation.h>


@interface MOXPCRemoteObjectProxy : NSObject



+(void)proxyFromConnection:(id)arg0 withRetryCount:(NSUInteger)arg1 proxyHandler:(id)arg2 ;
+(void)synchronousProxyFromConnection:(id)arg0 withRetryCount:(NSUInteger)arg1 proxyHandler:(id)arg2 ;


@end


#endif