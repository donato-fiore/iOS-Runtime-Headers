// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDCATALOGMODALITYFEATURE_H
#define MANAGEDCATALOGMODALITYFEATURE_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedCatalogModalityFeature : NSManagedObject

@property (nonatomic, retain) NSSet *catalogModalityReference;
@property (nonatomic, copy) NSString *feature;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif