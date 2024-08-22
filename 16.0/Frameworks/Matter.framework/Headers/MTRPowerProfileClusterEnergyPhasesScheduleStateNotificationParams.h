// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRPOWERPROFILECLUSTERENERGYPHASESSCHEDULESTATENOTIFICATIONPARAMS_H
#define MTRPOWERPROFILECLUSTERENERGYPHASESSCHEDULESTATENOTIFICATIONPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRPowerProfileClusterEnergyPhasesScheduleStateNotificationParams : NSObject

@property (retain, nonatomic) NSNumber *numOfScheduledPhases; // ivar: _numOfScheduledPhases
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSArray *scheduledPhases; // ivar: _scheduledPhases
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif