// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDBODYFOCUSIDENTIFIER_H
#define MANAGEDBODYFOCUSIDENTIFIER_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedBodyFocusIdentifier : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutBodyFocuses;
@property (nonatomic, copy) NSString *identifier;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif