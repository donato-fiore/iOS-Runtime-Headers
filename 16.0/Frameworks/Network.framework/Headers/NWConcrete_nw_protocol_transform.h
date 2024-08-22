// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PROTOCOL_TRANSFORM_H
#define NWCONCRETE_NW_PROTOCOL_TRANSFORM_H

@class NSString;
@protocol OS_nw_protocol_transform, OS_nw_endpoint, OS_xpc_object, OS_nw_protocol_stack;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_transform : NSObject <OS_nw_protocol_transform>

 {
    BOOL clear_application;
    BOOL clear_transport;
    BOOL clear_internet;
    BOOL no_proxy;
    BOOL prohibit_direct;
    BOOL tfo;
    BOOL tfo_no_cookie;
    BOOL no_fallback;
    BOOL fast_open_force_enable;
    BOOL set_multipath_service;
    int fallback_mode;
    int multipath_service;
    int data_mode;
    NSObject<OS_nw_endpoint> *replace_endpoint;
    NSObject<OS_xpc_object> *disabled_protocols;
    NSObject<OS_nw_protocol_stack> *transform_stack;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif