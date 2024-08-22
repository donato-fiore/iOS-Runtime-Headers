// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDHEALTHKITACTIVITYTYPE_H
#define MANAGEDHEALTHKITACTIVITYTYPE_H

@class NSManagedObject;


#import "ManagedCatalogModalityReference.h"

@interface ManagedHealthKitActivityType : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, retain) ManagedCatalogModalityReference *modalityReference;
@property (nonatomic) NSInteger value;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif