// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGACCESSIBILITYFEATURE_H
#define MANAGEDCATALOGACCESSIBILITYFEATURE_H

@class NSManagedObject, NSString;


#import "ManagedCatalogProgramMetadata.h"
#import "ManagedCatalogWorkoutMetadata.h"

@interface ManagedCatalogAccessibilityFeature : NSManagedObject

@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *feature;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif