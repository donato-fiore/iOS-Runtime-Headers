// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPERSISTEDFACTORSSTATE_H
#define TRIPERSISTEDFACTORSSTATE_H

@class TRIPBMessage;


#import "TRIPersistedExperimentFactorsState.h"
#import "TRIPersistedRolloutFactorsState.h"

@interface TRIPersistedFactorsState : TRIPBMessage

@property (retain, nonatomic) TRIPersistedExperimentFactorsState *experiment;
@property (retain, nonatomic) TRIPersistedRolloutFactorsState *rollout;
@property (readonly, nonatomic) int stateOneOfCase;


+(id)descriptor;


@end


#endif