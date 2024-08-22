// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAREVENT_H
#define PAREVENT_H

@class NSManagedObject, NSDate;



@interface PAREvent : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif