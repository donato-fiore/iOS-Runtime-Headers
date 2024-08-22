// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDDEMODATAACTIVITYWORKOUTSTATE_H
#define _HDDEMODATAACTIVITYWORKOUTSTATE_H

@class NSMutableData, NSMutableArray, HKQuantity, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HDDemoDataActivityWorkoutState : NSObject <NSSecureCoding>

 {
    NSMutableData *_associatedObjectUUIDs;
    NSMutableArray *_workoutEvents;
    NSUInteger _workoutActivityType;
    NSUInteger _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    CGFloat _totalEnergyBurnedInKilocalories;
    CGFloat _totalDistanceWalkingInMeters;
    CGFloat _totalDistanceCyclingInMeters;
    CGFloat _totalDistanceSwimmingInYards;
    CGFloat _totalSwimmingStrokes;
    NSInteger _swimmingStrokeStyle;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif