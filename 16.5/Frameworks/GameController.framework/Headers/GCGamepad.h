// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGAMEPAD_H
#define GCGAMEPAD_H

@class NSString;
@protocol _GCGamepadEventSink, NSSecureCoding;


#import "GCPhysicalInputProfile.h"
#import "GCControllerButtonInput.h"
#import "GCController.h"
#import "GCControllerDirectionPad.h"

@interface GCGamepad : GCPhysicalInputProfile <_GCGamepadEventSink, NSSecureCoding>

 {
    id *_gamepadEventObservation;
}


@property (readonly, nonatomic) GCControllerButtonInput *buttonA; // ivar: _button0
@property (readonly, nonatomic) GCControllerButtonInput *buttonB; // ivar: _button1
@property (retain, nonatomic) GCControllerButtonInput *buttonMenu; // ivar: _buttonMenu
@property (readonly, nonatomic) GCControllerButtonInput *buttonX; // ivar: _button2
@property (readonly, nonatomic) GCControllerButtonInput *buttonY; // ivar: _button3
@property (readonly, weak, nonatomic) GCController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad; // ivar: _dpad
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder; // ivar: _leftShoulder
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder; // ivar: _rightShoulder
@property (readonly) Class superclass;
@property (copy, nonatomic) id *valueChangedHandler; // ivar: _valueChangedHandler


+(BOOL)supportsSecureCoding;
-(BOOL)allowsRotation;
-(BOOL)reportsAbsoluteDpadValues;
-(id)button0;
-(id)button1;
-(id)button2;
-(id)button3;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)name;
-(id)productCategory;
-(id)saveSnapshot;
-(void)_triggerValueChangedHandlerForElement:(id)arg0 queue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)setAllowsRotation:(BOOL)arg0 ;
-(void)setGamepadEventSource:(id)arg0 ;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg0 ;


@end


#endif