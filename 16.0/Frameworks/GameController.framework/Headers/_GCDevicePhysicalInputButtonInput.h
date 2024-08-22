// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTBUTTONINPUT_H
#define _GCDEVICEPHYSICALINPUTBUTTONINPUT_H

@class GCDevicePhysicalInputView, NSString;
@protocol GCLinearInput, GCPressedStateInput;



@interface _GCDevicePhysicalInputButtonInput : GCDevicePhysicalInputView <GCLinearInput, GCPressedStateInput>

 {
    BOOL _isAnalog;
    float _pressedThreshold;
    NSUInteger _valueChangedHandlerSlot;
    NSUInteger _pressedChangedHandlerSlot;
    NSUInteger _valueSlot;
    NSUInteger _timestampSlot;
}


@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) BOOL canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastPressedStateLatency;
@property (readonly) CGFloat lastPressedStateTimestamp;
@property (readonly) CGFloat lastValueLatency;
@property (readonly) CGFloat lastValueTimestamp;
@property (readonly, getter=isPressed) BOOL pressed;
@property (copy) id *pressedDidChangeHandler;
@property (readonly) Class superclass;
@property (readonly) float value;
@property (copy) id *valueDidChangeHandler;


-(id)init;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithParams:(struct _GCDevicePhysicalInputButtonInputParams )arg0 ;
-(void)invokeCallbacksForInputChangedState:(unsigned char)arg0 withElement:(id)arg1 ;


@end


#endif