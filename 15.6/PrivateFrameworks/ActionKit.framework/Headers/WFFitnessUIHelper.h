// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFITNESSUIHELPER_H
#define WFFITNESSUIHELPER_H


#import <Foundation/Foundation.h>


@interface WFFitnessUIHelper : NSObject



+(BOOL)isWheelchairUser;
+(id)activityTypeForLocalizedActivityName:(id)arg0 ;
+(id)allActivityTypes;
+(id)allActivityTypesIncludingWheelchairWorkouts:(BOOL)arg0 includingSwimmingWorkouts:(BOOL)arg1 ;
+(id)quantityTypesForActivityType:(NSUInteger)arg0 ;
+(id)timeUnits;
+(void)preferredUnitsForActivityType:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif