// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDCATALOGPROGRAMREFERENCE_H
#define MANAGEDCATALOGPROGRAMREFERENCE_H

@class NSManagedObject, NSString, NSOrderedSet;



@interface ManagedCatalogProgramReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, retain) NSOrderedSet *contributorIdentifierss;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, retain) NSOrderedSet *equipmentIdentifierss;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSOrderedSet *modalityIdentifierss;
@property (nonatomic, retain) NSOrderedSet *musicGenreIdentifierss;
@property (nonatomic, retain) NSOrderedSet *themeIdentifierss;
@property (nonatomic, retain) NSOrderedSet *trainerIdentifierss;
@property (nonatomic, retain) NSOrderedSet *workoutIdentifierss;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif