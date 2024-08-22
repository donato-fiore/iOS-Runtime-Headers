// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDTRAINERREFERENCE_H
#define MANAGEDTRAINERREFERENCE_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedTrainerReference : NSManagedObject

@property (nonatomic, retain) NSSet *artwork;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif