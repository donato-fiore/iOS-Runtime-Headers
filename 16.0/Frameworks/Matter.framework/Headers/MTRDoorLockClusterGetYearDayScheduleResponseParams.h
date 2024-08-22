// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRDOORLOCKCLUSTERGETYEARDAYSCHEDULERESPONSEPARAMS_H
#define MTRDOORLOCKCLUSTERGETYEARDAYSCHEDULERESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRDoorLockClusterGetYearDayScheduleResponseParams : NSObject

@property (retain, nonatomic) NSNumber *localEndTime; // ivar: _localEndTime
@property (retain, nonatomic) NSNumber *localStartTime; // ivar: _localStartTime
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSNumber *yearDayIndex; // ivar: _yearDayIndex


-(id)description;
-(id)init;


@end


#endif