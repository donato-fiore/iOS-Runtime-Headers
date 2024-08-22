// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDHEALTHKITSTANDALONEWORKOUTJOB_H
#define MANAGEDHEALTHKITSTANDALONEWORKOUTJOB_H

@class NSManagedObject, NSString, NSUUID, NSDate;



@interface ManagedHealthKitStandaloneWorkoutJob : NSManagedObject

@property (nonatomic, copy) NSString *catalogWorkoutIdentifier;
@property (nonatomic) CGFloat duration;
@property (nonatomic, copy) NSUUID *healthKitWorkoutIdentifier;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int workoutActivityType;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif