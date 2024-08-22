// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_CONTEXT_H
#define NWCONCRETE_NW_CONTEXT_H

@class NSString;
@protocol OS_nw_context, OS_dispatch_workloop, OS_nw_resolver_config, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_context.h"

@interface NWConcrete_nw_context : NSObject <OS_nw_context>

 {
    NSObject<OS_dispatch_workloop> *workloop;
    char * identifier;
    *nw_context_cache cache;
    *nw_context_globals globals;
    NWConcrete_nw_context *isolated_context;
    NSObject<OS_nw_resolver_config> *fallback_resolver_config;
    NSObject<OS_dispatch_queue> *idle_block_queue;
    id *idle_block;
    os_unfair_lock_s activate_lock;
    unsigned int max_cache_entries;
    unsigned int target_cache_entries;
    unsigned int max_idle_cache_entries;
    NSInteger association_dormant_delay;
    NSInteger context_purge_delay;
    uint8_t inline_tid;
    int scheduling_mode;
    int privacy_level;
    BOOL isolate_protocol_stack;
    BOOL isolate_protocol_cache;
    BOOL is_implicit;
    BOOL is_inline;
    BOOL is_inline_and_cancelled;
    BOOL is_isolated_context;
    BOOL activated;
    BOOL required_encrypted_resolution;
    BOOL do_not_log_trackers;
    BOOL has_active_instances;
    BOOL _pad_bits;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif