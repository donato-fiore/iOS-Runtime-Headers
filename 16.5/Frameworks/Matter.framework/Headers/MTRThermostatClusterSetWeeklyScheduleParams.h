// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRTHERMOSTATCLUSTERSETWEEKLYSCHEDULEPARAMS_H
#define MTRTHERMOSTATCLUSTERSETWEEKLYSCHEDULEPARAMS_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRThermostatClusterSetWeeklyScheduleParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *dayOfWeekForSequence; // ivar: _dayOfWeekForSequence
@property (copy, nonatomic) NSNumber *modeForSequence; // ivar: _modeForSequence
@property (copy, nonatomic) NSNumber *numberOfTransitionsForSequence; // ivar: _numberOfTransitionsForSequence
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout; // ivar: _serverSideProcessingTimeout
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (copy, nonatomic) NSArray *transitions; // ivar: _transitions


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif