// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCREATEWORKOUTOPERATION_H
#define HDCREATEWORKOUTOPERATION_H

@class NSArray, HKWorkout, NSDateInterval, HKDevice, HKQuantity, NSUUID, NSDictionary, HKSource, NSString, HKWorkoutConfiguration;


#import "HDJournalableOperation.h"
#import "HDWorkoutBuilderStatisticsCalculators.h"

@interface HDCreateWorkoutOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSArray *activities; // ivar: _activities
@property (readonly, copy, nonatomic) NSArray *associatedSeries; // ivar: _associatedSeries
@property (readonly, nonatomic) HKWorkout *createdWorkout; // ivar: _createdWorkout
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) HKDevice *device; // ivar: _device
@property (readonly, copy, nonatomic) NSArray *events; // ivar: _events
@property (readonly, copy, nonatomic) HKQuantity *goal; // ivar: _goal
@property (readonly, nonatomic) NSUInteger goalType; // ivar: _goalType
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (readonly, copy, nonatomic) NSArray *quantityTypesIncludedWhilePaused; // ivar: _quantityTypesIncludedWhilePaused
@property (readonly, copy, nonatomic) HKSource *source; // ivar: _source
@property (readonly, copy, nonatomic) NSString *sourceVersion; // ivar: _sourceVersion
@property (readonly, nonatomic) HDWorkoutBuilderStatisticsCalculators *statisticsCalculators; // ivar: _statisticsCalculators
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg0 transaction:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWorkoutConfiguration:(id)arg0 identifier:(id)arg1 dateInterval:(id)arg2 metadata:(id)arg3 device:(id)arg4 source:(id)arg5 sourceVersion:(id)arg6 events:(id)arg7 activities:(id)arg8 statisticsCalculators:(id)arg9 associatedSeries:(id)arg10 goalType:(NSUInteger)arg11 goal:(id)arg12 quantityTypesIncludedWhilePaused:(id)arg13 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif