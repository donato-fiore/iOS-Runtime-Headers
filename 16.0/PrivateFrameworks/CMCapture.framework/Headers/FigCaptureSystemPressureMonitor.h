// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESYSTEMPRESSUREMONITOR_H
#define FIGCAPTURESYSTEMPRESSUREMONITOR_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FigCaptureSystemPressureMonitor : NSObject {
    id *_systemPressureLevelChangedHandler;
    NSObject<OS_dispatch_queue> *_systemPressureLevelChangedHandlerQueue;
    int _thermalPressureNotificationToken;
    int _systemPressureLevelByThermalPressureLevel;
    int _currentSystemPressureFromThermalPressure;
    int _peakPowerNotificationToken;
    int _systemPressureLevelByPeakPowerLevel;
    int _currentSystemPressureFromPeakPower;
    ? _systemPressureLevelByProjectorTemperature;
    int _currentSystemPressureFromProjectorTemperature;
    NSObject<OS_dispatch_source> *_pearlPollTimer;
    ? _pollingTimerStopTime;
}


@property (copy) id *systemPressureLevelChangedHandler;
@property (readonly) int systemPressureLevelFromPearlProjector;


+(void)initialize;
-(id)initWithPearlModuleType:(int)arg0 ;
-(void)callSystemPressureLevelChangedHandler;
-(void)dealloc;
-(void)startMonitoringPearlProjectorTemperatureUntilNominal;
-(void)updateWithPearlProjectorTemperature:(float)arg0 ;


@end


#endif