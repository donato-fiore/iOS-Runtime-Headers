// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MANAGEDMETRICSDISPLAYPREFERENCE_H
#define MANAGEDMETRICSDISPLAYPREFERENCE_H

@class NSManagedObject, NSString;



@interface ManagedMetricsDisplayPreference : NSManagedObject

@property (nonatomic, copy) NSString *behavior;
@property (nonatomic, copy) NSString *modalityConstraint;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif