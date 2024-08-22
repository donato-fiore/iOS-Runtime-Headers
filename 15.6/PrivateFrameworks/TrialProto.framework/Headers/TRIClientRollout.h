// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRICLIENTROLLOUT_H
#define TRICLIENTROLLOUT_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"
#import "TRIAssignment.h"
#import "TRIShadowEvaluation.h"

@interface TRIClientRollout : TRIPBMessage

@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) unsigned int deploymentId;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasRampId;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) BOOL hasShadowEvaluation;
@property (copy, nonatomic) NSString *rampId;
@property (copy, nonatomic) NSString *rolloutId;
@property (retain, nonatomic) NSMutableArray *selectedNamespaceArray;
@property (readonly, nonatomic) NSUInteger selectedNamespaceArray_Count;
@property (retain, nonatomic) TRIShadowEvaluation *shadowEvaluation;


+(id)descriptor;


@end


#endif