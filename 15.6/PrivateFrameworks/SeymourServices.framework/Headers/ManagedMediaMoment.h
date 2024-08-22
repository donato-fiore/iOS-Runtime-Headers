// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MANAGEDMEDIAMOMENT_H
#define MANAGEDMEDIAMOMENT_H

@class NSManagedObject, NSData, NSSet;



@interface ManagedMediaMoment : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) CGFloat duration;
@property (nonatomic) CGFloat startTime;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif