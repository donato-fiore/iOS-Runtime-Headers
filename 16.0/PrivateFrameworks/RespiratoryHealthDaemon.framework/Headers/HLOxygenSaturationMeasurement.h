// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HLOXYGENSATURATIONMEASUREMENT_H
#define HLOXYGENSATURATIONMEASUREMENT_H

@class NSDateInterval, NSNumber;

#import <Foundation/Foundation.h>

#import "HLHeartRateData.h"

@interface HLOxygenSaturationMeasurement : NSObject

@property (retain, nonatomic) HLHeartRateData *averageHeartRateData; // ivar: _averageHeartRateData
@property (retain, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain, nonatomic) NSNumber *oxygenSaturationPercentage; // ivar: _oxygenSaturationPercentage
@property (retain, nonatomic) NSNumber *pressureInKilopascals; // ivar: _pressureInKilopascals




@end


#endif