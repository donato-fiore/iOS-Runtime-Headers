// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MLRINTERNALTRIALTASK_H
#define MLRINTERNALTRIALTASK_H

@class NSString, TRIFactorsState;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MLRTrialTaskSchedulingPolicy.h"

@interface MLRInternalTrialTask : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *evaluationID; // ivar: _evaluationID
@property (readonly, nonatomic) TRIFactorsState *evaluationState; // ivar: _evaluationState
@property (readonly, nonatomic) MLRTrialTaskSchedulingPolicy *policy; // ivar: _policy
@property (readonly, nonatomic) int projectId; // ivar: _projectId


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvaluationState:(id)arg0 runtimeEvaluation:(id)arg1 ;
-(id)initWithEvaluationState:(id)arg0 runtimeEvaluation:(id)arg1 pluginProjectId:(int)arg2 ;
-(id)initWithEvaluationState:(id)arg0 schedulingPolicy:(id)arg1 pluginProjectId:(int)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif