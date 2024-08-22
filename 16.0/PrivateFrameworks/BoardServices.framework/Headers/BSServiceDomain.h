// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSSERVICEDOMAIN_H
#define BSSERVICEDOMAIN_H

@class NSString, NSDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "BSServiceDomainSpecification.h"
#import "BSXPCServiceConnectionListener.h"

@interface BSServiceDomain : NSObject {
    BSServiceDomainSpecification *_specification;
    os_unfair_lock_s _lock;
    BSXPCServiceConnectionListener *_xpcListener;
    NSString *_listenerEndpointDescription;
    NSDictionary *_identifierToService;
    NSMutableArray *_lock_incomingConnections;
    NSUInteger _lock_activations;
    BOOL _lock_deactivating;
    BOOL _lock_invalidated;
}




-(id)debugDescription;
-(id)init;


@end


#endif