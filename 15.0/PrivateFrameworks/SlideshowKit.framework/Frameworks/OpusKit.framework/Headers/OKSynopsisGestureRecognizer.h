// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKSYNOPSISGESTURERECOGNIZER_H
#define OKSYNOPSISGESTURERECOGNIZER_H

@class UIPinchGestureRecognizer;



@interface OKSynopsisGestureRecognizer : UIPinchGestureRecognizer {
    CGFloat _lastScale;
    NSUInteger _currentType;
    id *_target;
    SEL _action;
}


@property (readonly, nonatomic) NSUInteger gestureType; // ivar: _gestureType
@property (readonly, nonatomic) CGFloat progress;


-(BOOL)shouldCompleteGesture;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)handle:(id)arg0 ;


@end


#endif