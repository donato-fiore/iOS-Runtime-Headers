// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILERESPONSECOMMANDPARAMS_H
#define MTRELECTRICALMEASUREMENTCLUSTERGETMEASUREMENTPROFILERESPONSECOMMANDPARAMS_H

@class NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRElectricalMeasurementClusterGetMeasurementProfileResponseCommandParams : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *attributeId; // ivar: _attributeId
@property (copy, nonatomic) NSArray *intervals; // ivar: _intervals
@property (copy, nonatomic) NSNumber *numberOfIntervalsDelivered; // ivar: _numberOfIntervalsDelivered
@property (copy, nonatomic) NSNumber *profileIntervalPeriod; // ivar: _profileIntervalPeriod
@property (copy, nonatomic) NSNumber *startTime; // ivar: _startTime
@property (copy, nonatomic) NSNumber *status; // ivar: _status
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif