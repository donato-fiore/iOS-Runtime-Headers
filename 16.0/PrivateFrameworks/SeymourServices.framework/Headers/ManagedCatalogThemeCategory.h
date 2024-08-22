// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDCATALOGTHEMECATEGORY_H
#define MANAGEDCATALOGTHEMECATEGORY_H

@class NSManagedObject, NSString, NSSet;



@interface ManagedCatalogThemeCategory : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int sortOrder;
@property (nonatomic, retain) NSSet *themes;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif