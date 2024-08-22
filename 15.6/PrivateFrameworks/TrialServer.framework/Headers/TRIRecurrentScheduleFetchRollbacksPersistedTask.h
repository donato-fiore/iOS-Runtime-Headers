// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIRECURRENTSCHEDULEFETCHROLLBACKSPERSISTEDTASK_H
#define TRIRECURRENTSCHEDULEFETCHROLLBACKSPERSISTEDTASK_H

@class TRIPBMessage;


#import "TRIPersistedTaskAttribution.h"

@interface TRIRecurrentScheduleFetchRollbacksPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasIsRepeatedInstance;
@property (nonatomic) BOOL hasTaskAttribution;
@property (nonatomic) BOOL isRepeatedInstance;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif