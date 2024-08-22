// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDTHEMEIDENTIFIER_H
#define MANAGEDTHEMEIDENTIFIER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedThemeIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogProgramThemes;
@property (nonatomic, retain) NSSet *catalogWorkoutThemes;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif