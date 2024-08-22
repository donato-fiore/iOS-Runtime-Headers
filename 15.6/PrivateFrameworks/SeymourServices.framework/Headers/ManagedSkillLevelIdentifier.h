// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDSKILLLEVELIDENTIFIER_H
#define MANAGEDSKILLLEVELIDENTIFIER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedSkillLevelIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutSkillLevels;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif