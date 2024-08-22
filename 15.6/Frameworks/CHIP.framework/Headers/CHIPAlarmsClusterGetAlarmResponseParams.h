// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPALARMSCLUSTERGETALARMRESPONSEPARAMS_H
#define CHIPALARMSCLUSTERGETALARMRESPONSEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPAlarmsClusterGetAlarmResponseParams : NSObject

@property (retain, nonatomic) NSNumber *alarmCode; // ivar: _alarmCode
@property (retain, nonatomic) NSNumber *clusterId; // ivar: _clusterId
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timeStamp; // ivar: _timeStamp


-(id)init;


@end


#endif