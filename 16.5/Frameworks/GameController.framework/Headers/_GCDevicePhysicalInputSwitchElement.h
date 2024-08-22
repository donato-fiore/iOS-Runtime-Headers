// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTSWITCHELEMENT_H
#define _GCDEVICEPHYSICALINPUTSWITCHELEMENT_H

@class GCDevicePhysicalInputElement, NSSet, NSString;
@protocol GCSwitchPositionInput, GCSwitchElement;



@interface _GCDevicePhysicalInputSwitchElement : GCDevicePhysicalInputElement <GCSwitchPositionInput, GCSwitchElement>

 {
    BOOL _canWrap;
    BOOL _sequential;
    _NSRange _positionRange;
    NSInteger _gamepadEventPositionField;
    NSUInteger _positionChangedHandlerSlot;
    NSUInteger _positionSlot;
    NSUInteger _timestampSlot;
}


@property (readonly) NSSet *aliases;
@property (readonly) BOOL canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastPositionLatency;
@property (readonly) CGFloat lastPositionTimestamp;
@property (readonly) NSString *localizedName;
@property (readonly) NSInteger position;
@property (copy) id *positionDidChangeHandler;
@property (readonly) NSObject<GCSwitchPositionInput> *positionInput;
@property (readonly) _NSRange positionRange;
@property (readonly, getter=isSequential) BOOL sequential;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;


-(BOOL)isEqualToElement:(id)arg0 ;
-(NSUInteger)handleGamepadEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)onCommitInvokeCallbacks:(NSUInteger)arg0 ;


@end


#endif