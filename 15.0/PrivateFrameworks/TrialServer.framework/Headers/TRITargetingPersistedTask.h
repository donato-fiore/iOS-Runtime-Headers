// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITARGETINGPERSISTEDTASK_H
#define TRITARGETINGPERSISTEDTASK_H

@class TRIPBMessage, NSString;


#import "TRIPersistedTaskAttribution.h"

@interface TRITargetingPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasIncludeDependencies;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL includeDependencies;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif