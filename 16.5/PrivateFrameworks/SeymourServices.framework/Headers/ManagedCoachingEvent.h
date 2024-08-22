// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDCOACHINGEVENT_H
#define MANAGEDCOACHINGEVENT_H

@class NSManagedObject, NSString;


#import "ManagedCatalogWorkoutMetadata.h"

@interface ManagedCoachingEvent : NSManagedObject

@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic) CGFloat duration;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *intensity;
@property (nonatomic) CGFloat leadDuration;
@property (nonatomic) int rangeLowerBound;
@property (nonatomic) int rangeUpperBound;
@property (nonatomic) BOOL shouldShowPlus;
@property (nonatomic) CGFloat startTime;
@property (nonatomic, copy) NSString *type;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif