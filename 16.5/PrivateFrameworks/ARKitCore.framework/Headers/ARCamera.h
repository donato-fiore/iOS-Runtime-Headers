// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARCAMERA_H
#define ARCAMERA_H

@class AVCameraCalibrationData, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ARCamera : NSObject <NSSecureCoding, NSCopying>

 {
    ? _tangentialDistortion;
    ? _radialDistortion;
}


@property (retain, nonatomic) AVCameraCalibrationData *calibrationData; // ivar: _calibrationData
@property (nonatomic) NSInteger devicePosition; // ivar: _devicePosition
@property ? eulerAngles;
@property (nonatomic) CGFloat exposureDuration; // ivar: _exposureDuration
@property (nonatomic) float exposureOffset; // ivar: _exposureOffset
@property (retain, nonatomic) NSDictionary *extrinsicsMap; // ivar: _extrinsicsMap
@property (nonatomic) CGSize imageResolution; // ivar: _imageResolution
@property (nonatomic) ? intrinsics; // ivar: _intrinsics
@property (nonatomic) NSUInteger lensType; // ivar: _lensType
@property (readonly, nonatomic) ? projectionMatrix;
@property ? radialDistortion;
@property ? tangentialDistortion;
@property (nonatomic) NSInteger trackingState; // ivar: _trackingState
@property (nonatomic) NSInteger trackingStateReason; // ivar: _trackingStateReason
@property (nonatomic) ? transform; // ivar: _transform


-(BOOL)isEqual:(id)arg0 ;
-(id)_description:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntrinsics:(struct ? )arg0 imageResolution:(struct CGSize )arg1 ;
-(id)unprojectPoint:(struct ? )arg0 ontoPlaneWithTransform:(NSInteger)arg1 orientation:(struct CGSize )arg2 viewportSize;
-(struct ? )extrinsicMatrix4x4ToDeviceType:(id)arg0 ;
-(struct ? )extrinsicMatrixToDeviceType:(id)arg0 ;
-(struct ? )projectionMatrixForOrientation:(NSInteger)arg0 viewportSize:(struct CGSize )arg1 zNear:(CGFloat)arg2 zFar:(CGFloat)arg3 ;
-(struct ? )viewMatrixForOrientation:(NSInteger)arg0 ;
-(struct CGPoint )projectPoint:(NSInteger)arg0 orientation:(struct CGSize )arg1 viewportSize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif