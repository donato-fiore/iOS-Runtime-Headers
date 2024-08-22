// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLOCATIONMANAGERGUARDEDDATA_H
#define ATXLOCATIONMANAGERGUARDEDDATA_H

@class CLLocation, NSDate;

#import <Foundation/Foundation.h>

#import "ATXLocationManagerState.h"

@interface ATXLocationManagerGuardedData : NSObject {
    CLLocation *currentLocation;
    NSDate *lastRequestLocationDate;
    NSUInteger currentRoutineMode;
    ATXLocationManagerState *state;
    NSDate *lastLOIUpdateTimestamp;
    NSDate *lastRoutineModeTimestamp;
    NSDate *lastPredictedLOIsUpdateTimestamp;
    NSDate *lastPredictedExitTimesUpdateTimestamp;
}




-(id)init;
-(void)clear;


@end


#endif