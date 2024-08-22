// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCDEVICEPHYSICALINPUTDIRECTIONPADELEMENT_H
#define _GCDEVICEPHYSICALINPUTDIRECTIONPADELEMENT_H

@class GCDevicePhysicalInputElement, NSSet, NSString;
@protocol GCDirectionPadElement, GCLinearInput><GCPressedStateInput, GCAxisInput;



@interface _GCDevicePhysicalInputDirectionPadElement : GCDevicePhysicalInputElement <GCDirectionPadElement>

 {
    NSUInteger _xAxisSlot;
    NSUInteger _yAxisSlot;
    NSUInteger _upInputSlot;
    NSUInteger _downInputSlot;
    NSUInteger _leftInputSlot;
    NSUInteger _rightInputSlot;
    NSInteger _gamepadEventUpValueField;
    NSInteger _gamepadEventDownValueField;
    NSInteger _gamepadEventLeftValueField;
    NSInteger _gamepadEventRightValueField;
}


@property (readonly) NSSet *aliases;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<GCLinearInput><GCPressedStateInput> *down;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<GCLinearInput><GCPressedStateInput> *left;
@property (readonly) NSString *localizedName;
@property (readonly) NSObject<GCLinearInput><GCPressedStateInput> *right;
@property (readonly) NSString *sfSymbolsName;
@property (readonly) Class superclass;
@property (readonly) NSObject<GCLinearInput><GCPressedStateInput> *up;
@property (readonly) NSObject<GCAxisInput> *xAxis;
@property (readonly) NSObject<GCAxisInput> *yAxis;


-(BOOL)isEqualToElement:(id)arg0 ;
-(NSUInteger)handleGamepadEvent:(id)arg0 withTimestamp:(CGFloat)arg1 ;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 configuration:(id)arg1 ;
-(void)onCommitInvokeCallbacks:(NSUInteger)arg0 ;


@end


#endif