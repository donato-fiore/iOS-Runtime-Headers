// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDCATALOGFILTERPROPERTYTYPE_H
#define MANAGEDCATALOGFILTERPROPERTYTYPE_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedCatalogFilterPropertyType : NSManagedObject

@property (nonatomic, retain) NSSet *catalogModalityReference;
@property (nonatomic, copy) NSString *propertyType;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif