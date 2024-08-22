// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCVOCALATTENUATIONPOLICYCONTROLLER_H
#define MPCVOCALATTENUATIONPOLICYCONTROLLER_H

@class NSMutableArray;
@protocol MPCVocalAttenuationPolicyDelegate, OS_dispatch_queue, MPCVocalAttenuationPolicyControllerDelegate;

#import <Foundation/Foundation.h>


@interface MPCVocalAttenuationPolicyController : NSObject <MPCVocalAttenuationPolicyDelegate>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (copy, nonatomic) NSMutableArray *blockingPolicies; // ivar: _blockingPolicies
@property (readonly, weak, nonatomic) NSObject<MPCVocalAttenuationPolicyControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSMutableArray *policies; // ivar: _policies


-(id)blockingEvaluation;
-(id)initWithDelegate:(id)arg0 parameters:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_setupPoliciesWithParameters:(id)arg0 ;
-(void)vocalAttenuationPolicy:(id)arg0 didChangeEvaluation:(id)arg1 ;


@end


#endif