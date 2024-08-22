// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDCATALOGMODALITYREFERENCE_H
#define MANAGEDCATALOGMODALITYREFERENCE_H

@class NSManagedObject, NSSet, NSOrderedSet, NSString;



@interface ManagedCatalogModalityReference : NSManagedObject

@property (nonatomic, retain) NSSet *alternativeActivityTypes;
@property (nonatomic, retain) NSSet *features;
@property (nonatomic, retain) NSSet *filterPropertyTypes;
@property (nonatomic, retain) NSOrderedSet *healthKitActivityTypes;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif