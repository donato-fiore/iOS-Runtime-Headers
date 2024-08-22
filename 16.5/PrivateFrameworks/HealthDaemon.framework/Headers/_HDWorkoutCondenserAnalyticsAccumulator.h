// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDWORKOUTCONDENSERANALYTICSACCUMULATOR_H
#define _HDWORKOUTCONDENSERANALYTICSACCUMULATOR_H


#import <Foundation/Foundation.h>


@interface _HDWorkoutCondenserAnalyticsAccumulator : NSObject {
    BOOL _hasProcessedWorkout;
    NSInteger _workoutsToCondense;
    NSInteger _workoutsToRecondense;
    NSInteger _condensedWorkouts;
    NSInteger _processedWorkouts;
    NSInteger _createdSeries;
    NSInteger _deletedSamples;
}




-(id)description;
-(id)init;


@end


#endif