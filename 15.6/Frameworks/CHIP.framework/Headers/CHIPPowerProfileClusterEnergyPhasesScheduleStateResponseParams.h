// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPOWERPROFILECLUSTERENERGYPHASESSCHEDULESTATERESPONSEPARAMS_H
#define CHIPPOWERPROFILECLUSTERENERGYPHASESSCHEDULESTATERESPONSEPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface CHIPPowerProfileClusterEnergyPhasesScheduleStateResponseParams : NSObject

@property (retain, nonatomic) NSNumber *numOfScheduledPhases; // ivar: _numOfScheduledPhases
@property (retain, nonatomic) NSNumber *powerProfileId; // ivar: _powerProfileId
@property (retain, nonatomic) NSArray *scheduledPhases; // ivar: _scheduledPhases


-(id)init;


@end


#endif