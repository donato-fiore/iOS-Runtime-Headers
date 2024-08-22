// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLCAMERA_H
#define MDLCAMERA_H

@class CAAnimation;


#import "MDLObject.h"

@interface MDLCamera : MDLObject {
    *RTCamera _camera;
    ? _flash;
}


@property (copy, nonatomic) CAAnimation *apertureAnimation; // ivar: _apertureAnimation
@property (copy, nonatomic) CAAnimation *apertureAspectAnimation; // ivar: _apertureAspectAnimation
@property (nonatomic) NSUInteger apertureBladeCount; // ivar: _apertureBladeCount
@property (nonatomic) float barrelDistortion; // ivar: _barrelDistortion
@property (nonatomic) float chromaticAberration; // ivar: _chromaticAberration
@property ? exposure;
@property ? exposureCompression;
@property (nonatomic) float fStop; // ivar: _fStop
@property (copy, nonatomic) CAAnimation *fStopAnimation; // ivar: _fStopAnimation
@property (nonatomic) float farVisibilityDistance;
@property (nonatomic) float fieldOfView;
@property (nonatomic) float fisheyeDistortion; // ivar: _fisheyeDistortion
@property ? flash;
@property (copy, nonatomic) CAAnimation *focalDistanceAnimation; // ivar: _focalDistanceAnimation
@property (nonatomic) float focalLength;
@property (copy, nonatomic) CAAnimation *focalLengthAnimation; // ivar: _focalLengthAnimation
@property (nonatomic) float focusDistance;
@property (nonatomic) float maximumCircleOfConfusion; // ivar: _maximumCircleOfConfusion
@property (nonatomic) float nearVisibilityDistance;
@property (nonatomic) float opticalVignetting; // ivar: _opticalVignetting
@property (nonatomic) NSUInteger projection; // ivar: _projection
@property (readonly, nonatomic) ? projectionMatrix;
@property (nonatomic) float sensorAspect;
@property ? sensorEnlargement;
@property ? sensorShift;
@property (nonatomic) float sensorVerticalAperture;
@property (nonatomic) CGFloat shutterOpenInterval; // ivar: _shutterOpenInterval
@property (nonatomic) float worldToMetersConversionScale; // ivar: _worldToMetersConversionScale


-(float)circleOfConfusionForDistance:(float)arg0 ;
-(id)bokehKernelWithSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)rayToforViewPort;
-(struct ? )getProjectionMatrixAtTime:(CGFloat)arg0 ;
-(struct ? )getViewMatrixAtTime:(CGFloat)arg0 ;
-(void)lookAt;
-(void)lookAtfrom;


@end


#endif