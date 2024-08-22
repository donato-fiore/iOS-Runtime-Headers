// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRALARMSCLUSTERGETALARMRESPONSEPARAMS_H
#define MTRALARMSCLUSTERGETALARMRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRAlarmsClusterGetAlarmResponseParams : NSObject

@property (retain, nonatomic) NSNumber *alarmCode; // ivar: _alarmCode
@property (retain, nonatomic) NSNumber *clusterId; // ivar: _clusterId
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif