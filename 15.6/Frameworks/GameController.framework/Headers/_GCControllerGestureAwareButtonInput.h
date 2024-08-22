// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _GCCONTROLLERGESTUREAWAREBUTTONINPUT_H
#define _GCCONTROLLERGESTUREAWAREBUTTONINPUT_H

@class NSMutableArray;


#import "GCControllerButtonInput.h"
#import "_GCSetValueEvent.h"

@interface _GCControllerGestureAwareButtonInput : GCControllerButtonInput {
    NSMutableArray *_doublePressEventQueue;
    _GCSetValueEvent *_longPressDownEvent;
    _GCSetValueEvent *_singlePressDownEvent;
    float _realValue;
    int _requiredDoublePressCount;
    BOOL _useActualSystemGestureState;
    NSInteger _actualSystemGestureState;
    NSInteger _preferredSystemGestureState;
}


@property (nonatomic) NSInteger actualSystemGestureState;
@property (copy, nonatomic) id *doublePressHandler; // ivar: _doublePressHandler
@property (nonatomic) float doublePressInterval; // ivar: _doublePressInterval
@property (nonatomic, getter=isDoublePressMuted) BOOL doublePressMuted; // ivar: _doublePressMuted
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) BOOL inputDisabledBySystem; // ivar: _inputDisabledBySystem
@property (copy, nonatomic) id *longPressHandler; // ivar: _longPressHandler
@property (nonatomic) float longPressInterval; // ivar: _longPressInterval
@property (nonatomic, getter=isLongPressMuted) BOOL longPressMuted; // ivar: _longPressMuted
@property (copy, nonatomic) id *singlePressHandler; // ivar: _singlePressHandler
@property (nonatomic) float singlePressInterval; // ivar: _singlePressInterval
@property (nonatomic, getter=isSinglePressMuted) BOOL singlePressMuted; // ivar: _singlePressMuted


-(BOOL)_commitPendingValueOnQueue:(id)arg0 ;
-(BOOL)_setValue:(float)arg0 queue:(id)arg1 ;
-(BOOL)isDoublePressGestureRecognizerEnabled;
-(BOOL)isLongPressGestureRecognizerEnabled;
-(BOOL)isSinglePressGestureRecognizerEnabled;
-(NSInteger)preferredSystemGestureState;
-(id)initWithDescriptionName:(id)arg0 ;
-(void)__onqueue_executeDoublePressRecognizerForEvent:(id)arg0 queue:(id)arg1 ;
-(void)__onqueue_executeLongPressRecognizerForEvent:(id)arg0 queue:(id)arg1 ;
-(void)__onqueue_executeSinglePressRecognizerForEvent:(id)arg0 queue:(id)arg1 ;
-(void)__onqueue_forwardEvent:(id)arg0 queue:(id)arg1 ;
-(void)registerSetValueEvent:(float)arg0 queue:(id)arg1 ;
-(void)setPreferredSystemGestureState:(NSInteger)arg0 ;
-(void)setValue:(float)arg0 ;


@end


#endif