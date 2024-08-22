// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFETCHFACTORPACKSETPERSISTEDTASK_H
#define TRIFETCHFACTORPACKSETPERSISTEDTASK_H

@class TRIPBMessage, NSString;


#import "TRIPersistedTaskCapabilityModifier.h"
#import "TRIPersistedTaskAttribution.h"

@interface TRIFetchFactorPackSetPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPersistedTaskCapabilityModifier *capabilityModifier;
@property (nonatomic) int deploymentId;
@property (copy, nonatomic) NSString *factorPackSetId;
@property (nonatomic) BOOL hasCapabilityModifier;
@property (nonatomic) BOOL hasDeploymentId;
@property (nonatomic) BOOL hasFactorPackSetId;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasRolloutId;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) int retryCount;
@property (copy, nonatomic) NSString *rolloutId;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif