// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSBATTERYFILLVIEW_H
#define CSBATTERYFILLVIEW_H

@class UIView;



@interface CSBatteryFillView : UIView {
    NSInteger _chargePercentage;
    NSInteger _lowBatteryLevel;
    BOOL _isBatterySaverModeActive;
    BOOL _isInternalBattery;
}




-(id)initWithFrame:(struct CGRect )arg0 isInternalBattery:(BOOL)arg1 lowBatteryLevel:(NSInteger)arg2 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)setBatterySaverModeActive:(BOOL)arg0 ;
-(void)setChargePercentage:(NSInteger)arg0 ;


@end


#endif