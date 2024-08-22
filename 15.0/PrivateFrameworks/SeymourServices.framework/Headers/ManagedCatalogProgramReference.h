// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGPROGRAMREFERENCE_H
#define MANAGEDCATALOGPROGRAMREFERENCE_H

@class NSManagedObject, NSString, NSSet;



@interface ManagedCatalogProgramReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, retain) NSSet *contributorIdentifiers;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, retain) NSSet *equipmentIdentifiers;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *modalityIdentifiers;
@property (nonatomic, retain) NSSet *musicGenreIdentifiers;
@property (nonatomic, retain) NSSet *themeIdentifiers;
@property (nonatomic, retain) NSSet *trainerIdentifiers;
@property (nonatomic, retain) NSSet *workoutIdentifiers;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif