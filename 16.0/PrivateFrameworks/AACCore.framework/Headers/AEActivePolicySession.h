// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEACTIVEPOLICYSESSION_H
#define AEACTIVEPOLICYSESSION_H

@class NSArray;
@protocol AEInvalidationRouterDelegate, AEPolicySession, AEPolicyStore, AEPerformancePrimitives, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AEInvalidationRouter.h"

@interface AEActivePolicySession : NSObject <AEInvalidationRouterDelegate, AEPolicySession>

 {
    id<AEPolicyStore> *_policyStore;
    id<AEPerformancePrimitives> *_performancePrimitives;
    AEInvalidationRouter *_invalidationRouter;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_activation;
    NSArray *_persistentDeactivations;
}


@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


+(id)sessionWithPolicyStore:(id)arg0 performancePrimitives:(id)arg1 invalidationRouter:(id)arg2 activations:(id)arg3 persistentDeactivations:(id)arg4 queue:(id)arg5 ;
-(void)deactivateWithCompletion:(id)arg0 ;
-(void)invalidationRouter:(id)arg0 didReceiveInvalidationError:(id)arg1 ;


@end


#endif