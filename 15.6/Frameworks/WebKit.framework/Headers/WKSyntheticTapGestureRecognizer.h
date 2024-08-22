// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKSYNTHETICTAPGESTURERECOGNIZER_H
#define WKSYNTHETICTAPGESTURERECOGNIZER_H

@class UITapGestureRecognizer, UIScrollView, NSNumber, UIWebTouchEventsGestureRecognizer;



@interface WKSyntheticTapGestureRecognizer : UITapGestureRecognizer {
    id *_gestureIdentifiedTarget;
    SEL _gestureIdentifiedAction;
    id *_gestureFailedTarget;
    SEL _gestureFailedAction;
    id *_resetTarget;
    SEL _resetAction;
    RetainPtr<NSNumber> _lastActiveTouchIdentifier;
    UIScrollView *_lastTouchedScrollView;
}


@property (readonly, nonatomic) NSNumber *lastActiveTouchIdentifier;
@property (readonly, weak, nonatomic) UIScrollView *lastTouchedScrollView;
@property (weak, nonatomic) UIWebTouchEventsGestureRecognizer *supportingWebTouchEventsGestureRecognizer; // ivar: _supportingWebTouchEventsGestureRecognizer


-(void)reset;
-(void)setGestureFailedTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setGestureIdentifiedTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setResetTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif