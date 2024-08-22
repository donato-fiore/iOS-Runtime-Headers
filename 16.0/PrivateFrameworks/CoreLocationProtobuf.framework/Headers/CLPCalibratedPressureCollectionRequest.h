// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLPCALIBRATEDPRESSURECOLLECTIONREQUEST_H
#define CLPCALIBRATEDPRESSURECOLLECTIONREQUEST_H

@class PBRequest;
@protocol NSCopying;


#import "CLPMotionActivity.h"
#import "CLPBaroCalibrationIndication.h"

@interface CLPCalibratedPressureCollectionRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CLPMotionActivity *activity; // ivar: _activity
@property (nonatomic) float altitudeHAEM; // ivar: _altitudeHAEM
@property (nonatomic) float altitudeHAEUncM; // ivar: _altitudeHAEUncM
@property (nonatomic) float calibratedPressurePa; // ivar: _calibratedPressurePa
@property (nonatomic) float calibratedPressureUncPa; // ivar: _calibratedPressureUncPa
@property (retain, nonatomic) CLPBaroCalibrationIndication *calibration; // ivar: _calibration
@property (nonatomic) float devicePressurePa; // ivar: _devicePressurePa
@property (nonatomic) float devicePressureUncPa; // ivar: _devicePressureUncPa
@property (readonly, nonatomic) BOOL hasActivity;
@property (nonatomic) BOOL hasAltitudeHAEM;
@property (nonatomic) BOOL hasAltitudeHAEUncM;
@property (nonatomic) BOOL hasCalibratedPressurePa;
@property (nonatomic) BOOL hasCalibratedPressureUncPa;
@property (readonly, nonatomic) BOOL hasCalibration;
@property (nonatomic) BOOL hasDevicePressurePa;
@property (nonatomic) BOOL hasDevicePressureUncPa;
@property (nonatomic) BOOL hasHorizontalUncM;
@property (nonatomic) BOOL hasLatitudeDeg;
@property (nonatomic) BOOL hasLongitudeDeg;
@property (nonatomic) BOOL hasReferenceAltM;
@property (nonatomic) BOOL hasReferenceAltUncM;
@property (nonatomic) BOOL hasReliability;
@property (nonatomic) BOOL hasSpeedMps;
@property (nonatomic) BOOL hasSpeedUncMps;
@property (nonatomic) BOOL hasTimeSinceLastSignificantLocationVisitExitS;
@property (nonatomic) BOOL hasTimestampOfCalibrationS;
@property (nonatomic) float horizontalUncM; // ivar: _horizontalUncM
@property (nonatomic) CGFloat latitudeDeg; // ivar: _latitudeDeg
@property (nonatomic) CGFloat longitudeDeg; // ivar: _longitudeDeg
@property (nonatomic) float referenceAltM; // ivar: _referenceAltM
@property (nonatomic) float referenceAltUncM; // ivar: _referenceAltUncM
@property (nonatomic) int reliability; // ivar: _reliability
@property (nonatomic) float speedMps; // ivar: _speedMps
@property (nonatomic) float speedUncMps; // ivar: _speedUncMps
@property (nonatomic) CGFloat timeSinceLastSignificantLocationVisitExitS; // ivar: _timeSinceLastSignificantLocationVisitExitS
@property (nonatomic) CGFloat timestampOfCalibrationS; // ivar: _timestampOfCalibrationS


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)reliabilityAsString:(int)arg0 ;
-(int)StringAsReliability:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif