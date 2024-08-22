// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_BROWSER_H
#define NWCONCRETE_NW_BROWSER_H

@class NSString;
@protocol OS_nw_browser, OS_dispatch_queue, OS_nw_browse_descriptor, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_path, OS_nw_dictionary, OS_nw_array, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_browser.h"

@interface NWConcrete_nw_browser : NSObject <OS_nw_browser>

 {
    os_unfair_lock_s lock;
    NSObject<OS_dispatch_queue> *client_queue;
    int type;
    NSObject<OS_nw_browse_descriptor> *descriptor;
    NSObject<OS_nw_parameters> *parameters;
    NWConcrete_nw_browser *internally_retained_object;
    id *browse_results_changed_handler;
    id *state_changed_handler;
    int state;
    NSObject<OS_nw_path_evaluator> *browse_evaluator;
    NSObject<OS_nw_path> *current_browse_path;
    NSObject<OS_nw_dictionary> *browse_flow_registrations;
    NSObject<OS_nw_array> *path_endpoint_array;
    *_DNSServiceRef_t main_dns_ref;
    *_DNSServiceRef_t secondary_dns_ref;
    NSObject<OS_nw_array> *old_results;
    NSObject<OS_nw_array> *new_results;
    NSObject<OS_xpc_object> *dns_ref_map;
    NSObject<OS_xpc_object> *changes_map;
    NSObject<OS_nw_dictionary> *txt_record_map;
    char * description;
    char * logging_description;
    unsigned int log_id;
    BOOL include_txt_record;
    BOOL sign_results;
    BOOL redact_logs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif