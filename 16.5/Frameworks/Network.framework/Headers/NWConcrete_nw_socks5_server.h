// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_SOCKS5_SERVER_H
#define NWCONCRETE_NW_SOCKS5_SERVER_H

@class NSString;
@protocol OS_nw_socks5_server, OS_dispatch_queue, OS_nw_parameters, OS_nw_listener, OS_nw_array, OS_nw_dictionary, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_socks5_server.h"

@interface NWConcrete_nw_socks5_server : NSObject <OS_nw_socks5_server>

 {
    NSUInteger ss_id;
    NWConcrete_nw_socks5_server *ss_internally_retained_object;
    os_unfair_lock_s ss_lock;
    NSObject<OS_dispatch_queue> *ss_queue;
    NSObject<OS_nw_parameters> *ss_parameters;
    NSObject<OS_dispatch_queue> *ss_client_queue;
    id *ss_state_handler;
    id *ss_error;
    NSObject<OS_nw_listener> *ss_listener;
    NSObject<OS_nw_array> *ss_socks5_connections;
    NSObject<OS_nw_dictionary> *ss_socks5_udp_associate_connections;
    nw_shoes_statistics ss_stats;
    NSUInteger ss_assertion_toggle_mach_time;
    NSObject<OS_dispatch_source> *ss_assertion_timer;
    unsigned int ss_assertion;
    unsigned int ss_busy_count;
    BOOL ss_shoes;
    BOOL ss_assertion_timer_running;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif