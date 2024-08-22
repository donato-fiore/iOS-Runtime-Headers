// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDTRAINERIDENTIFIER_H
#define MANAGEDTRAINERIDENTIFIER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedTrainerIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramTrainers;
@property (nonatomic, retain) NSSet *catalogWorkoutTrainers;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif