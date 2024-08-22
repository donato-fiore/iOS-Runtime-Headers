// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKTRUSTEVALUATIONPOLICIES_H
#define CRKTRUSTEVALUATIONPOLICIES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CRKTrustEvaluationPolicies : NSObject

@property (readonly, copy, nonatomic) NSArray *policyRefs; // ivar: _policyRefs


+(id)defaultPolicicesForServerEvaluation;
+(id)defaultPoliciesForClientEvaluation;
-(id)init;
-(id)initWithPolicyRefs:(id)arg0 ;


@end


#endif