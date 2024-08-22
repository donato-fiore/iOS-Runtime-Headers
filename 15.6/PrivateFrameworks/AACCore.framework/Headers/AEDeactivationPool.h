// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AEDEACTIVATIONPOOL_H
#define AEDEACTIVATIONPOOL_H

@class NSArray;
@protocol AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AEDeactivationPool : NSObject {
    NSArray *_persistentDeactivations;
    id<AEPolicyStore> *_policyStore;
    id<AEPerformancePrimitives> *_performancePrimitives;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif