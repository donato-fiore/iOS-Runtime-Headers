// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIPERSISTEDCLIENTROLLOUTARTIFACT_H
#define TRIPERSISTEDCLIENTROLLOUTARTIFACT_H

@class TRIPBMessage, TRIPBTimestamp, TRIPBUInt32Array, TRIClientRollout;



@interface TRIPersistedClientRolloutArtifact : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *deploymentDate;
@property (nonatomic) NSUInteger downloadSize;
@property (nonatomic) BOOL hasDeploymentDate;
@property (nonatomic) BOOL hasDownloadSize;
@property (nonatomic) BOOL hasRollout;
@property (retain, nonatomic) TRIPBUInt32Array *populationsArray;
@property (readonly, nonatomic) NSUInteger populationsArray_Count;
@property (retain, nonatomic) TRIClientRollout *rollout;


+(id)descriptor;


@end


#endif