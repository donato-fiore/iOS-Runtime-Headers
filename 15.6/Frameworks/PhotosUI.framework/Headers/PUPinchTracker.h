// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPINCHTRACKER_H
#define PUPINCHTRACKER_H


#import <Foundation/Foundation.h>

#import "PUValueFilter.h"

@interface PUPinchTracker : NSObject {
    CGPoint _initialCenter;
    CGSize _initialSize;
    CGAffineTransform _initialTransform;
    CGAffineTransform _initialTransformInverse;
    BOOL _didSetInitialPinchValues;
    CGPoint _initialPinchCenter;
    CGFloat _initialPinchDistance;
    CGFloat _initialPinchAngle;
    CGPoint _initialPinchOrigin;
    PUValueFilter *_pinchRotationValueFilter;
}


@property (nonatomic) BOOL allowTrackingOutside; // ivar: _allowTrackingOutside
@property (nonatomic) CGFloat rotationHysteresisDegrees; // ivar: _rotationHysteresisDegrees
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler


-(id)init;
-(id)initWithInitialCenter:(struct CGPoint )arg0 initialSize:(struct CGSize )arg1 initialTransform:(struct CGAffineTransform )arg2 ;
-(void)_transformPinchLocation1:(struct CGPoint )arg0 location2:(struct CGPoint )arg1 intoCenter:(struct CGPoint *)arg2 distance:(*CGFloat)arg3 angle:(*CGFloat)arg4 ;
-(void)setPinchLocation1:(struct CGPoint )arg0 location2:(struct CGPoint )arg1 ;


@end


#endif