// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKARWALKINGCAMERACONTROLLER_H
#define VKARWALKINGCAMERACONTROLLER_H

@class NSString;
@protocol VKGesturingCameraController;


#import "VKScreenCameraController.h"

@interface VKARWalkingCameraController : VKScreenCameraController <VKGesturingCameraController>

 {
    *void _arLogic;
    *void _elevationLogic;
    Quaternion<double> _rotationCorrectionQuaternion;
    Coordinate3D<Degrees, double> _coordinate;
    EulerAngles _eulerAngles;
    Unit<DegreeUnitDescription, double> _heading;
    vector<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>, std::allocator<std::variant<md::ARCameraPanEvent, md::ARCameraRotateEvent>>> _gestures;
    Monitorable<md::ConfigValue<GEOConfigKeyDouble, double>> _maxClipDistance;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)_locationProvider;
-(?)initWithTaskContext:(?)arg0 mapDataAccess:(?)arg1 animationRunner:(?)arg2 runLoopController:(?)arg3 cameraDelegate:(?)arg4 arLogicelevationLogic;
-(BOOL)usesVKCamera;
-(CGFloat)altitude;
-(CGFloat)currentZoomLevel;
-(CGFloat)distanceFromCenterCoordinate;
-(CGFloat)heading;
-(CGFloat)maxPitch;
-(CGFloat)maximumZoomLevel;
-(CGFloat)minPitch;
-(CGFloat)minimumZoomLevel;
-(CGFloat)pitch;
-(CGFloat)presentationHeading;
-(CGFloat)topDownMinimumZoomLevel;
-(id)_buildDebugString:(*void)arg0 ;
-(struct ? )centerCoordinate;
-(void)_updateClipPlanes;
-(void)_updateDebugOverlay:(*void)arg0 ;
-(void)dealloc;
-(void)pushGesture:(*void)arg0 ;
-(void)setAltitude:(CGFloat)arg0 ;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
-(void)setCenterCoordinate:(struct ? )arg0 ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
-(void)setDistanceFromCenterCoordinate:(CGFloat)arg0 ;
-(void)setHeading:(CGFloat)arg0 ;
-(void)setPitch:(CGFloat)arg0 ;
-(void)setVkCamera:(id)arg0 ;
-(void)startTrackingAnnotation:(id)arg0 trackHeading:(BOOL)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 ;
-(void)stopTrackingAnnotation;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif