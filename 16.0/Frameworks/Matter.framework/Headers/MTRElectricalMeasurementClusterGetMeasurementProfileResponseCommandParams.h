// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILERESPONSECOMMANDPARAMS_H
#define MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILERESPONSECOMMANDPARAMS_H

@class NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface MTRElectricalMeasurementClusterGetMeasurementProfileResponseCommandParams : NSObject

@property (retain, nonatomic) NSNumber *attributeId; // ivar: _attributeId
@property (retain, nonatomic) NSArray *intervals; // ivar: _intervals
@property (retain, nonatomic) NSNumber *numberOfIntervalsDelivered; // ivar: _numberOfIntervalsDelivered
@property (retain, nonatomic) NSNumber *profileIntervalPeriod; // ivar: _profileIntervalPeriod
@property (retain, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (retain, nonatomic) NSNumber *status; // ivar: _status
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif