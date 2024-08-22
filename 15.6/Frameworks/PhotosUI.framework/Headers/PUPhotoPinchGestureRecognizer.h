// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOPINCHGESTURERECOGNIZER_H
#define PUPHOTOPINCHGESTURERECOGNIZER_H

@class UIPinchGestureRecognizer;


#import "PUValueFilter.h"

@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer {
    CGPoint _initialTouchLocations;
    CGPoint _latestTouchLocations;
    BOOL _initialTouchLocationsSet;
}


@property (retain, nonatomic, setter=_setRotationFilter:) PUValueFilter *_rotationFilter; // ivar: __rotationFilter
@property (nonatomic, setter=_setTouchesNeedUpdate:) BOOL _touchesNeedUpdate; // ivar: __touchesNeedUpdate
@property (nonatomic) CGRect initialPinchRect; // ivar: _initialPinchRect
@property (nonatomic) CGFloat rotationHysteresisDegrees; // ivar: _rotationHysteresisDegrees


-(CGFloat)adjustedRotationInView:(id)arg0 ;
-(CGFloat)adjustedRotationVelocityInView:(id)arg0 ;
-(CGFloat)adjustedScaleInView:(id)arg0 ;
-(CGFloat)adjustedScaleVelocityInView:(id)arg0 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )adjustedInitialCenterInView:(id)arg0 ;
-(struct CGPoint )adjustedTranslationInView:(id)arg0 ;
-(struct CGPoint )adjustedTranslationVelocityInView:(id)arg0 ;
-(void)_updateIfNeeded;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif