// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPERSISTEDEXPERIMENTFACTORSSTATE_H
#define TRIPERSISTEDEXPERIMENTFACTORSSTATE_H

@class TRIPBMessage, NSString;



@interface TRIPersistedExperimentFactorsState : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasExperimentId;


+(id)descriptor;


@end


#endif