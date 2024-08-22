// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATNETSERVICELISTENER_H
#define ATNETSERVICELISTENER_H

@class NSString;
@protocol OS_tcp_listener, OS_dispatch_queue;


#import "ATMessageLinkListener.h"

@interface ATNetServiceListener : ATMessageLinkListener {
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSObject<OS_tcp_listener> *_tcpListener;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (nonatomic) BOOL enableTLS; // ivar: _enableTLS
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName


-(BOOL)start;
-(id)initWithServiceName:(id)arg0 type:(id)arg1 domain:(id)arg2 ;
-(void)stop;


@end


#endif