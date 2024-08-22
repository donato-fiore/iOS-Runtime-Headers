// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKDAVINCICAMERACONTROLLER_H
#define VKDAVINCICAMERACONTROLLER_H

@class NSString;
@protocol VKGesturingCameraController;


#import "VKScreenCameraController.h"

@interface VKDaVinciCameraController : VKScreenCameraController <VKGesturingCameraController>

 {
    *void _mapEngine;
    *void _cameraManager;
    CGFloat _currentDoublePanPitch;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
    BOOL _couldEnter3DMode;
    CGFloat _lastRotation;
    CGPoint _panStartScreenPoint;
    CGPoint _panLastScreenPoint;
    CGFloat _beganDoublePanPitch;
    BOOL _updateHeight;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)initWithMapDataAccess:(?)arg0 animationRunner:(?)arg1 runLoopController:(?)arg2 cameraDelegatemapEngine;
-(BOOL)canEnter3DMode;
-(BOOL)isFullyPitched;
-(BOOL)isPitched;
-(BOOL)snapMapIfNecessary:(BOOL)arg0 ;
-(BOOL)usesVKCamera;
-(CGFloat)altitude;
-(CGFloat)currentZoomLevel;
-(CGFloat)distanceFromCenterCoordinate;
-(CGFloat)durationToAnimateToMapRegion:(id)arg0 ;
-(CGFloat)earthRadiusAt:(struct Unit<RadianUnitDescription, double> )arg0 ;
-(CGFloat)geocAngleBetween:(struct Coordinate2D<Radians, double> )arg0 andCoordinate:(struct Coordinate2D<Radians, double> )arg1 ;
-(CGFloat)heading;
-(CGFloat)maxPitch;
-(CGFloat)maximumZoomLevel;
-(CGFloat)minPitch;
-(CGFloat)minimumZoomLevel;
-(CGFloat)pitch;
-(CGFloat)presentationYaw;
-(CGFloat)topDownMinimumZoomLevel;
-(CGFloat)zoomForMapRegion:(id)arg0 ;
-(NSInteger)tileSize;
-(float)idealPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)maxPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)maximumNormalizedZoomLevel;
-(float)minPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)minimumNormalizedZoomLevel;
-(id)createMoveToZoomOutZoomInFrameFunction:(SEL)arg0 toLatLon:(struct CameraFrame<geo::Radians, double> )arg1 ;
-(id)mapRegion;
-(id)mapRegionIgnoringEdgeInsets;
-(struct ? )centerCoordinate;
-(struct Coordinate2D<Radians, double> )_centerCoordinateForMapRegion:(id)arg0 ;
-(struct Coordinate2D<Radians, double> )centerCoordinateRad;
-(struct Unit<RadianUnitDescription, double> )greatCircleMidPointLatitude:(struct Unit<RadianUnitDescription, double> )arg0 fromLongitude:(struct Unit<RadianUnitDescription, double> )arg1 toLongitude:(struct Unit<RadianUnitDescription, double> )arg2 ;
-(struct Unit<RadianUnitDescription, double> )widestLatitudeForMapRegion:(id)arg0 ;
-(struct vector<geo::Coordinate2D<Radians, double>, std::allocator<geo::Coordinate2D<Radians, double>>> )_getVisibleArea;
-(void)_updateCanEnter3DMode;
-(void)_updateIsPitched;
// -(void)animateRegionWithDuration:(CGFloat)arg0 timingFunction:(id)arg1 stepHandler:(unk)arg2 completionHandler:(id)arg3  ;
-(void)animateToRestriction:(id)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)dealloc;
-(void)enter3DMode;
-(void)exit3DMode;
// -(void)moveTo:(struct Coordinate2D<Radians, double> )arg0 height:(CGFloat)arg1 useHeight:(BOOL)arg2 zoom:(CGFloat)arg3 rotation:(CGFloat)arg4 tilt:(CGFloat)arg5 duration:(CGFloat)arg6 timingCurve:(id)arg7 completion:(unk)arg8  ;
// -(void)moveTo:(struct Coordinate2D<Radians, double> )arg0 zoom:(CGFloat)arg1 rotation:(CGFloat)arg2 tilt:(CGFloat)arg3 duration:(CGFloat)arg4 timingCurve:(id)arg5 completion:(unk)arg6  ;
// -(void)moveToZoomOutZoomInTransition:(struct Coordinate2D<Radians, double> )arg0 height:(CGFloat)arg1 useHeight:(BOOL)arg2 zoom:(CGFloat)arg3 rotation:(CGFloat)arg4 tilt:(CGFloat)arg5 duration:(CGFloat)arg6 timingCurve:(id)arg7 completion:(unk)arg8  ;
-(void)panWithOffset:(struct CGPoint )arg0 relativeToScreenPoint:(struct CGPoint )arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(void)pitch:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)rotate:(CGFloat)arg0 atScreenPoint:(struct CGPoint )arg1 ;
-(void)rotateTo:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
// -(void)setCenterCoordinate3D:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
-(void)setCenterCoordinateDistanceRange:(struct ? )arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setGesturing:(BOOL)arg0 ;
// -(void)setMapRegion:(id)arg0 pitch:(CGFloat)arg1 yaw:(CGFloat)arg2 duration:(CGFloat)arg3 timingCurve:(id)arg4 completion:(unk)arg5  ;
-(void)setRegionRestriction:(id)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setYaw:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)startPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startTrackingAnnotation:(id)arg0 trackHeading:(BOOL)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 ;
-(void)stopGlobeAnimations;
-(void)stopPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)tapZoom:(struct CGPoint )arg0 levels:(CGFloat)arg1 completionHandler:(id)arg2 ;
-(void)tiltTo:(CGFloat)arg0 animated:(BOOL)arg1 exaggerate:(BOOL)arg2 ;
-(void)updateCameraLimits;
-(void)updateCameraManager;
-(void)updatePinchWithFocusPoint:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)updateState;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;
-(void)zoomToDistance:(struct CGPoint )arg0 distance:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(void)zoomToDistance:(struct CGPoint )arg0 distance:(CGFloat)arg1 time:(CGFloat)arg2 completionHandler:(id)arg3 ;


@end


#endif