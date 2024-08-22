// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDCATALOGMODALITYFEATURE_H
#define MANAGEDCATALOGMODALITYFEATURE_H

@class NSManagedObject, NSString;


#import "ManagedCatalogModalityReference.h"

@interface ManagedCatalogModalityFeature : NSManagedObject

@property (nonatomic, retain) ManagedCatalogModalityReference *catalogModalityReference;
@property (nonatomic, copy) NSString *feature;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif