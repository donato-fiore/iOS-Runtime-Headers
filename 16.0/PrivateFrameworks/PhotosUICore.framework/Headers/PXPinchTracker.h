// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPINCHTRACKER_H
#define PXPINCHTRACKER_H

@class NSString;
@protocol PXMutablePinchTracker;


#import "PXObservable.h"
#import "PXNumberFilter.h"
#import "PXChangeDirectionNumberFilter.h"

@interface PXPinchTracker : PXObservable <PXMutablePinchTracker>

 {
    ? _needsUpdateFlags;
    BOOL _didSetInitialValues;
    CGPoint _initialCenter;
    CGSize _initialSize;
    CGAffineTransform _initialTransform;
    CGAffineTransform _initialTransformInverse;
    CGPoint _initialPinchCenter;
    CGFloat _initialPinchDistance;
    CGFloat _initialPinchAngle;
    CGPoint _initialPinchOrigin;
    PXNumberFilter *_pinchRotationFilter;
    PXNumberFilter *_horizontalVelocityFilter;
    PXNumberFilter *_verticalVelocityFilter;
    PXNumberFilter *_scaleVelocityFilter;
    PXNumberFilter *_rotationalVelocityFilter;
    PXChangeDirectionNumberFilter *_scaleDirectionFilter;
}


@property (nonatomic, setter=_setCenter:) CGPoint center; // ivar: _center
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint pinchLocation1; // ivar: _pinchLocation1
@property (nonatomic) CGPoint pinchLocation2; // ivar: _pinchLocation2
@property (readonly, nonatomic) CGFloat rotationHysteris; // ivar: _rotationHysteris
@property (nonatomic, setter=_setScale:) CGFloat scale; // ivar: _scale
@property (nonatomic, setter=_setScaleDirection:) NSInteger scaleDirection; // ivar: _scaleDirection
@property (readonly, nonatomic) CGFloat scaleHysteresis; // ivar: _scaleHysteresis
@property (readonly, nonatomic) BOOL shouldResize; // ivar: _shouldResize
@property (nonatomic, setter=_setSize:) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic) CGFloat time; // ivar: _time
@property (nonatomic, setter=_setTransform:) CGAffineTransform transform; // ivar: _transform
@property (nonatomic, setter=_setVelocity:) PXDisplayVelocity velocity; // ivar: _velocity


-(BOOL)_needsUpdate;
-(id)init;
-(id)initWithCenter:(struct CGPoint )arg0 size:(struct CGSize )arg1 transform:(struct CGAffineTransform )arg2 ;
-(id)mutableChangeObject;
-(void)_invalidateGeometry;
-(void)_invalidateInitialValues;
-(void)_setNeedsUpdate;
-(void)_transformPinchLocation1:(struct CGPoint )arg0 location2:(struct CGPoint )arg1 intoCenter:(struct CGPoint *)arg2 distance:(*CGFloat)arg3 angle:(*CGFloat)arg4 ;
-(void)_updateGeometryIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateInitialValuesIfNeeded;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;


@end


#endif