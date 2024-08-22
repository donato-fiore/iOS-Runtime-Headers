// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCCONTROLLERDIRECTIONPAD_H
#define GCCONTROLLERDIRECTIONPAD_H



#import "GCControllerElement.h"
#import "GCControllerButtonInput.h"
#import "GCControllerAxisInput.h"

@interface GCControllerDirectionPad : GCControllerElement {
    BOOL _wasZeroed;
    int _timesPressed;
}


@property (readonly, nonatomic) GCControllerButtonInput *down;
@property (readonly, nonatomic) GCControllerButtonInput *left;
@property BOOL nonAnalog; // ivar: _nonAnalog
@property (readonly, nonatomic) GCControllerButtonInput *right;
@property (readonly, nonatomic) GCControllerButtonInput *up;
@property (copy, nonatomic) id *valueChangedHandler; // ivar: _valueChangedHandler
@property (retain, nonatomic) GCControllerAxisInput *xAxis; // ivar: _xAxis
@property (retain, nonatomic) GCControllerAxisInput *yAxis; // ivar: _yAxis


-(BOOL)_commitPendingValueOnQueue:(id)arg0 ;
-(BOOL)isAnalog;
-(id)description;
-(id)initWithDigital:(BOOL)arg0 ;
-(id)initWithDigital:(BOOL)arg0 descriptionName:(id)arg1 ;
-(int)getAndResetTimesPressed;
-(void)_fireValueChanged;
-(void)_fireValueChangedWithQueue:(id)arg0 ;
-(void)setUnmappedLocalizedName:(id)arg0 ;
-(void)setUnmappedNameLocalizationKey:(id)arg0 ;
-(void)setValueForXAxis:(float)arg0 yAxis:(float)arg1 ;


@end


#endif