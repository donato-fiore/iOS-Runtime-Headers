// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRALARMSCLUSTERRESETALARMPARAMS_H
#define MTRALARMSCLUSTERRESETALARMPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRAlarmsClusterResetAlarmParams : NSObject

@property (retain, nonatomic) NSNumber *alarmCode; // ivar: _alarmCode
@property (retain, nonatomic) NSNumber *clusterId; // ivar: _clusterId
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif