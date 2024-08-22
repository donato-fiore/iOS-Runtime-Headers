// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCGEARSHIFTERELEMENT_H
#define GCGEARSHIFTERELEMENT_H

@class GCDevicePhysicalInputElement, NSSet, NSString;
@protocol GCSwitchPositionInput, GCRelativeInput, GCPhysicalInputElement;



@interface GCGearShifterElement : GCDevicePhysicalInputElement <GCSwitchPositionInput, GCRelativeInput, GCPhysicalInputElement>

 {
    BOOL _isPatternShifter;
    _NSRange _positionRange;
    NSInteger _valueField;
    NSUInteger _valueChangedHandlerSlot;
    NSUInteger _valueSlot;
    NSUInteger _timestampSlot;
}


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
@property (readonly) CGFloat lastPositionLatency;
@property (readonly) CGFloat lastPositionTimestamp;
@property (readonly) NSString *localizedName;
@property (readonly) NSObject<GCSwitchPositionInput> *patternInput;
@property (readonly) NSInteger position;
@property (copy) id *positionDidChangeHandler;
@property (readonly) _NSRange positionRange;
@property (readonly, getter=isSequential) BOOL sequential;
@property (readonly) NSObject<GCRelativeInput> *sequentialInput;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;


-(BOOL)isEqualToElement:(id)arg0 ;
-(NSUInteger)handleGamepadEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)onCommitInvokeCallbacks:(NSUInteger)arg0 ;


@end


#endif