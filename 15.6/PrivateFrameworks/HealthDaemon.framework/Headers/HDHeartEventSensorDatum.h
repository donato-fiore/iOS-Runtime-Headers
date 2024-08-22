// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDHEARTEVENTSENSORDATUM_H
#define HDHEARTEVENTSENSORDATUM_H

@class NSArray, HKQuantity;


#import "HDDataCollectorSensorDatum.h"

@interface HDHeartEventSensorDatum : HDDataCollectorSensorDatum

@property (readonly, nonatomic) NSArray *associatedSampleUUIDs; // ivar: _associatedSampleUUIDs
@property (readonly, nonatomic) HKQuantity *heartRateThreshold; // ivar: _heartRateThreshold


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 heartRateThreshold:(id)arg2 associatedSampleUUIDs:(id)arg3 resumeContext:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif