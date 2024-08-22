// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIFETCHROLLOUTNOTIFICATIONLISTPERSISTEDTASK_H
#define TRIFETCHROLLOUTNOTIFICATIONLISTPERSISTEDTASK_H

@class TRIPBMessage, TRIPBTimestamp, NSMutableArray;


#import "TRIPersistedTaskAttribution.h"

@interface TRIFetchRolloutNotificationListPersistedTask : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *earliestTimestamp;
@property (nonatomic) BOOL hasEarliestTimestamp;
@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasTaskAttribution;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) NSUInteger namespacesArray_Count;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif