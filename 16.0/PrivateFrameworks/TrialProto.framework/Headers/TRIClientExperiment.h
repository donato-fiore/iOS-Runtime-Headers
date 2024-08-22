// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRICLIENTEXPERIMENT_H
#define TRICLIENTEXPERIMENT_H

@class NSString;


#import "TRIPBMessage.h"
#import "TRIAssignment.h"
#import "TRIPBTimestamp.h"
#import "TRIShadowEvaluation.h"

@interface TRIClientExperiment : TRIPBMessage

@property (retain, nonatomic) TRIAssignment *assignment;
@property (nonatomic) unsigned int deploymentId;
@property (retain, nonatomic) TRIPBTimestamp *endDate;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasAssignment;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) BOOL hasProjectId;
@property (nonatomic) BOOL hasProjectName;
@property (nonatomic) BOOL hasSeed;
@property (nonatomic) BOOL hasShadowEvaluation;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int priority;
@property (nonatomic) int projectId;
@property (copy, nonatomic) NSString *projectName;
@property (nonatomic) unsigned int seed;
@property (retain, nonatomic) TRIShadowEvaluation *shadowEvaluation;
@property (retain, nonatomic) TRIPBTimestamp *startDate;
@property (nonatomic) int type;


+(id)descriptor;


@end


#endif