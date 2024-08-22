// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDORDEREDIDENTIFIER_H
#define MANAGEDORDEREDIDENTIFIER_H

@class NSManagedObject, NSString;


#import "ManagedCatalogProgramReference.h"
#import "ManagedCatalogWorkoutReference.h"

@interface ManagedOrderedIdentifier : NSManagedObject

@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramContributors;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramEquipment;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramModalities;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramMusicGenres;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramThemes;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramTrainers;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramWorkouts;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutBodyFocuses;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutContributors;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutEquipment;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutMusicGenres;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutSkillLevels;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutThemes;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutTrainers;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int index;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif