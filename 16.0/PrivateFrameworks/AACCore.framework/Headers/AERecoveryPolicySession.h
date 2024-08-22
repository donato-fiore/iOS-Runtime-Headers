// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AERECOVERYPOLICYSESSION_H
#define AERECOVERYPOLICYSESSION_H

@class NSArray;
@protocol AEPolicySession, AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AERecoveryPolicySession : NSObject <AEPolicySession>

 {
    NSArray *_persistentDeactivations;
    id<AEPolicyStore> *_policyStore;
    id<AEPerformancePrimitives> *_performancePrimitives;
    NSObject<OS_dispatch_queue> *_queue;
}




-(void)deactivateWithCompletion:(id)arg0 ;


@end


#endif