// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFETCHEXPERIMENTNOTIFICATIONSPERSISTEDTASK_H
#define TRIFETCHEXPERIMENTNOTIFICATIONSPERSISTEDTASK_H

@class TRIPBMessage, TRIPBTimestamp, NSMutableArray;


#import "TRIPersistedTaskAttribution.h"

@interface TRIFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *earliestTimestamp;
@property (nonatomic) BOOL hasEarliestTimestamp;
@property (nonatomic) BOOL hasLimitedCarryOnly;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasRollbacksOnly;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL limitedCarryOnly;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) NSUInteger namespacesArray_Count;
@property (nonatomic) int retryCount;
@property (nonatomic) BOOL rollbacksOnly;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif