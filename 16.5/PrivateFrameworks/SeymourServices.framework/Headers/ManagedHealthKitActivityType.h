// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDHEALTHKITACTIVITYTYPE_H
#define MANAGEDHEALTHKITACTIVITYTYPE_H

@class NSManagedObject, NSSet;



@interface ManagedHealthKitActivityType : NSManagedObject

@property (nonatomic, retain) NSSet *modalityReference;
@property (nonatomic) NSInteger value;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif