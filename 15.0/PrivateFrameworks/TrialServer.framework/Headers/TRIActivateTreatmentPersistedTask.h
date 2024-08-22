// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIACTIVATETREATMENTPERSISTEDTASK_H
#define TRIACTIVATETREATMENTPERSISTEDTASK_H

@class TRIPBMessage, TRIPBTimestamp, NSString;


#import "TRIPersistedTaskAttribution.h"

@interface TRIActivateTreatmentPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (retain, nonatomic) TRIPBTimestamp *endTimestamp;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasEndTimestamp;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasRequiresTreatmentInstallation;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) BOOL requiresTreatmentInstallation;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;
@property (copy, nonatomic) NSString *treatmentId;


+(id)descriptor;


@end


#endif