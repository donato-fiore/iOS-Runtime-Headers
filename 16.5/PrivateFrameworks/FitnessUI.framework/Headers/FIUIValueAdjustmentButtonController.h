// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIVALUEADJUSTMENTBUTTONCONTROLLER_H
#define FIUIVALUEADJUSTMENTBUTTONCONTROLLER_H

@class NSTimer, UIButton;

#import <Foundation/Foundation.h>

#import "FIUIWorkoutLapLengthIndexTranslator.h"

@interface FIUIValueAdjustmentButtonController : NSObject {
    NSTimer *_plusMinusActionTimer;
    NSInteger _plusMinusActionRepeatCount;
}


@property (copy, nonatomic) id *buttonStateUpdateHandler; // ivar: _buttonStateUpdateHandler
@property (readonly, weak, nonatomic) UIButton *decrementButton; // ivar: _decrementButton
@property (nonatomic) BOOL didUserUpdatevalue; // ivar: _didUserUpdatevalue
@property (readonly, weak, nonatomic) UIButton *incrementButton; // ivar: _incrementButton
@property (retain, nonatomic) FIUIWorkoutLapLengthIndexTranslator *lapLengthIndexTranslator; // ivar: _lapLengthIndexTranslator
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (nonatomic) CGFloat minumumStepValueIncrement; // ivar: _minumumStepValueIncrement
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) CGFloat valueStepIncremement; // ivar: _valueStepIncremement
@property (copy, nonatomic) id *valueUpdateHandler; // ivar: _valueUpdateHandler


-(void)_incrementRepeatCount;
-(void)_notifyValueChanged;
-(void)_performPlusMinusActionWithButton:(id)arg0 ;
-(void)_performPlusMinusActionWithIndexTranslationForButton:(id)arg0 ;
-(void)_plusMinusActionTimerDidFire:(id)arg0 ;
-(void)_plusMinusButtonTouchCancel:(id)arg0 ;
-(void)_plusMinusButtonTouchDown:(id)arg0 ;
-(void)_plusMinusButtonTouchUpInside:(id)arg0 ;
-(void)_updateButton:(id)arg0 forPressedState:(BOOL)arg1 ;
-(void)_updatePlusMinusButtonStates;


@end


#endif