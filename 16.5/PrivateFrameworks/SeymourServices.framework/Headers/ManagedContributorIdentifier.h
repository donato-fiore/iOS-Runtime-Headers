// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDCONTRIBUTORIDENTIFIER_H
#define MANAGEDCONTRIBUTORIDENTIFIER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedContributorIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramContributors;
@property (nonatomic, retain) NSSet *catalogWorkoutContributors;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif