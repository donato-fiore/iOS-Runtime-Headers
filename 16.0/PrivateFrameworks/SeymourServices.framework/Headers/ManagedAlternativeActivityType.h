// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MANAGEDALTERNATIVEACTIVITYTYPE_H
#define MANAGEDALTERNATIVEACTIVITYTYPE_H

@class NSManagedObject, NSString, NSSet;



@interface ManagedAlternativeActivityType : NSManagedObject

@property (nonatomic, copy) NSString *alternativeActivityType;
@property (nonatomic, retain) NSSet *modalityReference;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif