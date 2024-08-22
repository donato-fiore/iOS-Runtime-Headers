// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATNETSERVICESOCKET_H
#define ATNETSERVICESOCKET_H

@class NSString;
@protocol NSNetServiceDelegate, NSStreamDelegate, OS_tcp_connection, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;


#import "ATSocket.h"

@interface ATNetServiceSocket : ATSocket <NSNetServiceDelegate, NSStreamDelegate>

 {
    BOOL _connected;
    NSString *_serviceName;
    NSString *_serviceType;
    NSString *_serviceDomain;
    NSString *_hostname;
    unsigned short _port;
    NSObject<OS_tcp_connection> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSObject<OS_dispatch_source> *_source;
    char _readBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableTLS; // ivar: _enableTLS
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (readonly) Class superclass;


-(BOOL)_connect;
-(BOOL)open;
-(id)initWithServiceName:(id)arg0 type:(id)arg1 domain:(id)arg2 ;
-(void)closeDescriptor;


@end


#endif