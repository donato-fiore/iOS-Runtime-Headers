// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITAPTAPHOLDGESTURERECOGNIZER_H
#define _UITAPTAPHOLDGESTURERECOGNIZER_H



#import "UITapGestureRecognizer.h"

@interface _UITapTapHoldGestureRecognizer : UITapGestureRecognizer

@property (nonatomic) int currentNumberOfPresses; // ivar: _currentNumberOfPresses
@property (nonatomic) NSInteger gestureType; // ivar: _gestureType
@property (nonatomic) BOOL isInHoldToAction; // ivar: _isInHoldToAction
@property (nonatomic) BOOL isWaitingForHoldToAction; // ivar: _isWaitingForHoldToAction
@property (nonatomic) BOOL isWaitingForTooSlowForDoubleTap; // ivar: _isWaitingForTooSlowForDoubleTap
@property (nonatomic) CGFloat pressEventBeginTimestamp; // ivar: _pressEventBeginTimestamp
@property (nonatomic) CGFloat startTime; // ivar: _startTime


-(BOOL)_shouldFailInResponseToPresses:(id)arg0 withEvent:(id)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)cancelPendingHoldToAction;
-(void)cancelPendingTooSlowForDoubleTap;
-(void)holdToAction:(id)arg0 ;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)reset;
-(void)scheduleHoldToAction;
-(void)scheduleTooSlowForDoubleTap;
-(void)tooSlowForDoubleTap:(id)arg0 ;


@end


#endif