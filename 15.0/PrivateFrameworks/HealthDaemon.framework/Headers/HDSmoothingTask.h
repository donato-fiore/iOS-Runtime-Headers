// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSMOOTHINGTASK_H
#define HDSMOOTHINGTASK_H

@class HKWorkoutRoute, NSArray;

#import <Foundation/Foundation.h>

#import "HDDaemonTransaction.h"

@interface HDSmoothingTask : NSObject {
    HKWorkoutRoute *_sample;
    NSArray *_unsmoothedLocations;
    NSUInteger _workoutActivityType;
    id *_completionHandler;
    HDDaemonTransaction *_transaction;
    NSUInteger _smoothingAttempts;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif