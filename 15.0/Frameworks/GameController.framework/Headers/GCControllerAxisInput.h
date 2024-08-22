// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GCCONTROLLERAXISINPUT_H
#define GCCONTROLLERAXISINPUT_H



#import "GCControllerElement.h"
#import "GCControllerButtonInput.h"

@interface GCControllerAxisInput : GCControllerElement {
    float _minValue;
    float _maxValue;
}


@property (nonatomic, getter=isHorizontal) BOOL horizontal; // ivar: _horizontal
@property (retain, nonatomic) GCControllerButtonInput *negative; // ivar: _negative
@property (retain, nonatomic) GCControllerButtonInput *positive; // ivar: _positive
@property (nonatomic) float value; // ivar: _value
@property (copy, nonatomic) id *valueChangedHandler; // ivar: _valueChangedHandler


-(BOOL)isAnalog;
-(float)maxValue;
-(float)minValue;
-(id)description;
-(id)initWithCollection:(id)arg0 ;
-(id)initWithCollection:(id)arg0 horizontal:(BOOL)arg1 ;
-(int)getAndResetTimesPressed;
-(void)setMinValue:(float)arg0 andMaxValue:(float)arg1 ;


@end


#endif