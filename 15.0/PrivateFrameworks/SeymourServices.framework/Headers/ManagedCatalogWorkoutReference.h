// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGWORKOUTREFERENCE_H
#define MANAGEDCATALOGWORKOUTREFERENCE_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedCatalogWorkoutReference : NSManagedObject

@property (nonatomic, retain) NSSet *bodyFocusIdentifiers;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, retain) NSSet *contributorIdentifiers;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic) CGFloat duration;
@property (nonatomic) int episode;
@property (nonatomic, retain) NSSet *equipmentIdentifiers;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSSet *musicGenreIdentifiers;
@property (nonatomic, retain) NSSet *skillLevelIdentifiers;
@property (nonatomic, retain) NSSet *themeIdentifiers;
@property (nonatomic, retain) NSSet *trainerIdentifiers;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif