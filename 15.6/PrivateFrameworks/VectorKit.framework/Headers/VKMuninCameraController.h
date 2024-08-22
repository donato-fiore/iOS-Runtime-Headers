// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKMUNINCAMERACONTROLLER_H
#define VKMUNINCAMERACONTROLLER_H

@class NSString;
@protocol VKGesturingCameraController;


#import "VKCameraController.h"

@interface VKMuninCameraController : VKCameraController <VKGesturingCameraController>

 {
    *void _muninSceneLogic;
    *void _elevationLogic;
    shared_ptr<md::TaskContext> _taskContext;
    optional<(anonymous namespace)::PointSegment> _currentPointSegment;
    ? _pathAnimator;
    unique_ptr<(anonymous namespace)::BumpAnimator, std::default_delete<(anonymous namespace)::BumpAnimator>> _bumpAnimator;
    BOOL _panning;
    BOOL _panStopping;
    Matrix<float, 2, 1> _panLocation;
    Matrix<float, 2, 1> _panTranslation;
    _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _panAnimation;
    BOOL _pinching;
    Matrix<float, 2, 1> _pinchZoomOffset;
    Unit<RadianUnitDescription, double> _pinchStartFieldOfView;
    _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _pinchResetAnimation;
    float _cameraOffsetFactor;
    _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _offsetAnimation;
    CGFloat _lastUpdateTime;
    Spring<double, 1, gdc::SpringType::Angular> _panSpring;
    Unit<RadianUnitDescription, double> _heading;
    Unit<RadianUnitDescription, double> _pitch;
    BOOL _restrictWidestFieldOfView;
    Unit<RadianUnitDescription, double> _widestFieldOfView;
    Coordinate3D<Radians, double> _rigPosition;
    CameraFrame<geo::Radians, double> _previousCameraFrame;
    NSUInteger _tapIndex;
    shared_ptr<geo::Task> _preparePath;
    unique_ptr<(anonymous namespace)::PathAnimationDescription, std::default_delete<(anonymous namespace)::PathAnimationDescription>> _currentPathAnimation;
    unique_ptr<(anonymous namespace)::PendingPathAnimation, std::default_delete<(anonymous namespace)::PendingPathAnimation>> _pendingPathAnimation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL virtualParallaxEnabled; // ivar: _virtualParallaxEnabled


-(*void)currentPoint;
-(?)initWithTaskContext:(?)arg0 mapDataAccess:(?)arg1 animationRunner:(?)arg2 runLoopController:(?)arg3 cameraDelegate:(?)arg4 muninSceneLogicelevationLogic;
-(BOOL)canZoomInForTileSize:(NSInteger)arg0 ;
-(BOOL)canZoomOutForTileSize:(NSInteger)arg0 ;
-(BOOL)cancelPendingMove;
-(BOOL)cancelPendingMoveExceptBump;
-(BOOL)isAnimationsRunning;
-(BOOL)isAnimationsRunningExceptBump;
-(BOOL)isBumpAnimationRunning;
-(BOOL)isPathAnimationRunning;
-(BOOL)moveToPoint:(*void)arg0 withHeading:(struct Unit<RadianUnitDescription, double> )arg1 withPitch:(struct Unit<RadianUnitDescription, double> )arg2 animated:(BOOL)arg3 completionHandler:(id)arg4 ;
-(BOOL)tapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)usesVKCamera;
-(CGFloat)_zoomRubberBandFov:(CGFloat)arg0 ;
-(CGFloat)altitude;
-(CGFloat)currentZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)heading;
-(CGFloat)maximumZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)minimumZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)pitch;
-(CGFloat)topDownMinimumZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)zoomLevelAdjustmentForTileSize:(NSInteger)arg0 ;
-(struct ? )centerCoordinate;
-(struct Matrix<float, 2, 1> )screenPointWithOffset:(struct CGPoint )arg0 ;
-(struct Unit<RadianUnitDescription, double> )_horizontalFieldOfView:(struct Unit<RadianUnitDescription, double> )arg0 ;
-(struct Unit<RadianUnitDescription, double> )_pitchForScreenPoint:(struct Matrix<float, 2, 1> )arg0 ;
-(struct Unit<RadianUnitDescription, double> )_verticalFieldOfView:(struct Unit<RadianUnitDescription, double> )arg0 ;
-(void)_setHeading:(struct Unit<RadianUnitDescription, double> )arg0 ;
-(void)animatePath:(*void)arg0 animator:(*void)arg1 preloadedRequiredViews:(*void)arg2 prePruneData:(BOOL)arg3 completionHandler:(id)arg4 ;
-(void)animatePath:(*void)arg0 withTarget:(*void)arg1 lookAtTarget:(BOOL)arg2 constantLod:(BOOL)arg3 prePruneData:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)moveAlongPath:(struct PathAnimationDescription )arg0 tap:(struct TapDescription )arg1 preloadedViews:(struct unordered_map<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, std::allocator<std::pair<const gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> )arg2 continued:(BOOL)arg3 ;
-(void)pathAnimationComplete:(NSUInteger)arg0 ;
-(void)pathAnimationPrepared:(struct PathAnimationDescription )arg0 tap:(struct TapDescription )arg1 preloadedViews:(struct unordered_map<gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>, gdc::LayerDataRequestKeyHash, std::equal_to<gdc::LayerDataRequestKey>, std::allocator<std::pair<const gdc::LayerDataRequestKey, std::shared_ptr<gdc::LayerData>>>> )arg2 ;
-(void)runBumpAnimation:(*void)arg0 targetPoint:(*void)arg1 completionHandler:(id)arg2 ;
-(void)selectLabelMarker:(*void)arg0 completion:(id)arg1 ;
-(void)setCameraFrame:(struct CameraFrame<geo::Radians, double> )arg0 ;
// -(void)setCenterCoordinate:(struct ? )arg0 altitude:(CGFloat)arg1 yaw:(CGFloat)arg2 pitch:(CGFloat)arg3 duration:(CGFloat)arg4 animationStyle:(NSInteger)arg5 timingCurve:(id)arg6 completion:(unk)arg7  ;
-(void)setCurrentPoint:(*void)arg0 ;
-(void)setCurrentPoint:(*void)arg0 secondaryPoint:(struct optional<md::mun::CollectionPoint> )arg1 ;
-(void)setCurrentSegment:(*void)arg0 ;
-(void)setVkCamera:(id)arg0 ;
-(void)setWidestFieldOfView:(struct Unit<RadianUnitDescription, double> )arg0 ;
-(void)startPanningAtPoint:(struct CGPoint )arg0 panAtStartPoint:(BOOL)arg1 ;
-(void)startPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopAnimations;
-(void)stopAnimationsExceptBump;
-(void)stopPanningAtPoint:(struct CGPoint )arg0 ;
-(void)stopPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)transferGestureState:(id)arg0 ;
-(void)updateCurrentPointView:(BOOL)arg0 ;
-(void)updatePanWithTranslation:(struct CGPoint )arg0 ;
-(void)updatePinchWithFocusPoint:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updateRotationWithFocusPoint:(struct CGPoint )arg0 newValue:(CGFloat)arg1 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)willStopPanningAtPoint:(struct CGPoint )arg0 withVelocity:(struct CGPoint )arg1 ;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;
-(void)zoomAnimated:(struct Unit<RadianUnitDescription, double> )arg0 completion:(id)arg1 ;
-(void)zoomAnimatedWithDuration:(struct Unit<RadianUnitDescription, double> )arg0 duration:(float)arg1 completion:(id)arg2 ;


@end


#endif