// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKMOUSEGESTURERECOGNIZER_H
#define WKMOUSEGESTURERECOGNIZER_H

@class UIHoverGestureRecognizer, NSString;
@protocol _UIHoverEventRespondable;



@interface WKMouseGestureRecognizer : UIHoverGestureRecognizer <_UIHoverEventRespondable>

 {
    RetainPtr<UIEvent> _currentHoverEvent;
    RetainPtr<UITouch> _currentTouch;
    BOOL _touching;
    BOOL _cancelledOrExited;
    unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> _lastEvent;
    optional<CGPoint> _lastLocation;
    optional<long> _pressedButtonMask;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldReceiveTouch:(id)arg0 forEvent:(id)arg1 recognizerView:(id)arg2 ;
-(id)mouseTouch;
-(struct CGPoint )locationInView:(id)arg0 ;
-(struct optional<CGPoint> )lastMouseLocation;
-(struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> )createMouseEventWithType:(char)arg0 wasCancelled:(BOOL)arg1 ;
-(struct unique_ptr<WebKit::NativeWebMouseEvent, std::default_delete<WebKit::NativeWebMouseEvent>> )takeLastMouseEvent;
-(void)_hoverCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverEntered:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverExited:(id)arg0 withEvent:(id)arg1 ;
-(void)_hoverMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif