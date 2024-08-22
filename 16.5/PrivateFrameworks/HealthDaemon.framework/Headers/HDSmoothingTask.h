// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSMOOTHINGTASK_H
#define HDSMOOTHINGTASK_H

@class HKWorkout, NSArray;

#import <Foundation/Foundation.h>

#import "HDDaemonTransaction.h"

@interface HDSmoothingTask : NSObject {
    HKWorkout *_workout;
    NSArray *_routes;
    NSArray *_unsmoothedLocations;
    id *_completionHandler;
    HDDaemonTransaction *_transaction;
    NSUInteger _smoothingAttempts;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif