// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNCAMERANAVIGATIONCONTROLLER_H
#define SCNCAMERANAVIGATIONCONTROLLER_H

@class UIGestureRecognizer, NSString;
@protocol SCNEventHandler, SCNCameraControllerDelegate, SCNCameraNavigationControllerDelegate;

#import <Foundation/Foundation.h>

#import "SCNCameraController.h"
#import "SCNNode.h"
#import "SCNView.h"

@interface SCNCameraNavigationController : NSObject <SCNEventHandler, SCNCameraControllerDelegate>

 {
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    BOOL _isDraggingWithOneFinger;
    NSInteger _lastGestureFingerCount;
    NSInteger _browseMode;
    float _cameraOriginalFieldOfView;
    float _fieldOfViewZoomFactor;
    float _originalOrthoScale;
    float _orthographicZoomFactor;
    BOOL _enabled;
    BOOL _translationAllowed;
    BOOL _didEverFocusNode;
    BOOL _isSceneBoundingSphereComputed;
    BOOL _cameraTargetComputed;
    BOOL _pinchShouldMoveCamera;
    BOOL _shouldUpdateTarget;
    BOOL _shouldIgnoreMomentumEvents;
    BOOL _isOrbiting;
    BOOL _recordingPointOfViewEvents;
    BOOL _mouseDown;
    ? _sceneBoundingSphere;
    ? _translationOrigin;
    float _initialZoom;
    ? _initialPointOfViewWorldPosition;
    CGFloat _lastKeyInputTime;
    CGPoint _initialInputLocation;
    CGPoint _lastInputLocation;
    CGPoint _accumulatedDrag;
    CGFloat _lastRotationAngle;
    os_unfair_lock_s _drawAtTimeLock;
    ? _stickyAxis;
    ? _target;
    ? _inertia;
    ? _keyboard;
    ? _scrollWheelModifiers;
}


@property (nonatomic) BOOL allowsTranslation;
@property (nonatomic) BOOL autoSwitchToFreeCamera; // ivar: _autoSwitchToFreeCamera
@property (nonatomic) BOOL automaticCameraTarget;
@property (readonly, nonatomic) SCNCameraController *cameraController; // ivar: _cameraController
@property (nonatomic) SCNVector3 cameraTarget;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SCNCameraNavigationControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableFreeCamera; // ivar: _enableFreeCamera
@property (nonatomic) BOOL enableInertia;
@property (nonatomic) BOOL enabled;
@property (nonatomic) CGFloat flyModeVelocity; // ivar: _flyModeVelocity
@property (readonly, nonatomic) SCNNode *freeCamera; // ivar: _freeViewCameraNode
@property (nonatomic) CGFloat friction;
@property (nonatomic) BOOL gimbalLockMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat panSensitivity; // ivar: _panSensitivity
@property (nonatomic) CGFloat rotationSensitivity; // ivar: _rotationSensitivity
@property (nonatomic) NSUInteger stickyAxis;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat truckSensitivity; // ivar: _truckSensitivity
@property (nonatomic) SCNView *view; // ivar: _view


-(?)_computeBoundingSphereOmittingFloorsForNodesphere;
-(BOOL)_pointOfViewUsesOrthographicProjection;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)wantsRedraw;
-(CGFloat)_modeSensitivity;
-(CGFloat)zoomFactor;
-(NSUInteger)_effectiveStickyAxis;
-(float)_cappedTranslationDelta:(float)arg0 ;
-(float)_orthographicScaleForZoomFactor:(float)arg0 ;
-(float)_orthographicZoomFactorForProposedZoomFactor:(float)arg0 ;
-(float)_pointOfViewOrthographicScale;
-(float)_targetDistance;
-(float)_translationCoef;
-(id)_defaultTargetForScene;
-(id)gestureRecognizers;
-(id)initWithView:(id)arg0 ;
-(id)pointOfView;
-(id)worldFront;
-(struct SCNVector3 )cameraAutomaticTargetPoint;
-(struct SCNVector3 )gimbalLockVector;
// -(unk)_sceneBoundingSphere:(SEL)arg0  ;
-(void)__didChangePointOfView;
-(void)__willChangePointOfView;
-(void)_computeAutomaticTargetPointIfNeeded;
-(void)_computeStickyAxisIfNeeded:(struct CGPoint )arg0 ;
-(void)_computeTranslationOrigin3DFromPoint:(struct CGPoint )arg0 ;
-(void)_handleDoubleTap:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_handleRotation:(id)arg0 ;
-(void)_installFreeViewCameraIfNeeded;
-(void)_prepareFreeViewCamera;
-(void)_resetFreeViewCamera;
-(void)_setPointOfViewOrthographicScale:(float)arg0 ;
-(void)_setupUpVector;
-(void)_startBrowsingIfNeeded:(struct CGPoint )arg0 ;
-(void)_stopInertia;
-(void)_switchToFreeViewCamera;
-(void)_translateToViewPoint:(struct CGPoint )arg0 ;
-(void)_willBeginInteraction;
-(void)activateFreeCamera;
-(void)beginGesture:(id)arg0 ;
-(void)cameraDidChange;
-(void)cameraInertiaDidEndForController:(id)arg0 ;
-(void)cameraInertiaWillStartForController:(id)arg0 ;
-(void)cameraWillChange;
-(void)dealloc;
-(void)focusNode:(id)arg0 ;
-(void)focusNodes:(id)arg0 ;
-(void)invalidateCameraTarget;
-(void)panWithGestureRecognizer:(id)arg0 ;
-(void)pinchWithGestureRecognizer:(id)arg0 ;
-(void)rotateOf:(CGFloat)arg0 ;
-(void)rotateWithGestureRecognizer:(id)arg0 ;
-(void)sceneDidChange;
-(void)sceneWillChange;
-(void)setGimbalLockVector:(struct SCNVector3 )arg0 ;
-(void)setZoomFactor:(CGFloat)arg0 ;
-(void)translateByX:(float)arg0 Y:(float)arg1 Z:(float)arg2 ;
-(void)viewDidDrawAtTime:(CGFloat)arg0 ;
-(void)viewWillDrawAtTime:(CGFloat)arg0 ;
-(void)zoomBy:(float)arg0 ;
-(void)zoomBy:(float)arg0 animate:(BOOL)arg1 ;


@end


#endif