// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLINTERACTIVECAMERACONTROLLER_H
#define MDLINTERACTIVECAMERACONTROLLER_H


#import <Foundation/Foundation.h>

#import "MDLStereoscopicCamera.h"

@interface MDLInteractiveCameraController : NSObject {
    ? _lookAt;
    ? _clickPoint;
    ? _dragVector;
    float _pitch;
    float _yaw;
    MDLAABB _framingBounds;
    float _targetElevation;
    ? _dragPoint;
    ? _viewSize;
    ? _trackVector;
}


@property (copy, nonatomic) MDLStereoscopicCamera *camera; // ivar: _camera
@property ? clickPoint;
@property ? dragPoint;
@property (nonatomic) MDLAABB framingBounds;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property ? position;
@property (nonatomic) float targetDistance; // ivar: _targetDistance
@property ? targetPosition;
@property (nonatomic) float trackSpeed; // ivar: _trackSpeed
@property ? trackVector;
@property (nonatomic) float tumbleSpeed; // ivar: _tumbleSpeed
@property ? viewSize;
@property (nonatomic) float zoom; // ivar: _zoom
@property (nonatomic) float zoomSpeed; // ivar: _zoomSpeed


-(void)mouseMotionX:(float)arg0 Y:(float)arg1 ;
-(void)update:(float)arg0 ;


@end


#endif