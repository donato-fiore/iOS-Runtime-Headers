// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDHEALTHKITWORKOUT_H
#define MANAGEDHEALTHKITWORKOUT_H

@class NSManagedObject, NSString, NSDate;


#import "ManagedHealthKitSessionReference.h"

@interface ManagedHealthKitWorkout : NSManagedObject

@property (nonatomic) CGFloat duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL isIndoorWorkout;
@property (nonatomic, retain) ManagedHealthKitSessionReference *sessionReference;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) int workoutActivityType;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif