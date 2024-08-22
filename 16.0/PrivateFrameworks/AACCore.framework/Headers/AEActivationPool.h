// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEACTIVATIONPOOL_H
#define AEACTIVATIONPOOL_H

@class NSArray;
@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AEActivationPool : NSObject {
    NSArray *_activations;
    id *_invalidationHandler;
    id<AEPolicyStore> *_policyStore;
    id<AEPerformancePrimitives> *_performancePrimitives;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif