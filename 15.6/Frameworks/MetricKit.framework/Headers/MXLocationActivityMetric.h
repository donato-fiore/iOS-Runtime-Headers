// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MXLOCATIONACTIVITYMETRIC_H
#define MXLOCATIONACTIVITYMETRIC_H

@class NSMeasurement;


#import "MXMetric.h"

@interface MXLocationActivityMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeBestAccuracyForNavigationTime; // ivar: _cumulativeBestAccuracyForNavigationTime
@property (readonly) NSMeasurement *cumulativeBestAccuracyTime; // ivar: _cumulativeBestAccuracyTime
@property (readonly) NSMeasurement *cumulativeHundredMetersAccuracyTime; // ivar: _cumulativeHundredMetersAccuracyTime
@property (readonly) NSMeasurement *cumulativeKilometerAccuracyTime; // ivar: _cumulativeKilometerAccuracyTime
@property (readonly) NSMeasurement *cumulativeNearestTenMetersAccuracyTime; // ivar: _cumulativeNearestTenMetersAccuracyTime
@property (readonly) NSMeasurement *cumulativeThreeKilometersAccuracyTime; // ivar: _cumulativeThreeKilometersAccuracyTime


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCumulativeBestAccuracyTimeMeasurement:(id)arg0 cumulativeBestAccuracyForNavigationTimeMeasurement:(id)arg1 nearestTenMetersAccuracyTimeMeasurement:(id)arg2 hundredMetersAccuracyTimeMeasurement:(id)arg3 kilometerAccuracyTimeMeasurement:(id)arg4 threeKilometerAccuracyTimeMeasurement:(id)arg5 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif