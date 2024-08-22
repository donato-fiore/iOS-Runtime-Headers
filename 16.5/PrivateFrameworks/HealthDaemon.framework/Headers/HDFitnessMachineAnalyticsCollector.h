// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFITNESSMACHINEANALYTICSCOLLECTOR_H
#define HDFITNESSMACHINEANALYTICSCOLLECTOR_H

@class HKPersistentTimer;

#import <Foundation/Foundation.h>

#import "HDGymKitWorkoutAnalyticEvent.h"

@interface HDFitnessMachineAnalyticsCollector : NSObject {
    HKPersistentTimer *_authorizationTimer;
}


@property (retain, nonatomic) HDGymKitWorkoutAnalyticEvent *gymKitWorkoutEvent; // ivar: _gymKitWorkoutEvent


-(id)init;
-(void)setFitnessMachineType:(NSUInteger)arg0 manufacturer:(id)arg1 ;
-(void)userBeganPairing;
-(void)userIsAuthorized;
-(void)workoutEndedSubmitMetricsWith:(id)arg0 ;
-(void)workoutFailedWithError:(id)arg0 ;


@end


#endif