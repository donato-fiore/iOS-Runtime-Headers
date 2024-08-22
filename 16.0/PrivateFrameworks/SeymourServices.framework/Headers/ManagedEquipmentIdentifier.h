// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDEQUIPMENTIDENTIFIER_H
#define MANAGEDEQUIPMENTIDENTIFIER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedEquipmentIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramEquipment;
@property (nonatomic, retain) NSSet *catalogWorkoutEquipment;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif