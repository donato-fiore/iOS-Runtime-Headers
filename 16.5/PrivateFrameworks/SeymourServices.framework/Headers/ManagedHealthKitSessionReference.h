// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDHEALTHKITSESSIONREFERENCE_H
#define MANAGEDHEALTHKITSESSIONREFERENCE_H

@class NSManagedObject, NSString;


#import "ManagedHealthKitWorkout.h"

@interface ManagedHealthKitSessionReference : NSManagedObject

@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic, retain) ManagedHealthKitWorkout *workout;
@property (nonatomic, copy) NSString *workoutIdentifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif