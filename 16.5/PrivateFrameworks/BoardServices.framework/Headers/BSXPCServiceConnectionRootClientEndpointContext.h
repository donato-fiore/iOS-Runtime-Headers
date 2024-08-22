// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BSXPCSERVICECONNECTIONROOTCLIENTENDPOINTCONTEXT_H
#define BSXPCSERVICECONNECTIONROOTCLIENTENDPOINTCONTEXT_H

@protocol OS_xpc_object;


#import "BSXPCServiceConnectionRootContext.h"

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext {
    BOOL _nonLaunching;
    NSObject<OS_xpc_object> *_endpoint;
}




-(BOOL)isClient;
-(BOOL)isNonLaunching;


@end


#endif