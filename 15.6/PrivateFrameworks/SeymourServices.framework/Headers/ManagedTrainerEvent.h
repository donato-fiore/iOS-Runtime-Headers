// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDTRAINEREVENT_H
#define MANAGEDTRAINEREVENT_H

@class NSManagedObject, NSSet, NSString;



@interface ManagedTrainerEvent : NSManagedObject

@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat leadDuration;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, copy) NSString *type;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif