// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUGRIDPINCHGESTURERECOGNIZER_H
#define PUGRIDPINCHGESTURERECOGNIZER_H

@class UIPinchGestureRecognizer;



@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer {
    CGPoint _touch0InitialLocation;
    CGPoint _touch1InitialLocation;
    CGFloat _lastTransitionProgress;
}


@property (readonly, nonatomic) CGSize centerOffset;
@property (readonly, nonatomic) NSUInteger transitionDirection; // ivar: _transitionDirection
@property (readonly, nonatomic) CGFloat transitionProgress;
@property (readonly, nonatomic) BOOL transitionShouldFinish;


-(void)_resetTransitionState;
-(void)reset;
-(void)setState:(NSInteger)arg0 ;


@end


#endif