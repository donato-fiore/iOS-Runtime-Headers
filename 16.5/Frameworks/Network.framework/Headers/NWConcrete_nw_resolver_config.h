// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWCONCRETE_NW_RESOLVER_CONFIG_H
#define NWCONCRETE_NW_RESOLVER_CONFIG_H

@class NSString;
@protocol OS_nw_resolver_config;

#import <Foundation/Foundation.h>


@interface NWConcrete_nw_resolver_config : NSObject <OS_nw_resolver_config>

 {
    retained_ptr<NSObject<OS_xpc_object> *> dictionary;
    unsigned char identifier;
    retained_ptr<NSObject<OS_dispatch_source> *> kernel_event_source;
    retained_ptr<NSObject<OS_nw_fd_wrapper> *> kernel_event_wrapper;
    retained_ptr<NSObject<OS_nw_fd_wrapper> *> agent_fd;
    unfair_mutex lock;
    unsigned int generation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif