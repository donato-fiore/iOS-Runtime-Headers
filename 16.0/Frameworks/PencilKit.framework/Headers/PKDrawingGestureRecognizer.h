// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDRAWINGGESTURERECOGNIZER_H
#define PKDRAWINGGESTURERECOGNIZER_H

@class UIGestureRecognizer, NSString, UITouch;
@protocol PKDrawingGestureRecognizerProtocol, PKDrawingGestureRecognizerDelegate, PKDrawingGestureTarget;



@interface PKDrawingGestureRecognizer : UIGestureRecognizer <PKDrawingGestureRecognizerProtocol>

 {
    CGFloat _squaredThreshold;
    CGPoint _drawTouchStartPoint;
    BOOL _drawingTargetIsDrawing;
    BOOL _gestureDetected;
    BOOL _ignoreFingerTouchesUntilReset;
}


@property (readonly, nonatomic) NSUInteger activeInputProperties; // ivar: _activeInputProperties
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKDrawingGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<PKDrawingGestureTarget> *drawingTarget; // ivar: drawingTarget
@property (retain, nonatomic) UITouch *drawingTouch; // ivar: _drawingTouch
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReplaying;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat thresholdDistance; // ivar: _thresholdDistance


-(BOOL)_shouldBeginDrawing:(id)arg0 withEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_beginDrawingWithTouch:(id)arg0 ;
-(void)_cancelDrawing;
-(void)_drawingBegan;
-(void)_drawingCancelled;
-(void)_drawingEnded;
-(void)_drawingMoved:(id)arg0 ;
-(void)_endDrawing;
-(void)_updateDrawingWithEvent:(id)arg0 ;
-(void)cancel;
-(void)end;
-(void)reset;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEstimatedPropertiesUpdated:(id)arg0 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif