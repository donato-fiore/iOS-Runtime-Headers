// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCROLLVIEWPINCHGESTURERECOGNIZER_H
#define UISCROLLVIEWPINCHGESTURERECOGNIZER_H



#import "UIPinchGestureRecognizer.h"
#import "UIScrollView.h"

@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
    SEL _scrollViewAction;
    BOOL _hasParentScrollView;
}


@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView


-(BOOL)_analyticsIsGestureHandled;
-(CGFloat)_hysteresis;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_transformChangedWithEvent:(id)arg0 ;
-(void)removeTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif