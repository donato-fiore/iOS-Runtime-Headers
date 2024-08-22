// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIDEACTIVATETREATMENTPERSISTEDTASK_H
#define TRIDEACTIVATETREATMENTPERSISTEDTASK_H

@class TRIPBMessage, NSString, TRIPBTimestamp;



@interface TRIDeactivateTreatmentPersistedTask : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL failOnUnrecognizedExperiment;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasFailOnUnrecognizedExperiment;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasStartTimestamp;
@property (nonatomic) BOOL hasTriggerEvent;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) int triggerEvent;


+(id)descriptor;


@end


#endif