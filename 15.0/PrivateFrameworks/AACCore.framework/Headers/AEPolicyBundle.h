// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEPOLICYBUNDLE_H
#define AEPOLICYBUNDLE_H

@class NSArray;
@protocol OS_dispatch_queue, AEPolicyStore, AEPerformancePrimitives;

#import <Foundation/Foundation.h>


@interface AEPolicyBundle : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<AEPolicyStore> *_policyStore;
    NSArray *_activations;
    id<AEPerformancePrimitives> *_performancePrimitives;
}




-(id)initWithPolicyStore:(id)arg0 performancePrimitives:(id)arg1 activations:(id)arg2 queue:(id)arg3 ;
-(id)recoverySession;
-(void)activateSessionWithCompletion:(id)arg0 ;


@end


#endif