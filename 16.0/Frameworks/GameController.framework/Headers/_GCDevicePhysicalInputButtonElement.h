// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTBUTTONELEMENT_H
#define _GCDEVICEPHYSICALINPUTBUTTONELEMENT_H

@class GCDevicePhysicalInputElement, NSSet, NSString;
@protocol GCLinearInput, GCPressedStateInput, GCButtonElement, GCPressedStateInput><GCLinearInput, GCTouchedStateInput;



@interface _GCDevicePhysicalInputButtonElement : GCDevicePhysicalInputElement <GCLinearInput, GCPressedStateInput, GCButtonElement>

 {
    BOOL _isAnalog;
    float _pressedThreshold;
    NSInteger _pressedValueField;
    NSUInteger _valueChangedHandlerSlot;
    NSUInteger _pressedChangedHandlerSlot;
    NSUInteger _valueSlot;
    NSUInteger _timestampSlot;
}


@property (readonly) NSSet *aliases;
@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) BOOL canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastPressedStateLatency;
@property (readonly) CGFloat lastPressedStateTimestamp;
@property (readonly) CGFloat lastValueLatency;
@property (readonly) CGFloat lastValueTimestamp;
@property (readonly) NSString *localizedName;
@property (readonly, getter=isPressed) BOOL pressed;
@property (copy) id *pressedDidChangeHandler;
@property (readonly) NSObject<GCPressedStateInput><GCLinearInput> *pressedInput;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) NSObject<GCTouchedStateInput> *touchedInput;
@property (readonly) float value;
@property (copy) id *valueDidChangeHandler;


-(BOOL)isEqualToElement:(id)arg0 ;
-(NSUInteger)handleGamepadEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)onCommitInvokeCallbacks:(NSUInteger)arg0 ;


@end


#endif