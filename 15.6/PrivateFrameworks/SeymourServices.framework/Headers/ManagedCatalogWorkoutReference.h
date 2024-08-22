// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDCATALOGWORKOUTREFERENCE_H
#define MANAGEDCATALOGWORKOUTREFERENCE_H

@class NSManagedObject, NSOrderedSet, NSString;



@interface ManagedCatalogWorkoutReference : NSManagedObject

@property (nonatomic, retain) NSOrderedSet *bodyFocusIdentifierss;
@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, retain) NSOrderedSet *contributorIdentifierss;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic) CGFloat duration;
@property (nonatomic) int episode;
@property (nonatomic, retain) NSOrderedSet *equipmentIdentifierss;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSOrderedSet *musicGenreIdentifierss;
@property (nonatomic, retain) NSOrderedSet *skillLevelIdentifierss;
@property (nonatomic, retain) NSOrderedSet *themeIdentifierss;
@property (nonatomic, retain) NSOrderedSet *trainerIdentifierss;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif