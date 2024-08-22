// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PROTOCOL_DEFINITION_H
#define NWCONCRETE_NW_PROTOCOL_DEFINITION_H

@class NSString;
@protocol OS_nw_protocol_definition;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition>

 {
    nw_protocol_identifier identifier;
    unsigned char unique_identifier;
    int variant;
    *nw_protocol_definition_common_state common_state;
    *nw_protocol_definition_extended_state extended_state;
    *nw_protocol_plugin_definition plugin_definition;
    *unk allocate_options;
    *unk copy_options;
    *unk deallocate_options;
    *unk check_equality_options;
    *unk compare_options;
    *unk serialize_options;
    *unk deserialize_options;
    *unk allocate_metadata;
    *unk deallocate_metadata;
    *unk compare_metadata;
    *unk serialize_metadata;
    *unk deserialize_metadata;
    BOOL framer;
    BOOL supports_replies;
    BOOL message_is_stream;
    BOOL receive_single_message;
    BOOL multipath;
    BOOL supports_discontiguous_data;
    BOOL has_global_definition;
    BOOL is_proxy;
    BOOL serialize_in_parameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif