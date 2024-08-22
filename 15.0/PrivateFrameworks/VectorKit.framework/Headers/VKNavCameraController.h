// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKNAVCAMERACONTROLLER_H
#define VKNAVCAMERACONTROLLER_H

@class NSString, GEOMapRegion, VKScreenCanvas<VKInteractiveMap>;
@protocol VKNavigationCameraController, VKGesturingCameraController, VKNavContextObserver;


#import "VKCameraController.h"
#import "VKGestureCameraBehavior.h"
#import "VKAttachedNavGestureCameraBehavior.h"
#import "VKDetachedNavGestureCameraBehavior.h"
#import "VKDaVinciGestureCameraController.h"
#import "VKTimedAnimation.h"
#import "VKNavContext.h"
#import "VKSceneConfiguration.h"

@interface VKNavCameraController : VKCameraController <VKNavigationCameraController, VKGesturingCameraController, VKNavContextObserver>

 {
    unsigned char _cameraType;
    unsigned char _headingType;
    Unit<RadianUnitDescription, double> _puckCourse;
    Coordinate3D<Radians, double> _puckCoordinate;
    Unit<RadianUnitDescription, double> _headingDelta;
    Unit<RadianUnitDescription, double> _headingMinDelta;
    CameraFrame<geo::Radians, double> _lastCalculatedCameraFrame;
    CameraFrame<geo::Radians, double> _cameraFrame;
    BOOL _needsUpdate;
    Spring<double, 1, gdc::SpringType::Linear> _pitchSpring;
    Spring<double, 1, gdc::SpringType::Angular> _headingSpring;
    Spring<double, 1, gdc::SpringType::Linear> _distanceFromTargetSpring;
    Spring<double, 2, gdc::SpringType::Linear> _screenPositionSpring;
    Unit<MeterUnitDescription, double> _cameraDistanceFromTarget;
    Unit<RadianUnitDescription, double> _cameraPitch;
    CGFloat _previousUpdateTime;
    CGFloat _maxZoomScale;
    CGFloat _minZoomScale;
    VKGestureCameraBehavior *_gestureBehavior;
    VKAttachedNavGestureCameraBehavior *_attachedGestureBehavior;
    VKDetachedNavGestureCameraBehavior *_detachedGestureBehavior;
    VKDaVinciGestureCameraController *_davinciGestureCameraController;
    BOOL _isDetached;
    BOOL _panning;
    BOOL _rotating;
    BOOL _pitching;
    BOOL _zooming;
    VKTimedAnimation *_transitionAnimation;
    VKTimedAnimation *_snapPitchAnimation;
    VKTimedAnimation *_snapHeadingAnimation;
    CameraFrame<geo::Radians, double> _transitionFrame;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _currentStyleName;
    vector<geo::Coordinate3D<Radians, double>, std::allocator<geo::Coordinate3D<Radians, double>>> _coordinatesToFrame;
    unsigned char _styleManeuversToFrame;
    unsigned char _maneuversToFrame;
    unsigned char _styleLegsToFrame;
    unsigned char _segmentsToFrame;
    CGFloat _minCameraHeight;
    CGFloat _maxCameraHeight;
    Unit<RadianUnitDescription, double> _minCameraPitch;
    Unit<RadianUnitDescription, double> _maxCameraPitch;
    VKEdgeInsets _previousMapEdgeInsets;
    VKEdgeInsets _framingEdgeInset;
    VKEdgeInsets _framingEdgeInsetProportional;
    Matrix<float, 2, 1> _puckMovementBoundsMin;
    Matrix<float, 2, 1> _puckMovementBoundsMax;
    Matrix<float, 2, 1> _puckScreenPosition;
    CGFloat _minHeightDeltaChangeHorizontal;
    CGFloat _maxHeightDeltaChangeHorizontal;
    CGFloat _minHeightDeltaChangeVertical;
    CGFloat _maxHeightDeltaChangeVertical;
    CGFloat _halfPuckSize;
    Box<double, 2> _viewableScreenRect;
    Box<double, 2> _framingScreenRect;
    BOOL _enablePan;
    BOOL _enableZoom;
    BOOL _enablePitch;
    BOOL _enableRotate;
    float _panReturnDelayTime;
    unsigned char _alternateFramingSource;
    unsigned char _secondaryAlternateFramingSource;
    CGFloat _maxFramingDistance;
    CGFloat _framingDistanceAfterManeuver;
    VKNavContext *_navContext;
    ? _locationCoordinate;
    PolylineCoordinate _routeCoordinate;
    BOOL _frameAllGroupedManeuvers;
    unsigned char _maxManeuversToFrame;
    BOOL _ignorePointsBehind;
    Coordinate3D<Radians, double> _routeFocusCoordinate;
    NSUInteger _lastTargetStyleIdentifier;
    CGFloat _desiredZoomScale;
    float _animationTime;
    BOOL _isTracking;
    shared_ptr<md::TaskContext> _taskContext;
    CGFloat _depthNear;
    BOOL _leftHanded;
    BOOL _sentZoomNotification;
    BOOL _enableDynamicFrameRate;
    Coordinate3D<Radians, double> _cornerCoordinates;
    WindowedSampler<60> _pixelSamples;
    Sampler _requesteDisplayRateSampler;
    NSInteger _requestedDisplayRate;
    BOOL _isElevatedRoute;
    CGFloat _elevationScale;
    *void _cameraManager;
    NSInteger _defaultMaxDisplayRate;
    vector<NavCameraPixelFrameRate, std::allocator<NavCameraPixelFrameRate>> _pixelChangeFrameRate;
}


@property (readonly, nonatomic) CGFloat altitude;
@property (readonly, nonatomic) *AnimationRunner animationRunner;
@property (nonatomic) NSInteger baseDisplayRate; // ivar: _baseDisplayRate
@property (nonatomic) ? centerCoordinate;
@property (nonatomic) VKEdgeInsets clientFramingInsets; // ivar: _clientFramingInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat distanceFromCenterCoordinate;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat heading;
@property (readonly, nonatomic) BOOL isFullyPitched;
@property (readonly, nonatomic) BOOL isPitched;
@property (readonly, nonatomic) BOOL isRotated;
@property (readonly, nonatomic) *void mapDataAccess;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property (readonly, nonatomic) CGFloat maxPitch;
@property (readonly, nonatomic) CGFloat minPitch;
@property (nonatomic) CGFloat pitch;
@property (readonly, nonatomic) *RunLoopController runLoopController;
@property (nonatomic) VKSceneConfiguration *sceneConfiguration; // ivar: _sceneConfiguration
@property (nonatomic) VKScreenCanvas<VKInteractiveMap> *screenCanvas; // ivar: _screenCanvas
@property (readonly) Class superclass;
@property (nonatomic) CGFloat zoomScale;


-(?)initWithTaskContext:(?)arg0 device:(?)arg1 mapDataAccess:(?)arg2 animationRunner:(?)arg3 runLoopControllercameraDelegate;
-(BOOL)_addStepToFraming:(NSUInteger)arg0 forRoute:(id)arg1 ;
-(BOOL)_canZoomIn;
-(BOOL)_canZoomOut;
-(BOOL)_hasRunningAnimation;
-(BOOL)_updateSprings:(CGFloat)arg0 ;
-(BOOL)canEnter3DMode;
-(BOOL)canZoomInForTileSize:(NSInteger)arg0 ;
-(BOOL)canZoomOutForTileSize:(NSInteger)arg0 ;
-(BOOL)isGesturing;
-(BOOL)isPitchEnabled;
-(BOOL)isRotateEnabled;
-(BOOL)snapMapIfNecessary:(BOOL)arg0 ;
-(BOOL)tapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)usesVKCamera;
-(BOOL)wantsTimerTick;
-(CGFloat)_calculateMaxPixelChangeAndUpdateCorners;
-(CGFloat)_normalizedZoomLevelForDisplayZoomLevel:(CGFloat)arg0 ;
-(CGFloat)currentZoomLevel;
-(CGFloat)distanceToManeuver:(NSUInteger)arg0 ;
-(CGFloat)maxZoomHeight;
-(CGFloat)maxZoomScale;
-(CGFloat)maximumZoomLevel;
-(CGFloat)minZoomHeight;
-(CGFloat)minZoomScale;
-(CGFloat)minimumZoomLevel;
-(CGFloat)topDownMinimumZoomLevel;
-(NSInteger)defaultDisplayRate;
-(NSInteger)displayRate;
-(NSInteger)tileSize;
-(float)_currentRoadSignOffset;
-(float)idealPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)maxPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)maximumNormalizedZoomLevel;
-(float)minPitchForNormalizedZoomLevel:(float)arg0 ;
-(float)minimumNormalizedZoomLevel;
-(id)_debugText:(BOOL)arg0 showNavCameraDebugConsoleAttributes:(BOOL)arg1 ;
-(id)_detachedGestureController;
-(id)detailedDescription;
-(id)init;
-(struct Box<double, 2> )calculateViewableScreenRect;
-(struct Box<double, 2> )calculateViewableScreenRectForEdgeInsets:(struct VKEdgeInsets )arg0 ;
-(struct CameraFrame<geo::Radians, double> )cameraFrame;
-(struct CameraFrame<geo::Radians, double> )currentCameraFrame;
-(struct CameraFrame<geo::Radians, double> )restingCameraFrame;
-(struct Coordinate3D<Radians, double> )_coordinateForGeoLocation:(struct ? )arg0 ;
-(struct Coordinate3D<Radians, double> )routeCoordinateAtDistance:(CGFloat)arg0 ;
-(struct Coordinate3D<Radians, double> )routeLocationAtDistance:(CGFloat)arg0 fromManeuver:(NSUInteger)arg1 ;
-(struct Matrix<double, 2, 1> )puckScreenPoint;
-(struct Unit<RadianUnitDescription, double> )calculateHeading;
-(struct Unit<RadianUnitDescription, double> )maxCameraPitch;
-(struct Unit<RadianUnitDescription, double> )minCameraPitch;
-(struct shared_ptr<gss::StylesheetManager<gss::ScenePropertyID>> )_getActiveSceneManager;
-(unsigned char)cameraHeadingType;
-(void)_addAdditionalRoutePointsToFrameToList:(*void)arg0 ;
-(void)_setDetached:(BOOL)arg0 ;
-(void)_setNavCameraIsDetached:(BOOL)arg0 ;
-(void)_setNeedsUpdate;
-(void)_snapHeading;
-(void)_snapPitch;
-(void)_updateCameraLimits;
-(void)_updateClipPlanes;
-(void)_updateDebugOverlay;
-(void)_updateDebugText;
-(void)_updateForAnimatedEdgeInsets;
-(void)_updateObserverCouldZoomIn:(BOOL)arg0 couldZoomOut:(BOOL)arg1 ;
-(void)_updateRouteSinuosity;
-(void)_updateSceneStyles:(BOOL)arg0 ;
-(void)_updateStyles;
-(void)_updateZoomScaleLimts;
-(void)animateCameraWithDuration:(float)arg0 fromFrame:(*void)arg1 completionHandler:(id)arg2 ;
-(void)canvasDidLayout;
-(void)dealloc;
-(void)navContextCameraHeadingOverrideDidChange:(id)arg0 ;
-(void)navContextStateDidChange:(id)arg0 ;
-(void)pitchTo:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)puckAnimator:(id)arg0 getElevation:(*CGFloat)arg1 withCoordinate:(*void)arg2 ;
-(void)puckAnimator:(id)arg0 runAnimation:(id)arg1 ;
-(void)puckAnimator:(id)arg0 updatedPosition:(*void)arg1 course:(*void)arg2 ;
-(void)puckAnimator:(id)arg0 updatedTargetPosition:(*void)arg1 ;
-(void)puckAnimatorDidStop:(id)arg0 ;
-(void)resetSpringsToResting;
-(void)returnToPuck;
-(void)returnToTrackingWithDelay:(CGFloat)arg0 resetZoom:(BOOL)arg1 ;
-(void)rotateTo:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
-(void)setCameraFrame:(struct CameraFrame<geo::Radians, double> )arg0 ;
-(void)setEdgeInsets:(struct VKEdgeInsets )arg0 ;
-(void)setEdgeInsetsAnimating:(BOOL)arg0 ;
-(void)setNavContext:(id)arg0 ;
-(void)setVkCamera:(id)arg0 ;
-(void)startPanningAtPoint:(struct CGPoint )arg0 panAtStartPoint:(BOOL)arg1 ;
-(void)startPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)startWithPounce:(BOOL)arg0 startLocation:(struct ? )arg1 startCourse:(CGFloat)arg2 pounceCompletionHandler:(id)arg3 ;
-(void)stop;
-(void)stopAnimations;
-(void)stopPanningAtPoint:(struct CGPoint )arg0 ;
-(void)stopPinchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopPitchingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopRotatingWithFocusPoint:(struct CGPoint )arg0 ;
-(void)stopSnappingAnimations;
-(void)stylesheetDidChange;
-(void)stylesheetDidReload;
-(void)transferGestureState:(id)arg0 ;
-(void)updateCameraState;
-(void)updateLocation:(*void)arg0 andCourse:(*void)arg1 ;
-(void)updateManeuversToFrame;
-(void)updatePanWithTranslation:(struct CGPoint )arg0 ;
-(void)updatePinchWithFocusPoint:(struct CGPoint )arg0 oldFactor:(CGFloat)arg1 newFactor:(CGFloat)arg2 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 degrees:(CGFloat)arg1 ;
-(void)updatePitchWithFocusPoint:(struct CGPoint )arg0 translation:(CGFloat)arg1 ;
-(void)updatePointsToFrame;
-(void)updateRotationWithFocusPoint:(struct CGPoint )arg0 newValue:(CGFloat)arg1 ;
-(void)updateSpringsForFramingCamera;
-(void)updateSpringsForTrackingCamera;
-(void)updateState;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)zoom:(CGFloat)arg0 withFocusPoint:(struct CGPoint )arg1 completionHandler:(id)arg2 ;


@end


#endif