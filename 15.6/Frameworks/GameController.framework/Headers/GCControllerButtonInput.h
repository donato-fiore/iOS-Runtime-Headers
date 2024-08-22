// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERBUTTONINPUT_H
#define GCCONTROLLERBUTTONINPUT_H



#import "GCControllerElement.h"

@interface GCControllerButtonInput : GCControllerElement {
    int _pressCounter;
}


@property (nonatomic) float deadzone; // ivar: _deadzone
@property BOOL nonAnalog; // ivar: _nonAnalog
@property (readonly, nonatomic, getter=isPressed) BOOL pressed;
@property (copy, nonatomic) id *pressedChangedHandler; // ivar: _pressedChangedHandler
@property (readonly, nonatomic, getter=isTouched) BOOL touched; // ivar: _touched
@property (nonatomic, getter=areTouchedAndValueDistinct) BOOL touchedAndValueDistinct; // ivar: _touchedAndValueDistinct
@property (copy, nonatomic) id *touchedChangedHandler; // ivar: _touchedChangedHandler
@property (readonly, nonatomic) float value; // ivar: _value
@property (copy, nonatomic) id *valueChangedHandler; // ivar: _valueChangedHandler


-(BOOL)isAnalog;
-(id)description;
-(id)initWithDescriptionName:(id)arg0 ;
-(int)getAndResetTimesPressed;


@end


#endif