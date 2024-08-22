// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMZOOMPINCHGESTURERECOGNIZER_H
#define CAMZOOMPINCHGESTURERECOGNIZER_H

@class UIPinchGestureRecognizer;



@interface CAMZoomPinchGestureRecognizer : UIPinchGestureRecognizer

@property (nonatomic, setter=_setZoomPinchInitialDistance:) CGFloat _zoomPinchInitialDistance; // ivar: __zoomPinchInitialDistance
@property (readonly, nonatomic) CGFloat zoomScale;


-(CGFloat)_distanceBetweenInitialTwoTouches;
-(CGFloat)_exponentialZoomScale;
-(CGFloat)_hybridZoomScale;
-(CGFloat)_zoomPinchDistance;
-(void)setState:(NSInteger)arg0 ;


@end


#endif