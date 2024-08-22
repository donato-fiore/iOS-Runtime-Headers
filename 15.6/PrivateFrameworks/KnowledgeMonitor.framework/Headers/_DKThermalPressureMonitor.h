// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKTHERMALPRESSUREMONITOR_H
#define _DKTHERMALPRESSUREMONITOR_H

@class DKMonitor;



@interface _DKThermalPressureMonitor : DKMonitor

@property (nonatomic) BOOL initialized; // ivar: _initialized
@property (nonatomic) int lastThermalPressureLevel; // ivar: _lastThermalPressureLevel
@property (nonatomic) BOOL peakPowerPressureLevel; // ivar: _peakPowerPressureLevel
@property (nonatomic) int peakPowerPressureToken; // ivar: _peakPowerPressureToken
@property (nonatomic) int thermalPressureToken; // ivar: _thermalPressureToken


+(id)entitlements;
+(id)eventStream;
-(id)loadState;
-(void)deactivate;
-(void)dealloc;
-(void)getPeakPowerPressureLevelWithToken:(int)arg0 ;
-(void)getThermalPressureLevelWithToken:(int)arg0 ;
-(void)saveState;
-(void)setCurrentPeakPowerPressureLevel:(unsigned int)arg0 ;
-(void)setCurrentThermalLevel:(int)arg0 ;
-(void)start;
-(void)stop;
-(void)synchronouslyReflectCurrentValue;


@end


#endif