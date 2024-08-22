// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCSTEERINGWHEELELEMENT_H
#define GCSTEERINGWHEELELEMENT_H

@class GCDevicePhysicalInputElement, NSSet, NSString;
@protocol GCAxisInput, GCRelativeInput, GCAxisElement;



@interface GCSteeringWheelElement : GCDevicePhysicalInputElement <GCAxisInput, GCRelativeInput, GCAxisElement>

 {
    NSInteger _wheelField;
    NSUInteger _valueChangedHandlerSlot;
    NSUInteger _deltaChangedHandlerSlot;
    NSUInteger _valueSlot;
    NSUInteger _deltaSlot;
    NSUInteger _timestampSlot;
}


@property (readonly) NSObject<GCAxisInput> *absoluteInput;
@property (readonly) NSSet *aliases;
@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) BOOL canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float delta;
@property (copy) id *deltaDidChangeHandler;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastDeltaLatency;
@property (readonly) CGFloat lastDeltaTimestamp;
@property (readonly) CGFloat lastValueLatency;
@property (readonly) CGFloat lastValueTimestamp;
@property (readonly) NSString *localizedName;
@property (readonly) float maximumDegreesOfRotation; // ivar: _maximumDegreesOfRotation
@property (readonly) NSObject<GCRelativeInput> *relativeInput;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) float value;
@property (copy) id *valueDidChangeHandler;


-(BOOL)isEqualToElement:(id)arg0 ;
-(NSUInteger)handleGamepadEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)onCommitInvokeCallbacks:(NSUInteger)arg0 ;


@end


#endif