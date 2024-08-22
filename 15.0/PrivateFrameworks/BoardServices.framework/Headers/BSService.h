// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSSERVICE_H
#define BSSERVICE_H

@class BSZeroingWeakReference, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "BSServiceSpecification.h"
#import "BSServiceDomainSpecification.h"

@interface BSService : NSObject {
    BSServiceSpecification *_specification;
    BSServiceDomainSpecification *_domainSpecification;
    os_unfair_lock_s _lock;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
    BOOL _lock_invalidated;
}






@end


#endif