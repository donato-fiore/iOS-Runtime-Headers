// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCMICROGAMEPAD_H
#define GCMICROGAMEPAD_H

@protocol NSSecureCoding;


#import "GCPhysicalInputProfile.h"
#import "GCControllerButtonInput.h"
#import "GCController.h"
#import "GCControllerDirectionPad.h"

@interface GCMicroGamepad : GCPhysicalInputProfile <NSSecureCoding>

 {
    NSInteger _deviceType;
}


@property (nonatomic) BOOL allowsRotation; // ivar: _allowsRotation
@property (readonly, nonatomic) GCControllerButtonInput *buttonA; // ivar: _button0
@property (readonly, nonatomic) GCControllerButtonInput *buttonMenu; // ivar: _buttonMenu
@property (readonly, nonatomic) GCControllerButtonInput *buttonX; // ivar: _button1
@property (readonly, weak, nonatomic) GCController *controller;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad; // ivar: _dpad
@property (nonatomic) BOOL reportsAbsoluteDpadValues; // ivar: _reportsAbsoluteDpadValues
@property (copy, nonatomic) id *valueChangedHandler; // ivar: _valueChangedHandler


+(BOOL)supportsSecureCoding;
+(id)_current;
-(BOOL)supportsDpadTaps;
-(id)button0;
-(id)button1;
-(id)buttonB;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)name;
-(id)productCategory;
-(id)saveSnapshot;
-(void)_triggerValueChangedHandlerForElement:(id)arg0 queue:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)microControllerWithDigitizerX:(float)arg0 digitizerY:(float)arg1 timestamp:(NSUInteger)arg2 touchDown:(BOOL)arg3 ;
-(void)setLastEventTimestamp:(CGFloat)arg0 ;
-(void)setStateFromMicroGamepad:(id)arg0 ;


@end


#endif