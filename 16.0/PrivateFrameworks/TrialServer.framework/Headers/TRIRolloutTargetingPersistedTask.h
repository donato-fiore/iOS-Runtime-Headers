// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIROLLOUTTARGETINGPERSISTEDTASK_H
#define TRIROLLOUTTARGETINGPERSISTEDTASK_H

@class TRIPBMessage, NSString;


#import "TRIPersistedTaskAttribution.h"

@interface TRIRolloutTargetingPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasIncludeDependencies;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL hasTriggerEvent;
@property (nonatomic) BOOL includeDependencies;
@property (copy, nonatomic) NSString *rolloutId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (nonatomic) int triggerEvent;


+(id)descriptor;


@end


#endif