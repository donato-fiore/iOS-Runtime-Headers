// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNCAMERACONTROLLER_H
#define SCNCAMERACONTROLLER_H

@protocol SCNCameraControllerDelegate;

#import <Foundation/Foundation.h>

#import "SCNNode.h"

@interface SCNCameraController : NSObject {
    ? _orientationState;
    ? _inputLocation;
    ? _arcball;
    ? _inertia;
    ? _up;
    ? _target;
    ? _minimumAngles;
    ? _maximumAngles;
    BOOL _handlingInteraction;
    BOOL _drivenBydefaultNavigationCameraController;
}


@property (nonatomic) BOOL automaticTarget; // ivar: _automaticTarget
@property (nonatomic) NSObject<SCNCameraControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL drivenByDefaultNavigationCameraController;
@property (nonatomic) float horizontalMaximumAngle;
@property (nonatomic) BOOL inertiaEnabled;
@property (nonatomic) float inertiaFriction;
@property (readonly, nonatomic, getter=isInertiaRunning) BOOL inertiaRunning;
@property (nonatomic) NSInteger interactionMode; // ivar: _interactionMode
@property (nonatomic) float maximumHorizontalAngle;
@property (nonatomic) float maximumVerticalAngle;
@property (nonatomic) float minimumHorizontalAngle;
@property (nonatomic) float minimumVerticalAngle;
@property (retain, nonatomic) SCNNode *pointOfView; // ivar: _pointOfView
@property ? simdTarget;
@property ? simdUp;
@property (nonatomic) SCNVector3 target;
@property (nonatomic) SCNVector3 up;
@property (nonatomic) float verticalMaximumAngle;
@property (nonatomic) SCNVector3 worldUp;


-(BOOL)_isLocationValid:(struct CGPoint )arg0 inViewport:(struct CGSize )arg1 ;
-(id)_directionForScreenPoint:(struct CGSize )arg0 viewport;
-(id)_mapToSphere:(struct CGSize )arg0 inViewport;
-(id)_orthographicViewSpaceTranslationForZoomAtScreenPoint:(struct CGSize )arg0 scaleDeltaviewport;
-(struct ? )_convertRotationFromWorldToPointOfView:(struct ? )arg0 ;
-(struct ? )lookAtWithtarget;
-(struct ? )unrolledWorldOrientation:(*float)arg0 ;
-(void)_endDraggingWithVelocity:(struct CGPoint )arg0 ;
-(void)_rotateByX:(float)arg0 Y:(float)arg1 ;
-(void)_translateInCameraSpaceByX:(float)arg0 Y:(float)arg1 Z:(float)arg2 ;
-(void)_updateInertiaAtTime:(CGFloat)arg0 ;
-(void)beginInteraction:(struct CGPoint )arg0 withViewport:(struct CGSize )arg1 ;
-(void)continueInteraction:(struct CGPoint )arg0 withViewport:(struct CGSize )arg1 sensitivity:(CGFloat)arg2 ;
-(void)dollyBy:(float)arg0 onScreenPoint:(struct CGPoint )arg1 viewport:(struct CGSize )arg2 ;
-(void)dollyToTarget:(float)arg0 ;
-(void)endInteraction:(struct CGPoint )arg0 withViewport:(struct CGSize )arg1 velocity:(struct CGPoint )arg2 ;
-(void)frameNodes:(id)arg0 ;
-(void)rollAroundTarget:(float)arg0 ;
-(void)rollBy:(float)arg0 aroundScreenPoint:(struct CGPoint )arg1 viewport:(struct CGSize )arg2 ;
-(void)rollCameraSpaceBy:(float)arg0 withPoint:(struct CGPoint )arg1 viewport:(struct CGSize )arg2 ;
-(void)rotateByX:(float)arg0 Y:(float)arg1 ;
-(void)translateInCameraSpaceByX:(float)arg0 Y:(float)arg1 Z:(float)arg2 ;
-(void)translateInScreenSpaceTo:(struct CGPoint )arg0 viewport:(struct CGSize )arg1 ;
-(void)updateInertiaAtTime:(CGFloat)arg0 ;


@end


#endif