// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMODOMETERDATA_H
#define CMODOMETERDATA_H

@class NSNumber, NSString, NSDate;
@protocol SRSampling, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMOdometerData : NSObject <SRSampling, NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSNumber *accuracy; // ivar: _accuracy
@property (retain, nonatomic) NSNumber *averageSpeed; // ivar: _averageSpeed
@property (readonly, nonatomic) NSNumber *currentSpeed; // ivar: _currentSpeed
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *deltaGroundAltitude; // ivar: _deltaGroundAltitude
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSNumber *distance; // ivar: _distance
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSNumber *gpsAltitude; // ivar: _gpsAltitude
@property (retain, nonatomic) NSNumber *gpsCourseAccuracy; // ivar: _gpsCourseAccuracy
@property (retain, nonatomic) NSNumber *gpsCourseRadians; // ivar: _gpsCourseRadians
@property (retain, nonatomic) NSNumber *gpsSpeedAccuracy; // ivar: _gpsSpeedAccuracy
@property (retain, nonatomic) NSNumber *groundAltitude; // ivar: _groundAltitude
@property (retain, nonatomic) NSNumber *groundAltitudeUncertainty; // ivar: _groundAltitudeUncertainty
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *maxAbsSlope; // ivar: _maxAbsSlope
@property (retain, nonatomic) NSNumber *odometer; // ivar: _odometer
@property (nonatomic) NSInteger originDevice; // ivar: _originDevice
@property (retain, nonatomic) NSNumber *rawSpeed; // ivar: _rawSpeed
@property (retain, nonatomic) NSNumber *slope; // ivar: _slope
@property (retain, nonatomic) NSNumber *smoothedGPSAltitude; // ivar: _smoothedGPSAltitude
@property (retain, nonatomic) NSNumber *smoothedGPSAltitudeUncertainty; // ivar: _smoothedGPSAltitudeUncertainty
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSNumber *timestampGps; // ivar: _timestampGps


+(BOOL)supportsSecureCoding;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDistance:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 currentSpeed:(id)arg3 averageSpeed:(id)arg4 ;
-(id)relativeTimestampGps;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif