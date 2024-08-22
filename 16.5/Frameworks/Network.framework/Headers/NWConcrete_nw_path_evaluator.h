// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PATH_EVALUATOR_H
#define NWCONCRETE_NW_PATH_EVALUATOR_H

@class NSString;
@protocol OS_nw_path_evaluator, OS_nw_parameters, OS_nw_endpoint, OS_nw_group_descriptor, OS_nw_browse_descriptor, OS_nw_advertise_descriptor, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_path.h"

@interface NWConcrete_nw_path_evaluator : NSObject <OS_nw_path_evaluator>

 {
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NWConcrete_nw_path *path;
    NSObject<OS_dispatch_queue> *client_queue;
    id *update_block;
    id *cancel_handler;
    unsigned char client_id;
    os_unfair_lock_s lock;
    unsigned int flow_count;
    unsigned short custom_ethertype;
    unsigned char custom_ip_protocol;
    BOOL is_default;
    BOOL is_listener;
    BOOL is_interpose;
    BOOL is_custom_ether;
    BOOL started;
    BOOL cancelled;
    BOOL logging;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif