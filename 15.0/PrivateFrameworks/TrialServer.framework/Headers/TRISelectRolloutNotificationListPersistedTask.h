// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISELECTROLLOUTNOTIFICATIONLISTPERSISTEDTASK_H
#define TRISELECTROLLOUTNOTIFICATIONLISTPERSISTEDTASK_H

@class TRIPBMessage, NSMutableArray;


#import "TRIPersistedTaskAttribution.h"

@interface TRISelectRolloutNotificationListPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasRetryCount;
@property (nonatomic) BOOL hasTaskAttribution;
@property (retain, nonatomic) NSMutableArray *namespacesArray;
@property (readonly, nonatomic) NSUInteger namespacesArray_Count;
@property (nonatomic) int retryCount;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif