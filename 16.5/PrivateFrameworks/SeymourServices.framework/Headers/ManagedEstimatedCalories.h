// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MANAGEDESTIMATEDCALORIES_H
#define MANAGEDESTIMATEDCALORIES_H

@class NSManagedObject;



@interface ManagedEstimatedCalories : NSManagedObject

@property (nonatomic) CGFloat activeCalorieRate;
@property (nonatomic) int activityType;
@property (nonatomic) CGFloat basalCalorieRate;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif