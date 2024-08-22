// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDMEDIAMOMENT_H
#define MANAGEDMEDIAMOMENT_H

@class NSManagedObject, NSData, NSSet, NSString;



@interface ManagedMediaMoment : NSManagedObject

@property (nonatomic, copy) NSData *artwork;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic) CGFloat duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) CGFloat startTime;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif