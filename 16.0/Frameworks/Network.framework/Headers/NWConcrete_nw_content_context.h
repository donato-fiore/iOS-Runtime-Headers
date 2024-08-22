// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_CONTENT_CONTEXT_H
#define NWCONCRETE_NW_CONTENT_CONTEXT_H

@class NSString;
@protocol OS_nw_content_context, OS_nw_array, OS_nw_error;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_content_context.h"

@interface NWConcrete_nw_content_context : NSObject <OS_nw_content_context>

 {
    unsigned char packet_id;
    char identifier;
    NWConcrete_nw_content_context *antecedent;
    NSUInteger expiration_milliseconds;
    NSUInteger enqueue_time;
    CGFloat relative_priority;
    NSObject<OS_nw_array> *protocol_metadatas;
    NSObject<OS_nw_error> *error;
    NSObject<OS_nw_array> *connection_group_info;
    os_unfair_lock_s lock;
    unsigned char app_type;
    unsigned char app_metadata;
    BOOL is_final;
    BOOL expiration_checked;
    BOOL completed_send;
    BOOL has_packet_id;
    BOOL connection_group_connection;
    BOOL connection_group_multicast;
    BOOL supports_replies;
    BOOL is_wake_packet;
    BOOL has_app_metadata;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)redactedDescription;
-(void)dealloc;


@end


#endif