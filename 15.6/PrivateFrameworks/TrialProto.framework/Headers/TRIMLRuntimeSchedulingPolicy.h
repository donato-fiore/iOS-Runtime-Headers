// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIMLRUNTIMESCHEDULINGPOLICY_H
#define TRIMLRUNTIMESCHEDULINGPOLICY_H



#import "TRIPBMessage.h"
#import "TRIPBTimestamp.h"

@interface TRIMLRuntimeSchedulingPolicy : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *endsAt;
@property (nonatomic) BOOL hasEndsAt;
@property (nonatomic) BOOL hasMaxEvaluations;
@property (nonatomic) BOOL hasPeriodicIntervalSeconds;
@property (nonatomic) BOOL hasQos;
@property (nonatomic) BOOL hasStartsAfter;
@property (nonatomic) unsigned int maxEvaluations;
@property (nonatomic) unsigned int periodicIntervalSeconds;
@property (nonatomic) int qos;
@property (retain, nonatomic) TRIPBTimestamp *startsAfter;


+(id)descriptor;


@end


#endif