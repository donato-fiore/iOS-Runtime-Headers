// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_PROTOCOL_OPTIONS_H
#define NWCONCRETE_NW_PROTOCOL_OPTIONS_H

@class NSString;
@protocol OS_nw_protocol_options, OS_nw_endpoint, OS_xpc_object;

#import <Foundation/Foundation.h>

#import "NWConcrete_nw_protocol_definition.h"

@interface NWConcrete_nw_protocol_options : NSObject <OS_nw_protocol_options>

 {
    NWConcrete_nw_protocol_definition *definition;
    ? protocol_handle;
    NSObject<OS_nw_endpoint> *proxy_endpoint;
    NSObject<OS_xpc_object> *legacy_parameters;
    char * log_id_str;
    unsigned short log_id_num;
    *void handle;
    BOOL override_stack_endpoint;
    BOOL prohibit_joining;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dealloc;


@end


#endif