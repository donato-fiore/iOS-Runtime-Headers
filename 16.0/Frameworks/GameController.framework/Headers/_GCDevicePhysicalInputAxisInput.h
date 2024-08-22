// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUTAXISINPUT_H
#define _GCDEVICEPHYSICALINPUTAXISINPUT_H

@class GCDevicePhysicalInputView, NSString;
@protocol GCAxisInput;



@interface _GCDevicePhysicalInputAxisInput : GCDevicePhysicalInputView <GCAxisInput>

 {
    BOOL _isAnalog;
    BOOL _canWrap;
    NSUInteger _valueChangedHandlerSlot;
    NSUInteger _valueSlot;
    NSUInteger _timestampSlot;
}


@property (readonly, getter=isAnalog) BOOL analog;
@property (readonly) BOOL canWrap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) CGFloat lastValueLatency;
@property (readonly) CGFloat lastValueTimestamp;
@property (readonly) Class superclass;
@property (readonly) float value;
@property (copy) id *valueDidChangeHandler;


-(id)init;
-(id)initWith:(id)arg0 context:(id)arg1 ;
-(id)initWithParams:(struct _GCDevicePhysicalInputAxisInputParams )arg0 ;
-(void)invokeCallbacksForInputChangedState:(unsigned char)arg0 withElement:(id)arg1 ;


@end


#endif