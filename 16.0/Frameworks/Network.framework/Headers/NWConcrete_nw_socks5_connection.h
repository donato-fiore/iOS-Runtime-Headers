// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_SOCKS5_CONNECTION_H
#define NWCONCRETE_NW_SOCKS5_CONNECTION_H

@class NSString;
@protocol OS_nw_socks5_connection, OS_nw_socks5_server, OS_nw_connection, OS_dispatch_queue, OS_nw_path_evaluator, OS_nw_error;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_socks5_connection.h"

@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection>

 {
    NSUInteger sc_id;
    NWConcrete_nw_socks5_connection *sc_internally_retained_object;
    NSObject<OS_nw_socks5_server> *sc_parent;
    NSObject<OS_nw_connection> *sc_in_connection;
    NSObject<OS_dispatch_queue> *sc_queue;
    id *sc_cancel;
    unsigned char sc_state;
    unsigned char sc_out_address_type;
    NSObject<OS_nw_path_evaluator> *sc_prefer_wifi_path_evaluator;
    int sc_prefer_wifi_previous_path_status;
    ? sc_out_address;
    unsigned short sc_shoes_request_length_hbo;
    unsigned char sc_out_address_domain_length;
    NSUInteger sc_busy_counter;
    NSUInteger sc_busy_start_time_nanos;
    NSUInteger sc_total_busy_time_nanos;
    NSUInteger sc_start_time_nanos;
    NSObject<OS_nw_connection> *sc_out_connection;
    NSObject<OS_nw_error> *sc_error;
    BOOL sc_out_connection_failed_or_sent_write_close;
    BOOL sc_in_connection_failed_or_sent_write_close;
    BOOL sc_out_disable_proxy;
    BOOL sc_sent_reply;
    BOOL sc_has_read_from_in_connection;
    BOOL sc_out_udp;
    BOOL sc_should_prefer_wifi;
    NSUInteger sc_out_connection_bytes_read;
    NSUInteger sc_out_connection_bytes_written;
    NSUInteger sc_in_connection_bytes_read;
    NSUInteger sc_in_connection_bytes_written;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif