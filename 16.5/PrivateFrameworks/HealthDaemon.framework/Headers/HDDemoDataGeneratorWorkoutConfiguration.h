// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAGENERATORWORKOUTCONFIGURATION_H
#define HDDEMODATAGENERATORWORKOUTCONFIGURATION_H

@class HKQuantity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HDDemoDataGeneratorWorkoutConfiguration : NSObject <NSSecureCoding>

 {
    BOOL _createdFromNSKeyedUnarchiver;
}


@property (nonatomic) NSUInteger activityType; // ivar: _activityType
@property (nonatomic) CGFloat distanceCyclingRateInMiles; // ivar: _distanceCyclingRateInMiles
@property (nonatomic) CGFloat distanceSwimmingRateInYards; // ivar: _distanceSwimmingRateInYards
@property (nonatomic) CGFloat distanceSwimmingSegmentInYards; // ivar: _distanceSwimmingSegmentInYards
@property (nonatomic) CGFloat distanceWalkingRateInMiles; // ivar: _distanceWalkingRateInMiles
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (retain, nonatomic) HKQuantity *goal; // ivar: _goal
@property (nonatomic) NSUInteger goalType; // ivar: _goalType
@property (nonatomic) BOOL indoor; // ivar: _indoor
@property (nonatomic) CGFloat kcalRate; // ivar: _kcalRate
@property (nonatomic) NSInteger numSwimmingSegments; // ivar: _numSwimmingSegments
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (nonatomic) NSInteger swimmingNumLapsPerSegment; // ivar: _swimmingNumLapsPerSegment
@property (nonatomic) CGFloat swimmingRestSegmentTime; // ivar: _swimmingRestSegmentTime
@property (nonatomic) NSInteger swimmingStrokeStyle; // ivar: _swimmingStrokeStyle
@property (nonatomic) CGFloat swimmingSwimSegmentTime; // ivar: _swimmingSwimSegmentTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrototype:(id)arg0 currentDemoDataTime:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif