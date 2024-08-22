// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIRETARGETALLPERSISTEDTASK_H
#define TRIRETARGETALLPERSISTEDTASK_H

@class TRIPBMessage;


#import "TRIPersistedTaskAttribution.h"

@interface TRIRetargetAllPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasTaskAttribution;
@property (retain, nonatomic) TRIPersistedTaskAttribution *taskAttribution;


+(id)descriptor;


@end


#endif