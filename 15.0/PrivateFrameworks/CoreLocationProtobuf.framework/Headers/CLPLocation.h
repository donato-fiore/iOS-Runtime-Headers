// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLPLOCATION_H
#define CLPLOCATION_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "CLPBaroCalibrationIndication.h"
#import "CLPMotionActivity.h"
#import "CLPPipelineDiagnosticReport.h"
#import "CLPSatelliteReport.h"

@interface CLPLocation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) float altitude; // ivar: _altitude
@property (retain, nonatomic) NSMutableArray *appBundleIdIndices; // ivar: _appBundleIdIndices
@property (retain, nonatomic) CLPBaroCalibrationIndication *baroCalibrationIndication; // ivar: _baroCalibrationIndication
@property (nonatomic) int context; // ivar: _context
@property (nonatomic) float course; // ivar: _course
@property (nonatomic) float courseAccuracy; // ivar: _courseAccuracy
@property (retain, nonatomic) CLPMotionActivity *dominantMotionActivity; // ivar: _dominantMotionActivity
@property (nonatomic) int floor; // ivar: _floor
@property (nonatomic) BOOL hasAltitude;
@property (readonly, nonatomic) BOOL hasBaroCalibrationIndication;
@property (nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasCourse;
@property (nonatomic) BOOL hasCourseAccuracy;
@property (readonly, nonatomic) BOOL hasDominantMotionActivity;
@property (nonatomic) BOOL hasFloor;
@property (nonatomic) BOOL hasHorzUncSemiMaj;
@property (nonatomic) BOOL hasHorzUncSemiMajAz;
@property (nonatomic) BOOL hasHorzUncSemiMin;
@property (nonatomic) BOOL hasIsFromLocationController;
@property (nonatomic) BOOL hasModeIndicator;
@property (readonly, nonatomic) BOOL hasMotionActivity;
@property (nonatomic) BOOL hasMotionActivityConfidence;
@property (nonatomic) BOOL hasMotionActivityType;
@property (nonatomic) BOOL hasMotionVehicleConnected;
@property (nonatomic) BOOL hasMotionVehicleConnectedStateChanged;
@property (readonly, nonatomic) BOOL hasPipelineDiagnosticReport;
@property (nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasRawMotionActivity;
@property (readonly, nonatomic) BOOL hasSatReport;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasSpeedAccuracy;
@property (nonatomic) BOOL hasVerticalAccuracy;
@property (nonatomic) float horizontalAccuracy; // ivar: _horizontalAccuracy
@property (nonatomic) float horzUncSemiMaj; // ivar: _horzUncSemiMaj
@property (nonatomic) float horzUncSemiMajAz; // ivar: _horzUncSemiMajAz
@property (nonatomic) float horzUncSemiMin; // ivar: _horzUncSemiMin
@property (nonatomic) BOOL isFromLocationController; // ivar: _isFromLocationController
@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) int modeIndicator; // ivar: _modeIndicator
@property (retain, nonatomic) CLPMotionActivity *motionActivity; // ivar: _motionActivity
@property (nonatomic) int motionActivityConfidence; // ivar: _motionActivityConfidence
@property (nonatomic) int motionActivityType; // ivar: _motionActivityType
@property (nonatomic) BOOL motionVehicleConnected; // ivar: _motionVehicleConnected
@property (nonatomic) BOOL motionVehicleConnectedStateChanged; // ivar: _motionVehicleConnectedStateChanged
@property (retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport; // ivar: _pipelineDiagnosticReport
@property (nonatomic) int provider; // ivar: _provider
@property (retain, nonatomic) CLPMotionActivity *rawMotionActivity; // ivar: _rawMotionActivity
@property (retain, nonatomic) CLPSatelliteReport *satReport; // ivar: _satReport
@property (nonatomic) float speed; // ivar: _speed
@property (nonatomic) float speedAccuracy; // ivar: _speedAccuracy
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) float verticalAccuracy; // ivar: _verticalAccuracy


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)appBundleIdIndicesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)modeIndicatorAsString:(int)arg0 ;
-(int)StringAsModeIndicator:(id)arg0 ;
-(void)addAppBundleIdIndices:(id)arg0 ;
-(void)clearAppBundleIdIndices;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif