// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPERSISTEDROLLOUTFACTORSSTATE_H
#define TRIPERSISTEDROLLOUTFACTORSSTATE_H

@class TRIPBMessage, NSString;



@interface TRIPersistedRolloutFactorsState : TRIPBMessage

@property (nonatomic) int deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasRolloutId;
@property (copy, nonatomic) NSString *rolloutId;


+(id)descriptor;


@end


#endif