// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDLANGUAGEDISCLAIMER_H
#define MANAGEDLANGUAGEDISCLAIMER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedLanguageDisclaimer : NSManagedObject

@property (nonatomic, retain) NSSet *capabilities;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) BOOL isPrimary;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif