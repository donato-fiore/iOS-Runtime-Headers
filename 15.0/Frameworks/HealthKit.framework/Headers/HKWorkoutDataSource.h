// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKWORKOUTDATASOURCE_H
#define HKWORKOUTDATASOURCE_H


#import <Foundation/Foundation.h>


@interface HKWorkoutDataSource : NSObject



+(id)_distanceTypeForActivityType:(NSUInteger)arg0 isIndoor:(BOOL)arg1 ;
+(id)observedTypesForActivityType:(NSUInteger)arg0 isIndoor:(BOOL)arg1 connectedToFitnessMachine:(BOOL)arg2 ;
+(id)observedTypesForActivityType:(NSUInteger)arg0 isIndoor:(BOOL)arg1 connectedToFitnessMachine:(BOOL)arg2 activityMode:(NSInteger)arg3 ;


@end


#endif