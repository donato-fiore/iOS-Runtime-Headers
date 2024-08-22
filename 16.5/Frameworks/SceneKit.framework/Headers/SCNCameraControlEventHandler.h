// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCNCAMERACONTROLEVENTHANDLER_H
#define SCNCAMERACONTROLEVENTHANDLER_H

@class UIGestureRecognizer;


#import "SCNEventHandler.h"
#import "SCNNode.h"

@interface SCNCameraControlEventHandler : SCNEventHandler {
    SCNNode *_freeViewCameraNode;
    CGPoint _initialPoint;
    ? _initialMatrix;
    float _initialZoom;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    ? _clickOrigin;
    int _lastGestureFingerCount;
    BOOL _isDraggingWithOneFinger;
    float _roll;
    ? _initialMatrixForRoll;
    UIGestureRecognizer *_pressGesture;
    UIGestureRecognizer *_tapGesture;
    UIGestureRecognizer *_pinchGesture;
    UIGestureRecognizer *_panGesture;
    UIGestureRecognizer *_rotateGesture;
    NSUInteger _stickyAxis;
    C3DSphere _viewedObjectSphere;
    BOOL _isViewedObjectSphereComputed;
    os_unfair_lock_s _stateLock;
    BOOL _enabled;
    BOOL _hasAutomaticCameraTarget;
    BOOL _automaticCameraTargetUpToDate;
    BOOL _inertia;
    BOOL _didEverFocusNode;
    BOOL _allowsTranslation;
    BOOL _pinchShouldMoveCamera;
    BOOL _alternateMode;
    BOOL _upDirIsSet;
    BOOL _gimbalLockMode;
    BOOL _inertiaRunning;
    NSInteger _browseMode;
    ? _upDir;
    SCNVector3 _cameraTarget;
    SCNVector3 _autoCameraTarget;
    float _browseScaleFactor;
    CGFloat _friction;
    CGPoint _totalDragWithInertia;
    CGPoint _inertiaVelocity;
    CGFloat _lastSimulationTime;
}


@property BOOL allowsTranslation;
@property BOOL automaticCameraTarget;
@property SCNVector3 cameraTarget;
@property BOOL enableInertia;
@property CGFloat friction;
@property BOOL gimbalLockMode;
@property SCNVector3 gimbalLockVector;
@property NSUInteger stickyAxis;


+(id)frontVectorWithPointOfView;
+(struct SCNMatrix4 )matrixWithNoRoll:(struct SCNMatrix4 )arg0 ;
-(?)computeBoundingSphereOmittingFloorsForNodesphere;
-(BOOL)_3DConnexionIsPressed;
-(BOOL)_freeCameraActivated;
-(BOOL)_isInertiaRunning;
-(BOOL)enabled;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)wantsRedraw;
-(CGFloat)_browseScale;
-(CGFloat)zoomFactor;
-(float)_translationCoef;
-(id)freeCamera;
-(id)frontVector;
-(id)gestureRecognizers;
-(id)init;
-(struct C3DSphere )viewedObjectSphere;
-(struct SCNVector3 )cameraAutomaticTargetPoint;
-(void)_beginTranslateAtLocation:(struct CGPoint )arg0 ;
-(void)_handleDoubleTap:(id)arg0 ;
-(void)_handlePan:(id)arg0 ;
-(void)_handlePinch:(id)arg0 ;
-(void)_handlePress:(id)arg0 ;
-(void)_handleRotation:(id)arg0 ;
-(void)_installFreeViewCameraIfNeeded;
-(void)_onInertiaTimer;
-(void)_prepareFreeViewCamera;
-(void)_resetBrowseScaleFactor;
-(void)_resetFreeViewCamera;
-(void)_rotateWithDrag:(struct CGPoint )arg0 mode:(NSInteger)arg1 stickyAxis:(NSUInteger)arg2 ;
-(void)_setInertiaRunning:(BOOL)arg0 ;
-(void)_startBrowsingIfNeeded:(struct CGPoint )arg0 ;
-(void)_switchToFreeViewCamera;
-(void)_translateTo:(struct CGPoint )arg0 ;
-(void)activateFreeCamera;
-(void)beginGesture:(id)arg0 ;
-(void)cameraDidChange;
-(void)cameraWillChange;
-(void)clearRoll;
-(void)computeAutomaticTargetPoint;
-(void)dealloc;
-(void)endDraggingWithVelocity:(struct CGPoint )arg0 ;
-(void)focusNode:(id)arg0 ;
-(void)invalidateCameraTarget;
-(void)panWithGestureRecognizer:(id)arg0 ;
-(void)pinchWithGestureRecognizer:(id)arg0 ;
-(void)rotateOf:(CGFloat)arg0 ;
-(void)rotateWithGestureRecognizer:(id)arg0 ;
-(void)rotateWithVector:(NSInteger)arg0 mode;
-(void)sceneDidChange;
-(void)sceneWillChange;
-(void)setEnableFreeCamera:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setZoomFactor:(CGFloat)arg0 ;
-(void)translateByX:(float)arg0 Y:(float)arg1 Z:(float)arg2 ;
-(void)updateBrowseScaleFactor;
-(void)viewWillDrawAtTime:(CGFloat)arg0 ;
-(void)zoomBy:(float)arg0 ;
-(void)zoomBy:(float)arg0 animate:(BOOL)arg1 ;


@end


#endif