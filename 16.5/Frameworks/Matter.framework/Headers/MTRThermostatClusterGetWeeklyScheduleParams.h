// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHERMOSTATCLUSTERGETWEEKLYSCHEDULEPARAMS_H
#define MTRTHERMOSTATCLUSTERGETWEEKLYSCHEDULEPARAMS_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRThermostatClusterGetWeeklyScheduleParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *daysToReturn; // ivar: _daysToReturn
@property (copy, nonatomic) NSNumber *modeToReturn; // ivar: _modeToReturn
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif