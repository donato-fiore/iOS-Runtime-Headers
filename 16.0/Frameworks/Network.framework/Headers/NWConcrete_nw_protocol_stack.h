// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NWCONCRETE_NW_PROTOCOL_STACK_H
#define NWCONCRETE_NW_PROTOCOL_STACK_H

@class NSString;
@protocol OS_nw_protocol_stack, OS_nw_array, OS_nw_protocol_options;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_protocol_stack : NSObject <OS_nw_protocol_stack>

 {
    NSObject<OS_nw_array> *persistent_application_protocols;
    NSObject<OS_nw_array> *application_protocols;
    NSObject<OS_nw_protocol_options> *transport_protocol;
    NSObject<OS_nw_protocol_options> *secondary_transport_protocol;
    NSObject<OS_nw_protocol_options> *original_proxied_transport_protocol;
    NSObject<OS_nw_protocol_options> *internet_protocol;
    NSObject<OS_nw_protocol_options> *link_protocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif