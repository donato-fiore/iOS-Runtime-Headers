// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDPROGRESSDISPLAYPREFERENCE_H
#define MANAGEDPROGRESSDISPLAYPREFERENCE_H

@class NSManagedObject, NSString;



@interface ManagedProgressDisplayPreference : NSManagedObject

@property (nonatomic, copy) NSString *behavior;
@property (nonatomic, copy) NSString *modalityConstraint;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif