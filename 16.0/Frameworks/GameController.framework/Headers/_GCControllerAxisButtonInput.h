// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCCONTROLLERAXISBUTTONINPUT_H
#define _GCCONTROLLERAXISBUTTONINPUT_H



#import "GCControllerButtonInput.h"
#import "GCControllerAxisInput.h"

@interface _GCControllerAxisButtonInput : GCControllerButtonInput

@property (weak, nonatomic) GCControllerAxisInput *axis; // ivar: _axis
@property (readonly, nonatomic, getter=isPositive) BOOL positive; // ivar: _positive


-(BOOL)_commitPendingValueOnQueue:(id)arg0 ;
-(BOOL)_setValue:(float)arg0 ;
-(BOOL)_setValue:(float)arg0 queue:(id)arg1 ;
-(BOOL)_setValueFromAxisButton:(float)arg0 ;
-(BOOL)_setValueFromAxisButton:(float)arg0 queue:(id)arg1 ;
-(BOOL)isAnalog;
-(float)value;
-(id)collection;
-(id)initWithAxis:(id)arg0 positive:(BOOL)arg1 ;
-(id)localizedName;
-(id)unmappedLocalizedName;
-(void)_setPendingValue:(float)arg0 ;


@end


#endif