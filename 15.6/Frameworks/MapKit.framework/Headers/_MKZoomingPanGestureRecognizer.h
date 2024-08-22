// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MKZOOMINGPANGESTURERECOGNIZER_H
#define _MKZOOMINGPANGESTURERECOGNIZER_H

@class UIPanGestureRecognizer;



@interface _MKZoomingPanGestureRecognizer : UIPanGestureRecognizer {
    CGFloat _translation;
    CGFloat _scale;
    CGFloat _velocity;
    CGFloat _previousVelocity;
    BOOL _didStartUpdate;
    CGFloat _lastUpdateTimestamp;
}


@property (readonly, nonatomic) CGFloat scale;
@property (readonly, nonatomic) CGFloat velocity;
@property (nonatomic) CGFloat zoomDraggingResistance; // ivar: _zoomDraggingResistance


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_updateScaleAndVelocityIfNeeded:(NSInteger)arg0 ;
-(void)reset;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif