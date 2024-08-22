// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMBSOCKET_H
#define SMBSOCKET_H

@class NSMutableArray, NSString;
@protocol OS_nw_endpoint, OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_source, OS_nw_connection;

#import <Foundation/Foundation.h>

#import "SMBPiston.h"

@interface SMBSocket : NSObject {
    SMBPiston *pd;
    NSUInteger state;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_endpoint> *remote_endpoint;
    NSObject<OS_dispatch_semaphore> *event_semaphore;
    int nw_conn_state;
    NSObject<OS_dispatch_queue> *nw_conn_queue;
    unsigned int is_NetBIOS;
    unsigned char ipv4v6DotName;
    *sockaddr server_addr;
    _opaque_pthread_mutex_t io_rqlock;
    NSMutableArray *io_rqlist;
    NSObject<OS_dispatch_queue> *send_queue;
    _opaque_pthread_mutex_t skt_lock;
    NSObject<OS_dispatch_queue> *timer_queue;
    NSObject<OS_dispatch_source> *timer;
    unsigned int timer_running;
    NSObject<OS_dispatch_semaphore> *timer_semaphore;
    id *event_handler_callback;
}


@property unsigned int connectTimeOut; // ivar: _connectTimeOut
@property (retain) NSObject<OS_nw_connection> *connection; // ivar: _connection
@property timespec last_echo; // ivar: _last_echo
@property timespec last_recv; // ivar: _last_recv
@property (retain) NSString *netBiosName; // ivar: _netBiosName
@property unsigned short port; // ivar: _port
@property (retain) NSObject<OS_dispatch_queue> *recv_queue; // ivar: _recv_queue
@property (retain) NSString *serverName; // ivar: _serverName
@property (retain) NSObject<OS_dispatch_queue> *signing_queue; // ivar: _signing_queue


-(char *)getIPv4IPv6DotName;
-(id)getEventHandler:(SEL)arg0 ;
-(int)connectSocket;
-(int)openSocket:(id)arg0 ;
-(int)processReply:(*void)arg0 ;
-(int)send:(id)arg0 ;
-(int)sendRequest:(id)arg0 ;
-(int)writeEnabled;
-(struct sockaddr *)getServerAddress;
-(unsigned int)getIPv4IPv6DotNameMaxLength;
-(unsigned int)isPerAppVPN;
-(void)callEventHandler:(unsigned int)arg0 contextPtr:(id)arg1 returnValue:(unsigned int)arg2 ;
-(void)closeSocket;
-(void)readData:(*void)arg0 ;
-(void)readNBHeader;
-(void)setEventHandler:(id)arg0 ;
-(void)setNetBIOSHeader:(*unsigned int)arg0 nbType:(unsigned char)arg1 length:(unsigned int)arg2 ;
-(void)timeOutCheck;


@end


#endif