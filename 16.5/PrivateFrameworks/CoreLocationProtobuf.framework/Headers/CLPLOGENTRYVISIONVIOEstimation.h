// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONVIOESTIMATION_H
#define CLPLOGENTRYVISIONVIOESTIMATION_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "CLPLOGENTRYVISIONCGSize.h"
#import "CLPLOGENTRYVISIONSimdFloatMxN.h"
#import "CLPLOGENTRYVISIONVIOInertialCovarianceInfo.h"
#import "CLPLOGENTRYVISIONVIOInertialStateInfo.h"
#import "CLPLOGENTRYVISIONTimeStamp.h"

@interface CLPLOGENTRYVISIONVIOEstimation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CLPLOGENTRYVISIONCGSize *cameraImageResolution; // ivar: _cameraImageResolution
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraIntrinsics; // ivar: _cameraIntrinsics
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraPose; // ivar: _cameraPose
@property (readonly, nonatomic) BOOL hasCameraImageResolution;
@property (readonly, nonatomic) BOOL hasCameraIntrinsics;
@property (readonly, nonatomic) BOOL hasCameraPose;
@property (readonly, nonatomic) BOOL hasInertialCovariance;
@property (readonly, nonatomic) BOOL hasInertialCovarianceInfo;
@property (readonly, nonatomic) BOOL hasInertialState;
@property (readonly, nonatomic) BOOL hasInertialStateInfo;
@property (readonly, nonatomic) BOOL hasOriginTimestamp;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTrackingState;
@property (retain, nonatomic) NSData *inertialCovariance; // ivar: _inertialCovariance
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialCovarianceInfo *inertialCovarianceInfo; // ivar: _inertialCovarianceInfo
@property (retain, nonatomic) NSData *inertialState; // ivar: _inertialState
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialStateInfo *inertialStateInfo; // ivar: _inertialStateInfo
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *originTimestamp; // ivar: _originTimestamp
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp; // ivar: _timestamp
@property (nonatomic) int trackingState; // ivar: _trackingState


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)trackingStateAsString:(int)arg0 ;
-(int)StringAsTrackingState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif