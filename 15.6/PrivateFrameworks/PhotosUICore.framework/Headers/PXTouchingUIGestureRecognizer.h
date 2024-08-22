// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXTOUCHINGUIGESTURERECOGNIZER_H
#define PXTOUCHINGUIGESTURERECOGNIZER_H

@class UIGestureRecognizer;
@protocol PXTouchingUIGestureRecognizerDelegate;



@interface PXTouchingUIGestureRecognizer : UIGestureRecognizer

@property (nonatomic, setter=_setBeginRequestID:) NSUInteger _beginRequestID; // ivar: __beginRequestID
@property (nonatomic, setter=_setDidBegin:) BOOL _didBegin; // ivar: __didBegin
@property (nonatomic, setter=_setInitialPointInView:) CGPoint _initialPointInView; // ivar: __initialPointInView
@property (nonatomic, setter=_setTouchCount:) NSUInteger _touchCount; // ivar: __touchCount
@property (nonatomic, setter=_setWillBegin:) BOOL _willBegin; // ivar: __willBegin
@property (nonatomic) CGFloat maximumTouchMovement; // ivar: _maximumTouchMovement
@property (nonatomic) CGFloat minimumTouchDuration; // ivar: _minimumTouchDuration
@property (weak, nonatomic) NSObject<PXTouchingUIGestureRecognizerDelegate> *touchDelegate; // ivar: _touchDelegate


-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(struct CGPoint )initialLocationInView:(id)arg0 ;
-(void)_beginWithRequestID:(NSUInteger)arg0 ;
-(void)_decrementTouchesBy:(NSUInteger)arg0 ;
-(void)_incrementTouchesBy:(NSUInteger)arg0 ;
-(void)reset;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setState:(NSInteger)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;


@end


#endif