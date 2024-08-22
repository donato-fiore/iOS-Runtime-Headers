// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCONTEXTXPCCLIENT_H
#define CKCONTEXTXPCCLIENT_H


#import <Foundation/Foundation.h>


@interface CKContextXPCClient : NSObject



+(id)invalidateAndGetNewXpcConnection;
+(id)isXPCConnectionError:(id)arg0 ;
+(id)newXpcConnection;
+(id)xpcConnection;
+(void)initialize;
+(void)invalidateXpcConnection;
+(void)registerForServiceUpdateNotifications:(id)arg0 ;


@end


#endif