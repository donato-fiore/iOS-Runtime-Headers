// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIREPEATINGPRESSGESTURERECOGNIZER_H
#define _UIREPEATINGPRESSGESTURERECOGNIZER_H



#import "UIGestureRecognizer.h"

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer {
    BOOL _timerOn;
    NSInteger _delayIndex;
}


@property (nonatomic, setter=_setButtonType:) NSInteger _buttonType;
@property (readonly, nonatomic) CGFloat _force; // ivar: _force
@property (nonatomic) NSUInteger changeCount; // ivar: _changeCount
@property (nonatomic) NSUInteger numberOfTouchesRequired; // ivar: _numberOfTouchesRequired


+(CGFloat)delayForRepeatNumber:(NSInteger)arg0 ;
-(BOOL)_isGestureType:(NSInteger)arg0 ;
-(BOOL)_shouldReceivePress:(id)arg0 ;
-(void)_beginPress;
-(void)_cancelPress;
-(void)_changePress;
-(void)_clearTapTimer;
-(void)_endPress;
-(void)_finishNextStep:(id)arg0 ;
-(void)_nextStep:(id)arg0 ;
-(void)_resetGestureRecognizer;
-(void)_scheduleNextTimer;
-(void)dealloc;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesChanged:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)setView:(id)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif