// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCEXTENDEDGAMEPAD_H
#define GCEXTENDEDGAMEPAD_H

@class NSString;
@protocol _GCGamepadEventSink, NSSecureCoding;


#import "GCPhysicalInputProfile.h"
#import "GCControllerButtonInput.h"
#import "GCController.h"
#import "GCControllerDirectionPad.h"

@interface GCExtendedGamepad : GCPhysicalInputProfile <_GCGamepadEventSink, NSSecureCoding>

 {
    NSInteger _buttonHomeUsage;
    NSInteger _buttonMenuUsage;
    NSInteger _buttonOptionsUsage;
    id *_gamepadEventObservation;
}


@property (readonly, nonatomic) GCControllerButtonInput *_buttonHome;
@property (readonly, nonatomic) GCControllerButtonInput *_buttonShare; // ivar: __buttonShare
@property (readonly, nonatomic) GCControllerButtonInput *button0;
@property (readonly, nonatomic) GCControllerButtonInput *button1;
@property (readonly, nonatomic) GCControllerButtonInput *button2;
@property (readonly, nonatomic) GCControllerButtonInput *button3;
@property (readonly, nonatomic) GCControllerButtonInput *buttonA; // ivar: _button0
@property (readonly, nonatomic) GCControllerButtonInput *buttonB; // ivar: _button1
@property (readonly, nonatomic) GCControllerButtonInput *buttonHome; // ivar: _buttonHome
@property (readonly, nonatomic) GCControllerButtonInput *buttonMenu; // ivar: _buttonMenu
@property (readonly, nonatomic) GCControllerButtonInput *buttonOptions; // ivar: _buttonOptions
@property (readonly, nonatomic) GCControllerButtonInput *buttonX; // ivar: _button2
@property (readonly, nonatomic) GCControllerButtonInput *buttonY; // ivar: _button3
@property (readonly, weak, nonatomic) GCController *controller;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GCControllerDirectionPad *dpad; // ivar: _dpad
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GCControllerButtonInput *leftShoulder; // ivar: _leftShoulder
@property (readonly, nonatomic) GCControllerDirectionPad *leftThumbstick; // ivar: _leftThumbstick
@property (readonly, nonatomic) GCControllerButtonInput *leftThumbstickButton; // ivar: _leftThumbstickButton
@property (readonly, nonatomic) GCControllerButtonInput *leftTrigger; // ivar: _leftTrigger
@property (readonly, nonatomic) BOOL recordUsagePresent; // ivar: _recordUsagePresent
@property (readonly, nonatomic) GCControllerButtonInput *rightShoulder; // ivar: _rightShoulder
@property (readonly, nonatomic) GCControllerDirectionPad *rightThumbstick; // ivar: _rightThumbstick
@property (readonly, nonatomic) GCControllerButtonInput *rightThumbstickButton; // ivar: _rightThumbstickButton
@property (readonly, nonatomic) GCControllerButtonInput *rightTrigger; // ivar: _rightTrigger
@property (readonly, nonatomic) BOOL snapshotUsagePresent; // ivar: _snapshotUsagePresent
@property (readonly) Class superclass;
@property (copy, nonatomic) id *valueChangedHandler; // ivar: _valueChangedHandler


+(BOOL)supportsSecureCoding;
+(id)_current;
-(BOOL)allowsRotation;
-(BOOL)reportsAbsoluteDpadValues;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithController:(id)arg0 ;
-(id)initWithController:(id)arg0 initInfo:(struct ? *)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 info:(struct ? *)arg1 ;
-(id)initWithInfo:(struct ? *)arg0 ;
-(id)name;
-(id)productCategory;
-(id)saveSnapshot;
-(id)setElementValuesFromExtendedGamepad:(id)arg0 ;
-(void)_triggerValueChangedHandlerForElement:(id)arg0 queue:(id)arg1 ;
-(void)applyGlyphSetOverrides;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEvent:(struct __IOHIDEvent *)arg0 ;
-(void)initAuxiliaryButtonsWithInitInfo:(struct ? *)arg0 ;
-(void)initShareFunctionalityWithInitInfo:(struct ? *)arg0 ;
-(void)populateEncodedInitInfo:(struct ? *)arg0 ;
-(void)setAllowsRotation:(BOOL)arg0 ;
-(void)setGamepadEventSource:(id)arg0 ;
-(void)setReportsAbsoluteDpadValues:(BOOL)arg0 ;
-(void)setStateFromExtendedGamepad:(id)arg0 ;


@end


#endif