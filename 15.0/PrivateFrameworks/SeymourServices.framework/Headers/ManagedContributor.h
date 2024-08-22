// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCONTRIBUTOR_H
#define MANAGEDCONTRIBUTOR_H

@class NSManagedObject, NSString, NSSet;


#import "ManagedCatalogProgramMetadata.h"
#import "ManagedCatalogWorkoutMetadata.h"

@interface ManagedContributor : NSManagedObject

@property (nonatomic, copy) NSString *bio;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, retain) NSSet *socialMediaHandles;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif