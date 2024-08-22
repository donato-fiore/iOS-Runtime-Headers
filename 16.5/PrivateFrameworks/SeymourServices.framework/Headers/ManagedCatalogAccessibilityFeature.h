// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDCATALOGACCESSIBILITYFEATURE_H
#define MANAGEDCATALOGACCESSIBILITYFEATURE_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedCatalogAccessibilityFeature : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) NSSet *languageDisclaimer;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif