// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSCFSOCKSPROXY_H
#define _NSCFSOCKSPROXY_H

@class NSString, NSDictionary;
@protocol NSProxyConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "__CFN_SocksHandshake.h"
#import "NSProxyConnection.h"

@interface _NSCFSocksProxy : NSObject <NSProxyConnectionDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    int _outPort;
    NSString *_outHost;
    __CFN_SocksHandshake *_socksHandshake;
    NSProxyConnection *_inbound;
    NSProxyConnection *_outbound;
    NSDictionary *_configuration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)handleIncomingConnection:(id)arg0 queue:(id)arg1 configuration:(id)arg2 ;
-(void)cleanup;
-(void)connected:(int)arg0 ;
-(void)dealloc;
-(void)outboundConnectionCompleteWithError:(int)arg0 ;
-(void)outboundConnectionReceivedData:(id)arg0 handler:(id)arg1 ;


@end


#endif